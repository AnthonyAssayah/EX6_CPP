#include "Team.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Constructor
Team::Team() {
    name = "";
    performance = 0;
    points = 0;
    loss_points = 0;
    win_points = 0;
    totalStreakWin = 0;
    totalStreakLoss = 0;
    gamesWinned = 0;
    gamesLost = 0;
}

// Constructor with parameters
Team::Team(std::string name, double performance) {

    if (performance < 0 || performance > 1) {
        throw invalid_argument("Performance must be between 0 and 1");
    } else {
        this->performance = performance;
    }
    this->name = name;
    points = 0;
    loss_points = 0;
    win_points = 0;
    totalStreakWin = 0;
    totalStreakLoss = 0;
    gamesWinned = 0;
    gamesLost = 0;
}

// Getter for performance
double Team::getPerformance() {
    return this->performance;
}

// Setter for performance
void Team::setPerformance(double performance) {
    if (performance < 0 || performance > 1) {
        throw invalid_argument("Performance must be between 0 and 1");
    } else {
        this->performance = performance;
    }
}

// Getter for name
std::string Team::getName() {
    return this->name;
}

// Getter for points
int Team::getPoints() {
    return this->points;
}

// Getter for loss points
int Team::getLossPoints() {
    return this->loss_points;
}

// Getter for win points
int Team::getWinPoints() {
    return this->win_points;
}

// Getter for total streak win
int Team::getTotalStreakWin() {
    return this->totalStreakWin;
}

// Getter for total streak loss
int Team::getTotalStreakLoss() {
    return this->totalStreakLoss;
}

// Getter for games winned
int Team::getGamesWinned() {
    return this->gamesWinned;
}

// Getter for games lost
int Team::getGamesLost() {
    return this->gamesLost;
}

// Setter for points
void Team::setPoints(int points) {
    this->points += points;
}

// Setter for loss points
void Team::setLossPoints(int loss_points) {
    this->loss_points += loss_points;
}

// Setter for win points
void Team::setWinPoints(int win_points) {
    this->win_points += win_points;
}

void Team::printTeam() {
    std::cout << "Team: " << name << std::endl;
    std::cout << "Performance: " << performance << std::endl;
    std::cout << "Points: " << points << std::endl;
    std::cout << "Loss points: " << loss_points << std::endl;
    std::cout << "Win points: " << win_points << std::endl;
    std::cout << "Total streak win: " << totalStreakWin << std::endl;
    std::cout << "Total streak loss: " << totalStreakLoss << std::endl;
    std::cout << "Games winned: " << gamesWinned << std::endl;
    std::cout << "Games lost: " << gamesLost << std::endl;
}
