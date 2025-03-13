#include "Brain.hpp"


Brain::Brain() : index(0)
{
    std::cout << "Default Brain Constructor" << std::endl;
}


Brain::Brain(const Brain &other)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "Default Brain copy constructor" << std::endl;
}

Brain& Brain::operator=(Brain &other)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "Default Brain copy assignment" << std::endl;
    return (*this);
}


void Brain::set_ideas(std::string idea)
{
    if (this->index <= 100)
    {
        this->ideas[index] = idea;
    }
    else
        std::cout << "to many ideas for this brain" << std::endl;
    this->index++;
}

std::string Brain::get_ideas(int _index) const
{
    if (_index >= 0 && _index < 100)
        return (this->ideas[_index]);
    return "outside of ideas range";
}

int Brain::get_index() const
{
    return (this->index);
}

Brain::~Brain()
{
    std::cout << "Default Brain Destructor" << std::endl;
}


