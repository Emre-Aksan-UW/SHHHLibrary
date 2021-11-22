#pragma once
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

