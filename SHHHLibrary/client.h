#pragma once
include <iostream>
include "command.h"
include "item.h"
using namespace std;    
class Client
{
    private:
    string name;
    int id;
    item* libraryItem[];
    
    public:
    Client(istream& infile);
    ~Client();
    
    bool requestAction(Command command);
};

