//
// Created by Admin on 13/05/2026.
//

#ifndef CYBER_GEAR_H
#define CYBER_GEAR_H
#include "item.h"
class Gear: public Item {
    int stat;
    std::string desc;
public:
    Gear();
    Gear(std::string name,int price, int weight, int price_category,std::string desc,int stat);
    virtual ~Gear();
    void calculate_adv(); // for airhypos

};
#endif //CYBER_GEAR_H