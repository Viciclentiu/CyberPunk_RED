//
// Created by Admin on 13/05/2026.
//

#ifndef CYBER_WEAPON_H
#define CYBER_WEAPON_H
#include "item.h"
class Weapon : public Item {
    int damage_per_roll;
    int rof;
    bool hands_used;
public:
    Weapon();
    Weapon(std::string name,int price, int weight, int price_category,int damage,int rof,bool hands_used);
    virtual ~Weapon();
    virtual int calculate_damage()=0;

};
#endif //CYBER_WEAPON_H