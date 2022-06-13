#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Team {

    private:
        std::string name; // Name of the team
        double performance; // Performance of the team
        int points; // Points of the team
        int loss_points; // Loss points of the team
        int win_points; // Win points of the team
        int totalStreakWin; // Total streak of wins
        int totalStreakLoss; // Total streak of losses
        int gamesWinned; // Number of games won
        int gamesLost;  // Number of games lost

    public:
        Team(); // Constructor
        Team(std::string name, double performance); // Constructor with parameters
        double getPerformance(); // Getter for performance
        void setPerformance(double performance);  // Setter for performance
        std::string getName(); // Getter for name
        int getPoints(); // Getter for points
        int getLossPoints();  // Getter for loss points
        int getWinPoints(); // getters for win points
        int getTotalStreakWin(); // getters for total streak win
        int getTotalStreakLoss(); // getters for total streak loss
        int getGamesWinned(); // getters for games winned
        int getGamesLost();  // getters for games lost

        void setPoints(int points); // Setter for points
        void setLossPoints(int loss_points); // Setter for loss points
        void setWinPoints(int win_points); // Setter for win points
        void setTotalStreakWin(int totalStreakWin); // Setter for total streak win
        void setTotalStreakLoss(int totalStreakLoss); // Setter for total streak loss
        void setGamesWinned(int gamesWinned); // Setter for games winned
        void setGamesLost(int gamesLost); // Setter for games lost
        void printTeam(); // Print the team

};