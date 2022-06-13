#include "Team.hpp"
#include "Game.hpp"
#include "League.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    Team team1 = Team("Team 1", 0.3);   
    Team team2 = Team("Team 2", 0.7);
    team1.printTeam();
    team2.printTeam();
    team1.setPerformance(0.5);
    team2.setPerformance(0.8);
    team1.printTeam();
    team2.printTeam();
    
    // test for Game class
    // Game game = Game(&team1, &team2);
    // game.printGame();

    // test for League class
    // vector<Team*> teams;
    // teams.push_back(&team1);
    // teams.push_back(&team2);
    // League league = League(teams);
    // league.printLeague();
    return 0;
}
