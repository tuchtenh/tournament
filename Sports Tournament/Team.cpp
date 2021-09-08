#include "Team.h"

Team::Team(std::string nation) {
    Nation = nation;
    //Coach = coach;
    Wins = 0;
    Losses = 0;
    Draws = 0;
    Games = 0;
    Points = 0;
}

Team::~Team() {

}

void Team::Win(Team &against) {
    Wins += 1;
    Points += 3;
    against.Losses += 1;
}
void Team::Loss(Team &against) {
    Losses += 1;
    against.Wins += 1;
    against.Points += 3;
}
void Team::Draw(Team &against) {
    Draws += 1;
    against.Draws += 1;
    Points += 1;
    against.Points += 1;
}


int Team::getWins() { return Wins; }
int Team::getLosses() { return Losses; }
int Team::getDraws() { return Draws; }
int Team::getPoints() const { return Points; }

std::string Team::getNation() {
    return Nation;
}




//void Team::addPlayer(Player player){
//    Players.append(player);
//}
//std::string Team::getPlayers(){
//    for (i=0; i < sizeof.Players; i++){
//        std::count << i << ". " << Players[i].getName() << std::endl;
//    }
//}
