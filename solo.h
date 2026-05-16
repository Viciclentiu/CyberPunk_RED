//
// Created by Admin on 16/05/2026.
//

#ifndef CYBER_SOLO_H
#define CYBER_SOLO_H
#include "role.h"

class Solo : public Role {
    // Combat Awareness: adds roleRank to initiative + perception checks
    int combatAwarenessBonus;

public:
    Solo(int rank);

    void useRoleAbility(Character& user) override;
    std::string getRoleAbilityName() const override { return "Combat Awareness"; }
};
#endif //CYBER_SOLO_H