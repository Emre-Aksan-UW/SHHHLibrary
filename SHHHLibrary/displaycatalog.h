#pragma once
using namespace std;

class DisplayCatalog : Command
{
  public:
    DisplayCatalog(Library library);
    ~DisplayCatalog();
    
    void execute();
};

