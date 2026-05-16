//
// Created by Admin on 16/05/2026.
//

#ifndef CYBER_ROLE_H
#define CYBER_ROLE_H
class Role {
protected:
    std::string roleName;
    int roleRank;

public:
    Role(std::string name, int rank);
    virtual ~Role();

    std::string getRoleName() const { return roleName; }
    int getRoleRank() const { return roleRank; }

    virtual void useRoleAbility(Character& user) = 0;
    virtual std::string getRoleAbilityName() const = 0;
};

#endif //CYBER_ROLE_H