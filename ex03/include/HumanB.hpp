#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string name);
        ~HumanB(void);
        
        void setWeapon(Weapon &weapon);
        void attack() const;
};

#endif