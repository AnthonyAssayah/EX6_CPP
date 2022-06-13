#include <Schedule.hpp>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Constructor with parameters
Schedule::Schedule(League *league) {
    this->league = league;
    this->results_table = vector< vector<Game*> >(league->getTeams().size(), vector<Game*>(league->getTeams().size()));
    for (int i = 0; i < league->getTeams().size(); i++) {
        for (int j = 0; j < league->getTeams().size(); j++) {
            if (i == j) {
                this->results_table[i][j] = new Game(league->getTeams()[i], league->getTeams()[j]);
            } else {
                this->results_table[i][j] = new Game();
            }
        }
    }
}

// Getter for results_table
vector< vector<Game*> > Schedule::getResultsTable() {
    return this->results_table;
}

// printSchedule
void Schedule::printSchedule() {
    for (int i = 0; i < this->results_table.size(); i++) {
        for (int j = 0; j < this->results_table.size(); j++) {
            cout << this->results_table[i][j]->getTeam1()->getName() << " vs " << this->results_table[i][j]->getTeam2()->getName() << endl;
        }
    }
}
