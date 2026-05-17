#include "item.h"
Item::Item() {
    this->name = "";
    price = weight = price_category=0;
}
Item::Item(std::string name, int price, int weight, int price_category) {
    this->name = name;
    this->price = price;
    this->weight = weight;
    this->price_category = price_category;
}
Item::~Item(){}
