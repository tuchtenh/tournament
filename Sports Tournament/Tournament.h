#pragma once
#include <iostream>

class Tournament
{
private:
    std::string Name;
    //date

public:
    Tournament(std::string name);
    ~Tournament();

    std::string getName();
    void setName(std::string name);

};

