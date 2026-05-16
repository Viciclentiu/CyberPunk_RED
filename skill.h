//
// Created by Admin on 16/05/2026.
//

#ifndef CYBER_SKILL_H
#define CYBER_SKILL_H
class Skill {
    std::string skillName;
    std::string linkedStat;
    int level;
    bool isDifficult;
public:
    Skill();
    Skill(std::string, std::string, int, bool);

};
#endif //CYBER_SKILL_H