//
// Created by Admin on 15/05/2026.
//

#ifndef CYBER_CYBEREYE_H
#define CYBER_CYBEREYE_H
#include "FoundationalCyberware.h"
class Cybereye : public FoundationalCyberware {
    std::string eyesocket;
    bool visual_overlay_active;
    int current_magnification;
public:
    Cybereye();
    Cybereye(int install_cost,int humanity_loss, std::string install_location,int available_slots,
        bool is_paired,std::string eyesocket,bool visual,int magnif);
    virtual ~Cybereye();
    int calculate_humanity_loss();
    int calculate_remaining_slots();
};
#endif //CYBER_CYBEREYE_H