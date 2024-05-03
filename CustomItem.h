//Hongtao Li 7747389
#ifndef CUSTOM_ITEM_H
#define CUSTOM_ITEM_H

#include "IceCreamItem.h"
#include <string>
#include <map>
#include <iomanip>
#include <sstream>
class CustomItem: public IceCreamItem{
    public:
        CustomItem(std::string size);
        virtual ~CustomItem();
        void addTopping(std::string topping);
        virtual std::string composeItem();
    private:
        std::map<std::string,int> toppings;
};
#endif