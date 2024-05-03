//Hongtao Li 7747389
#include "IceCreamItem.h"
#include <string>
#include <sstream> // For std::ostringstream
#include <iomanip>  // For std::setprecision


IceCreamItem::IceCreamItem(std::string size){
    this->size = size;
    if (size == "small"){
        this->price = 3.00;
    }else if(size == "medium"){
        this->price = 5.00;
    }else if(size == "large"){
        this->price = 6.50;
    }
}
std::string IceCreamItem::composeItem(){
    std::ostringstream stream;
    stream << std::fixed << std::setprecision(2); // Setting precision for currency output
    stream << "Custom Size: " << this->size << "\nPrice: $" << this->price<<"\n";
    return stream.str();
}

double IceCreamItem::getPrice(){
    return this->price;
}