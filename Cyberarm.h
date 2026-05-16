//
// Created by Admin on 15/05/2026.
//

#ifndef CYBER_CYBERARM_H
#define CYBER_CYBERARM_H
#include "FoundationCyberware.h"
class Cyberarm : public Foundationalcyberware {
    std::string arm_location;
    std::string hand_type;
    bool isExternal;
    bool hiddenWeaponActive;
public:
    Cyberarm();
    Cyberarm(int install_cost,int humanity_loss, std::string install_location,int available_slots,bool is_paired,
        std::string arm_location,std::string hand_type, bool external,bool activeweapon);
    virtual ~Cyberarm();
    int calculate_humanity_loss();
    int calculate_remaining_slots();
};
#endif //CYBER_CYBERARM_H