#include "weapon.h"
Weapon::Weapon() {
    rof = 0 ;
    damage_per_roll = 0;
    hands_used = 0;
}
Weapon::Weapon(std::string name,int price, int weight, int price_category,int damage,int rof,bool hands_used) : Item(name,price,weight,price_category) {
    this->damage_per_roll = damage;
    this->rof = rof;
    this-> hands_used = hands_used;
}
Weapon::~Weapon(){}
