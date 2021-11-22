#pragma once
using namespace std;

class DisplayHistory : Command
{
  public:
    DisplayHistory();
    ~DisplayHistory();
  
    int id;
  
    void execute();
};

