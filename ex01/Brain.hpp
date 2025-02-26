#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <array>
#include <string>
#include <iostream>

class Brain
{
private:
    std::array <std::string, 100> ideas;
public:
    int index;
    Brain();
    Brain(const Brain &other);
    Brain& operator=(Brain &other);
    ~Brain();

    /* setters */
    void set_ideas(std::string idea);

    /* getters  */
    std::string get_ideas();
};

Brain::Brain()
{
    std::cout << "Default Brain Constructor" << std::endl;
}

Brain::Brain(const Brain &other)
{
    this->ideas = other.ideas;
    std::cout << "Default Brain copy constructor" << std::endl;
}

Brain& Brain::operator=(Brain &other)
{
    this->ideas = other.ideas;
    std::cout << "Default Brain copy assignment" << std::endl;
    return (*this);
}


void Brain::set_ideas(std::string idea)
{
    if (this->index == 100)
    {
        
    }
}


Brain::~Brain()
{
    std::cout << "Default Brain Destructor" << std::endl;
}


#endif