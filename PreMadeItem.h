//Hongtao Li 7747389
#ifndef PREMADE_ITEM_H
#define PREMADE_ITEM_H

#include "IceCreamItem.h"
#include <string>
class PreMadeItem : public IceCreamItem{
    public:
        PreMadeItem(std::string name, std::string size);
        virtual ~PreMadeItem();
        virtual std::string composeItem();
    private:
        std::string name;
};
#endif