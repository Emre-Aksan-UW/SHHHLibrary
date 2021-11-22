#pragma once
using namespace std;

class DisplayHistory : Command
{
  public:
    DisplayHistory(Library library, int id);
    ~DisplayHistory();
  
    int id;
  
    void execute();
};

