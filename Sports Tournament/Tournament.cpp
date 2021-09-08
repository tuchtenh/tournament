#include "Tournament.h"

// Tournament constructor
Tournament::Tournament(std::string name) {
    Name = name;
}
Tournament::~Tournament() {

}

//
std::string Tournament::getName() {
    return Name;
}

void Tournament::setName(std::string name) {
    Name = name;
}


