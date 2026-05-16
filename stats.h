//
// Created by Admin on 16/05/2026.
//

#ifndef CYBER_STATS_H
#define CYBER_STATS_H
#include <vector>
class Stats {
    vector<int> stats;
    int maxHitpoints;
    int currentHitpoints;
    int humanity;
    int maxhumanity;
    int mortal_wound_threshhold;
public:
    Stats();
    Stats(vector<int> stats, int maxHitpoints,int currentHitpoints,int humanity,int maxhumnity,int mortal_wound_threshhold);
    ~Stats();

};
#endif //CYBER_STATS_H