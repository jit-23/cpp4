#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
protected:
    std::string  ideas[100];
    int index;
public:
    Brain();
    Brain(const Brain &other);
    Brain& operator=(const Brain &other);
    ~Brain();
    /* setters */
    void set_ideas(std::string idea) ;
    /* getters  */
    int get_index() const;
    std::string get_ideas(int _index)const;
};
#endif