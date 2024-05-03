//Hongtao Li 7747389
#include "PreMadeItem.h"
#include <sstream>
#include <iomanip>
PreMadeItem::PreMadeItem(std::string name, std::string size) : IceCreamItem(size), name(name){
    if (size == "small") {
        this->price = 4.00;
    } else if (size == "medium") {
        this->price = 6.00;
    } else if (size == "large") {
        this->price = 7.50;
    }
}
PreMadeItem::~PreMadeItem() {
    // No dynamic memory to clean up, but necessary for polymorphism
}
std::string PreMadeItem::composeItem(){
    std::ostringstream stream;
    stream << std::fixed << std::setprecision(2);
    stream << "Pre-made Size: " << size << "\n";
    stream << "Pre-made Item: " << name << "\n";
    stream << "Price: $" << getPrice()<<"\n";
    return stream.str();
}