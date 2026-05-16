//
// Created by Admin on 15/05/2026.
//

#ifndef CYBER_FOUNDATIONALCYBERWARE_H
#define CYBER_FOUNDATIONALCYBERWARE_H
#include "cyberware.h"
#include <string>
class FoundationalCyberware : public Cyberware{
private:
    int available_slots;
    bool is_paired;
public:
    FoundationalCyberware();
    FoundationalCyberware(int install_cost,int humanity_loss, std::string install_location,int available_slots,bool is_paired);

    virtual int calculate_humanity_loss()=0;
    virtual int calculate_remaining_slots() = 0;
    int get_option_slots_used();
    virtual ~FoundationalCyberware();

};
#endif //CYBER_FOUNDATIONALCYBERWARE_H