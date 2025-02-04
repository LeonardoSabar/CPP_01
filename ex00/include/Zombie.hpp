#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include "Colors.hpp"


class Zombie
{
    private:
        std::string _name;
    public:
        Zombie(std::string name);
        ~Zombie(void);

        void announce(void) const;
        void setName(std::string name);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
