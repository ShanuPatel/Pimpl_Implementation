#include "pimpl.h"

struct Pimple::Impl
{
    Impl(std::string Name, std::string id)
        :m_Name(Name),m_id(id){}

    std::string m_Name;
    std::string m_id;
};

Pimple::Pimple(std::string Name, std::string id)
    :pImpl(new Impl(Name, id)) {}

Pimple::~Pimple() = default;

Pimple::Pimple(const Pimple& other)
    :pImpl(new Impl(*other.pImpl)) {}

Pimple& Pimple::operator=(Pimple rhs)
{
    std::swap(pImpl, rhs.pImpl);
    return *this;
}

std::string Pimple::getName() const
{
    return pImpl->m_Name;
}

std::string Pimple::getId()const
{
    return pImpl->m_id;
}

void Pimple::setName(std::string name)
{
    pImpl->m_Name = name;
}