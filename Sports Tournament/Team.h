#pragma once
#include <iostream>

class Team
{
private:
    std::string Nation;
    //Player Players[26];
    //Player Coach;
    int Wins;
    int Losses;
    int Draws;
    int Games;
    int Points;


public:
    Team(std::string Nation);
    ~Team();

    void Win(Team &against);
    void Loss(Team &against);
    void Draw(Team &two);
    int getWins();
    int getLosses();
    int getDraws();
    int getPoints() const;
    std::string getNation();

    //void addPlayer(Player player);
    //std::string getPlayers();

};

struct more_than_key
{
    inline bool operator() (const Team* team1, const Team* team2)
    {
        return (team1->getPoints() > team2->getPoints());
    }

};


