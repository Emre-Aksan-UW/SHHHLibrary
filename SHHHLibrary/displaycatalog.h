#pragma once
using namespace std;

class DisplayCatalog : public Command
{
  public:
    DisplayCatalog();
    ~DisplayCatalog();
    void execute();
};

