//
// Created by Admin on 15/05/2026.
//

#ifndef CYBER_CYBERWARE_H
#define CYBER_CYBERWARE_H
#include <string>
class Cyberware {
private:
    int install_cost;
    int humanity_loss;
    std::string install_location;
public:
    Cyberware();
    Cyberware(int install_cost,int humanity_loss, std::string install_location);
    int get_install_cost();
    bool can_install(); // cost can affect. I want to add cyberpsychosis
    virtual int calculate_humanity_loss() = 0;
    virtual ~Cyberware();

};
#endif //CYBER_CYBERWARE_H