#pragma once

#include <vector>
#include "Team.h"
#include "Tournament.h"

class Group {
private:
    char Letter;
    std::vector<Team*> Teams;

public:
    Group(char letter);
    ~Group();
    std::vector<Team*> getGroup();
    void addTeam(Team &team);
    char getGroupName();
    void setGroupName(char letter);

};
