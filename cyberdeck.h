//
// Created by Admin on 16/05/2026.
//

#ifndef CYBER_CYBERDECK_H
#define CYBER_CYBERDECK_H
#include "item.h"
#include "program.h"
#include <vector>
#include <memory>
#include <string>

class Cyberdeck : public Item {
    int totalSlots;
    int usedSlots;
    int speed;
    int defense;
    bool jackedIn;

    std::vector<std::unique_ptr<Program>> programs;

public:
    Cyberdeck();
    Cyberdeck(std::string name, int price, int weight, int price_category,
              int totalSlots, int speed, int defense);

    virtual ~Cyberdeck();
    void use() override;
    bool loadProgram(std::unique_ptr<Program> prog);
    void unloadProgram(const std::string& programName);
    Program* getProgram(const std::string& programName);
    int getRemainingSlots() const { return totalSlots - usedSlots; }
    int getSpeed() const { return speed; }
    int getDefense() const { return defense; }
    bool isJackedIn() const { return jackedIn; }
    void jackIn()  { jackedIn = true; }
    void jackOut();
    int rollNetAttack(Program* prog, const Die& die) const;
    int calculateNetDefense() const;
};
#endif //CYBER_CYBERDECK_H