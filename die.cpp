#include "die.h"
Die::Die() {
    int faces =0;
    std::string type = "";
}
Die::Die(std::string type, int faces) {
    this->type = type;
    this->faces = faces;
}
Die::Die(const Die& obj) {
    this->type = obj.type;
    this->faces = faces;
}
int Die::roll() {
    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> roll(1,this->faces);
    int roll_result = roll(rng);
    return roll_result;
}
int Die::get_roll() {
    return this->roll();
}