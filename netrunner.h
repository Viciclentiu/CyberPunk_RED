//
// Created by Admin on 16/05/2026.
//

#ifndef CYBER_NETRUNNER_H
#define CYBER_NETRUNNER_H
#include "role.h"
#include "cyberdeck.h"

class Netrunner : public Role {

    int neuralInterfaceRank;

public:
    Netrunner(int rank)

    void useRoleAbility(Character& user) override;
    std::string getRoleAbilityName() const override { return "Interface"; }
};
#endif //CYBER_NETRUNNER_H