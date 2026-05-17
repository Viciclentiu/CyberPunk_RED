#include "armor.h"
Armor::Armor():Item() {
    this->SP = 0;
    this->armorPenalty = 0;
}
Armor::Armor(std::string name,int price, int weight, int price_category,int SP, int currentSP,int armorPenalty) : Item(name,price,weight,price_category) {
    this->SP = SP;
    this->currentSP = currentSP;
    this->armorPenalty = armorPenalty;
}
Armor::~Armor(){}
int Armor::calculate_protection(int damage,bool attacktype) {
    int effective_SP = currentSP;
    if (attacktype == 0 ) {
        effective_SP = (currentSP + 1)/2;

    }
    int AP =  std::max(0,damage - effective_SP);
    if (AP > 0 ) {
        if (currentSP > 0)
            currentSP-- ;
    }
    return currentSP;
}