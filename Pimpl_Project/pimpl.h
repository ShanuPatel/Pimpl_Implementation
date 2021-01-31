#pragma once

#include <memory>
#include <string>

class Pimple
{
private:
    /***Nomra implementation
    std::string m_Name;
    std::string m_id;
    */

    //pimpl implementation
    struct Impl;
    std::unique_ptr<Impl> pImpl;

protected:
    //
public:

    Pimple(std::string Name, std::string id);
    ~Pimple();
    Pimple(const Pimple& other);//Copy constructor
    Pimple& operator=(Pimple rhs);//assignment operator

    std::string getName() const;
    std::string getId() const;

    void setName(std::string name);
};
