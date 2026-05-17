#include "gear.h"

Gear::Gear() {
    stat=0;
    desc = "";
}
Gear::Gear(std::string name,int price, int weight, int price_category,std::string desc,int stat) : Item(name,price,weight,price_category) {
    this->desc = desc;
    this->stat = stat;
}
int Gear::calculate_adv() {
    return 0;
}
Gear::~Gear(){}