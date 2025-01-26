#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include "Colors.hpp"


class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(void);
        ~Zombie(void);
        
        void announce(void) const;
        void setName(std::string _name);
};

Zombie* zombieHorde(int N, std::string _name);
void    randomChump(std::string _name);

#endif