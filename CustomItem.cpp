//Hongtao Li 7747389

#include "CustomItem.h"


CustomItem::CustomItem(std::string size): IceCreamItem(size){
    if(size == "small") {
        price = 3.00;
    } else if(size == "medium") {
        price = 5.00;
    } else if(size == "large") {
        price = 6.50;
    } else {
        price = 0;
    }
}
CustomItem::~CustomItem(){
    toppings.clear();
}
void CustomItem::addTopping(std::string topping){
    toppings[topping]++;
    price += 0.40;
}
double CustomItem:: getPrice() {
    return price;
}

std::string CustomItem::composeItem(){
    std::ostringstream result;
    result << std::fixed << std::setprecision(2);
    result << "Custom Size: "<< size << "\nToppings:\n";
    for(const auto& topping : toppings){
        result<< topping.first<<": "<<topping.second<< " oz\n";
    }
    result << "Price: $"<< price <<"\n";
    return result.str();
}