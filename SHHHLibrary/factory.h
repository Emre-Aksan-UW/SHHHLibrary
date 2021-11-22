#pragma once
#include "item.h"
#include "command.h"
#include "client.h"
#include <string.h>

class Factory {
private:
    Item* itemFactory[3];
    Command* commandFactory[4];
    int itemHash (char ch) const;
    int commandHash(char ch) const;
public:
    Factory();
    ~Factory();
    Item* createItem(char ch);
    Command* createCommand(char ch);
};

