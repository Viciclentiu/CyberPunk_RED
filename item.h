//
// Created by Admin on 13/05/2026.
//

#ifndef CYBER_ITEM_H
#define CYBER_ITEM_H
#include <string>
class Item {
    std::string name;
    int price;
    int weight;
    int price_category;
public:
    Item();
    Item(std::string name,int price, int weight, int price_category);
    virtual ~Item();
    virtual void use()= 0;

};
#endif //CYBER_ITEM_H