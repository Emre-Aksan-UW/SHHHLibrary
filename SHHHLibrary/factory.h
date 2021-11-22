#pragma once
#include "item.h"
#include "command.h"
#include "client.h"
#include <string.h>

class Factory {
private:
    Item* itemFactory[100];
    Client* clientFactory[100];
    Command* commandFactory[4];
    int itemHash (string str) const;
    int commandHash(char ch) const;
    int clientHash(int id) const;
public:
    Factory();
    ~Factory();
    Item* createItem(string str);
    Client* createClient(int id);
    Command* createCommand(char ch);
};

