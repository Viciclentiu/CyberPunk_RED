//
// Created by Admin on 16/05/2026.
//

#ifndef CYBER_CHARACTER_H
#define CYBER_CHARACTER_H
#include <vector>
#include <memory>
#include "cyberware.h"
#include "item.h"
#include "stats.h"
#include "skill.h"
class Character {
    std::string name;
    std::string real_name;
    unique_ptr<Stats> stats;
    unique_ptr<Role> role;
    vector<unique_ptr<Skill>> skills;
    vector<unique_ptr<Item>> inventory;
    vector<unique_ptr<Cyberware>> implants;
public:
    Character();
    Character(std::string, std::string, Stats&, vector<unique_ptr<Item>>&,vecotr<unique_ptr<Cyberware>>);
    float calculateDerivedStats();
    int rollinitiative();
    int damage_taken(int attack);
    void skillcheck();
    void setRole(std::unique_ptr<Role> r) { role = std::move(r); }
    Role* getRole() const { return role.get(); }
    void useRoleAbility() { if (role) role->useRoleAbility(*this); }

};
#endif //CYBER_CHARACTER_H