#pragma once
class Client
{
    public:
    Client(istream& infile);
    ~Client();
    
    bool requestAction(Command command);
};

