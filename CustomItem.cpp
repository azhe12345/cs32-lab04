//Hongtao Li 7747389

#include "CustomItem.h"


CustomItem::CustomItem(std::string size): IceCreamItem(size){

}
CustomItem::~CustomItem(){
    
}
void CustomItem::addTopping(std::string topping){
    toppings[topping]++;
    price += 0.40;
}
std::string CustomItem::composeItem(){
    std::ostringstream result;
    result << std::fixed << std::setprecision(2);
    result << "Custom Size: "<< size << "\nToppings:\n";
    for(const auto& topping : toppings){
        result<< topping.first<<": "<<topping.second<< " oz\n";
    }
    result << "Price: $"<< getPrice()<<"\n";
    return result.str();
}