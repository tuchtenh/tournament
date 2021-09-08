// Sports Tournament.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <algorithm>

#include "Tournament.h"
#include "Team.h"
#include "Group.h"


int main()
{
    std::cout << "Welocome to: \n";

    Tournament uefa = Tournament("Euro 2021");
    std::cout << uefa.getName() << std::endl;
    uefa.setName("Euro 2020");
    std::cout << uefa.getName() << std::endl;
    std::vector<Group*> groups;

    // _________________________Group A____________________________
    Team italy = Team("Italy");
    Team wales = Team("Wales");
    Team switzerland = Team("Switzerland");
    Team turkey = Team("Turkey");
    
    Group ga = Group('A');
    ga.addTeam(italy);
    ga.addTeam(wales);
    ga.addTeam(switzerland);
    ga.addTeam(turkey);

    // _________________________Group B____________________________
    Team belgium = Team("Belgium");
    Team denmark = Team("Denmark");
    Team finland = Team("Finland");
    Team russia = Team("Russia");

    Group gb = Group('B');
    gb.addTeam(belgium);
    gb.addTeam(denmark);
    gb.addTeam(finland);
    gb.addTeam(russia);

    // _________________________Group C____________________________
    Team netherlands = Team("Netherlands");
    Team austria = Team("Austria");
    Team ukraine = Team("Ukraine");
    Team northmacedonia = Team("North Macedonia");

    Group gc = Group('C');
    gc.addTeam(netherlands);
    gc.addTeam(austria);
    gc.addTeam(ukraine);
    gc.addTeam(northmacedonia);

    // _________________________Group D____________________________
    Team england = Team("England");
    Team croatia = Team("Croatia");
    Team czech = Team("Czech Republic");
    Team scotland = Team("Scotland");

    Group gd = Group('D');
    gd.addTeam(england);
    gd.addTeam(croatia);
    gd.addTeam(czech);
    gd.addTeam(scotland);

    // _________________________Group E____________________________
    Team sweden = Team("Sweden");
    Team spain = Team("Spain");
    Team slovakia = Team("Slovakia");
    Team poland = Team("Poland");

    Group ge = Group('E');
    ge.addTeam(sweden);
    ge.addTeam(spain);
    ge.addTeam(slovakia);
    ge.addTeam(poland);

    // _________________________Group F____________________________
    Team france = Team("France");
    Team germany = Team("Germany");
    Team portugal = Team("Portugal");
    Team hungary = Team("Hungary");
    Team greece = Team("Greece");

    Group gf = Group('F');
    gf.addTeam(france);
    gf.addTeam(germany);
    gf.addTeam(portugal);
    gf.addTeam(hungary);
    // could not be added
    gf.addTeam(greece);

    // all groups in one place
    groups.push_back(&ga);
    groups.push_back(&gb);
    groups.push_back(&gc);
    groups.push_back(&gd);
    groups.push_back(&ge);
    groups.push_back(&gf);


    //________Matchday 1________
    // 11 june
    italy.Win(turkey);
    // 12 june
    wales.Draw(switzerland);
    denmark.Loss(finland);
    belgium.Win(russia);
    // 13 june
    england.Win(croatia);
    austria.Win(northmacedonia);
    netherlands.Win(ukraine);
    // 14 june
    scotland.Loss(czech);
    poland.Loss(slovakia);
    spain.Draw(sweden);
    // 15 june
    hungary.Loss(portugal);
    france.Win(germany);

    //________Matchday 2________
    // 16 june
    finland.Loss(russia);
    turkey.Loss(wales);
    italy.Win(switzerland);
    // 17 june
    ukraine.Win(northmacedonia);
    denmark.Loss(belgium);
    netherlands.Win(austria);
    // 18 june
    sweden.Win(slovakia);
    croatia.Draw(czech);
    england.Draw(scotland);
    // 19 june
    hungary.Draw(france);
    portugal.Loss(germany);
    spain.Draw(poland);

    //________Matchday 3________
    // june 20
    italy.Win(wales);
    switzerland.Win(turkey);
    // june 21
    ukraine.Loss(austria);
    northmacedonia.Loss(netherlands);
    finland.Loss(belgium);
    russia.Loss(denmark);
    // june 22
    czech.Loss(england);
    croatia.Win(scotland);
    // june 23
    sweden.Win(poland);
    slovakia.Loss(spain);
    germany.Draw(hungary);
    portugal.Draw(france);

    // Display group names and teams
    for (Group* g: groups) {
        std::vector<Team*> gteams = g->getGroup();
        std::sort(gteams.begin(), gteams.end(), more_than_key());
        std::cout << "____Group " <<  g->getGroupName() << "____" << std::right << std::setw(9) << "Won" << std::setw(9) << "Drawn" << std::setw(9) << "Lost" << std::setw(9) << "Points" << std::endl;
        for (int i = 1; i <= gteams.size(); i++) {
            std::cout  << i << ". " << std::left << std::setw(19) << gteams.at(i - 1)->getNation() << std::left << std::setw(8) << gteams.at(i - 1)->getWins() << std::setw(9) << gteams.at(i - 1)->getDraws() << std::setw(8) << gteams.at(i - 1)->getLosses() << gteams.at(i - 1)->getPoints() << std::endl;
        }
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
