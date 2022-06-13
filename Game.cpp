#include "Game.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Random number generator in range [min, max]
int randomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}


// Constructor
Game::Game() {
    this->team1 = new Team();
    this->team2 = new Team();
    team1_score = 0;
    team2_score = 0;
}

// Constructor with parameters
Game::Game(Team *team1, Team *team2) {
    this->team1 = team1;
    this->team2 = team2;
    this->team1_score = randomNumber(55,100);
    this->team2_score = randomNumber(50,100);
    if (team1->getPerformance() > team2->getPerformance()) {
        int bonus = team1->getPerformance() * 10;
        team1_score += bonus;
    }
    else {
        int bonus = team2->getPerformance() * 10;
        team2_score += bonus;
    }

}

// Getter for team1
Team *Game::getTeam1() {
    return this->team1;
}

// Getter for team2
Team *Game::getTeam2() {
    return this->team2;
}

// Getter for winner
// Team *Game::getWinner() {
//     if (team1_score > team2_score) {
//         team1->getGamesWinned()++;
//         team1->getTotalStreakWin()++;
//         team2->getGamesLost()++;
//         team2->getTotalStreakLoss()++;
//         return team1;
//     } else {
//         team2->getGamesWinned()++;
//         team2->getTotalStreakWin()++;
//         team1->getGamesLost()++;
//         team1->getTotalStreakLoss()++;
//         return team2;
//     }
// }

// Print the game result
void Game::printGame() {
    cout << team1->getName() << " " << team1_score << " - " << team2_score << " " << team2->getName() << endl;
}

