//
// Created by Admin on 15/05/2026.
//

#ifndef CYBER_NEURALINK_H
#define CYBER_NEURALINK_H
#include "FoundationalCyberware.h"
class Neuralink : public Foundationalcyberware {
    bool isJackedIn;
    std::string speedware_type;
    bool isOccupied;
public:
    Neuralink();
    Neuralink(int install_cost,int humanity_loss, std::string install_location,int available_slots,bool is_paired
        , bool isJackedIn, std::string speedware_type, bool isOcupied);
    virtual ~Neuralink();
    int calculate_humanity_loss();
    int calculate_remaining_slots();
};
#endif //CYBER_NEURALINK_H