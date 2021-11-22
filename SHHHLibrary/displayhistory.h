#pragma once
using namespace std;

class DisplayHistory : public Command
{
  public:
    DisplayHistory();
    ~DisplayHistory();
  
    int id;
  
    void execute();
};

