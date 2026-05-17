//
// Created by Admin on 13/05/2026.
//

#ifndef CYBER_ARMOR_H
#define CYBER_ARMOR_H
#include "item.h"
class Armor : public Item {
    int SP;
    int currentSP;
    int armorPenalty;
public:
    Armor();
    Armor(std::string name,int price, int weight, int price_category,int SP,int currentSP,int armorPenalty);
    virtual ~Armor();
    int calculate_protection(int damage, bool attacktype);
};
#endif //CYBER_ARMOR_H