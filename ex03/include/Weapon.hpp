#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        ~Weapon(void);
        
        const std::string &getType() const;
        void setType(const std::string &type);
};
#endif