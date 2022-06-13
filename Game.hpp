#include "Team.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Game {

    private:
        Team *team1;
        Team *team2;
        int team1_score;
        int team2_score;
        
    
    public:
        Game();
        Game(Team *team1, Team *team2);
        Team *getTeam1();
        Team *getTeam2();
        Team *getWinner();
        double getTeam1Score();
        double getTeam2Score();
        void printGame();

};