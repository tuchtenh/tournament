#include "Group.h"
#include "Team.h"

Group::Group(char letter) {
    Letter = letter;
}

Group::~Group() {
}



std::vector<Team*> Group::getGroup() {
    return Teams;
}

void Group::addTeam(Team &team) {
    if (getGroup().size() < 4) {
        Teams.push_back(&team);
    }
    else {
        std::cout << "Group " << this->Letter << " full, " << team.getNation() << " could not be added. \n" << std::endl;
    }
    
}

char Group::getGroupName() { return Letter; }



void Group::setGroupName(char letter) {
    Letter = letter;
}
