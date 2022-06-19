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

Schedule::Schedule(League my_league) {

    int increment = 0;
    std::vector<size_t> index_team = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};

    while (this->results_table.size() < 38) {
        std::vector<Game*> tour;
        for (size_t i = 0, j = 19; increment < 10 ; i++, j--) {
            Game *game = new Game(my_league.getTeams()[index_team[i]], my_league.getTeams()[index_team[j]]);
            tour.push_back(game);
            
            increment++;
        }
        this->results_table.push_back(tour);

        std::rotate(index_team.begin(), index_team.begin() + 1, index_team.end());
        increment = 0;
        
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


