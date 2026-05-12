//
// Created by Admin on 09/05/2026.
//

#ifndef CYBER_DIE_H
#define CYBER_DIE_H
#include <random>
class Die {
private:
        int faces;
        std::string type;
        int roll();
public:
       Die();
       Die(std::string type,int faces);
       Die(const Die& obj);
       std::string get_type();
       int get_roll();
};
#endif //CYBER_DIE_H