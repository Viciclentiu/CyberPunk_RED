//
// Created by Admin on 16/05/2026.
//

#ifndef CYBER_PROGRAM_H
#define CYBER_PROGRAM_H
#include <string>
class Program {
    enum class ProgramType {
        ATTACK,
        DEFENSE,
        BOOSTER,
        ANTI_PROGRAM
    };
    std::string name;
    ProgramType type;
    int attackLevel;
    int strength;
    int slots_required;
    bool isRezzed;

public:
    Program(std::string name, ProgramType type, int attackLevel,
            int strength, int slots_required);

    std::string getName() const { return name; }
    ProgramType getType() const { return type; }
    int getAttackLevel() const { return attackLevel; }
    int getStrength() const { return strength; }
    int getSlotsRequired() const { return slots_required; }
    bool getIsRezzed() const { return isRezzed; }

    void rezz();
    void derezz();

    virtual ~Program() {}
};
#endif //CYBER_PROGRAM_H