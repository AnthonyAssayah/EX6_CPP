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
    Team team3 = Team("Team 3", 0.5);
    Team team4 = Team("Team 4", 0.8);
    Team team5 = Team("Team 5", 0.2);
    Team team6 = Team("Team 6", 0.1);
    Team team7 = Team("Team 7", 0.9);
    Team team8 = Team("Team 8", 0.4);
    Team team9 = Team("Team 9", 0.6);
    Team team10 = Team("Team 10", 0.5);
    Team team11 = Team("Team 11", 0.3);
    Team team12 = Team("Team 12", 0.7);
    Team team13 = Team("Team 13", 0.5);
    Team team14 = Team("Team 14", 0.8);
    Team team15 = Team("Team 15", 0.2);
    Team team16 = Team("Team 16", 0.1);
    Team team17 = Team("Team 17", 0.9);
    Team team18 = Team("Team 18", 0.4);
    Team team19 = Team("Team 19", 0.6);
    Team team20 = Team("Team 20", 0.5);
    // test for league
    League league = League();
    league.addTeam(team1);
    league.addTeam(team2);
    league.addTeam(team3);
    league.addTeam(team4);
    league.addTeam(team5);
    league.addTeam(team6);
    league.addTeam(team7);
    league.addTeam(team8);
    league.addTeam(team9);
    league.addTeam(team10);
    league.addTeam(team11);
    league.addTeam(team12);
    league.addTeam(team13);
    league.addTeam(team14);
    league.addTeam(team15);
    league.addTeam(team16);
    league.addTeam(team17);
    league.addTeam(team18);
    league.addTeam(team19);
    league.addTeam(team20);
    league.printLeague();
    team1.printTeam();
    team2.printTeam();
    team1.setPerformance(0.5);
    team2.setPerformance(0.8);
    team1.printTeam();
    team2.printTeam();
    

    // test for Game class
    Game game = Game(&team1, &team2);
    game.printGame();

    return 0;
}
