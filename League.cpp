#include <League.hpp>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
const int MAX_TEAM = 20;

// Constructor
League::League() {
    this->league = new vector<Team*>();

}

// Constructor with parameters
League::League(vector<Team*> league) {

    if(league.size() > MAX_TEAM) {
        throw invalid_argument("League can't have more than 20 league");
    } 

    // Add new 20 league names are unique
    int counter = 0;
    if(!this->league.empty()) {
        for(Team *curr_team : this->league) {
            if(this->league.contains(curr_team.getName())) {
                throw invalid_argument("Team names must be unique");
            }
            this->league.push_back(curr_team);
            counter++;
        }
    }

    for ( int i = 0; i < MAX_TEAM - counter; i++) {
        
        Team *team = new Team();
        if (!this->league.contains(team->getName())) {
            this->league.push_back(team);
        }
    }
} 

// Getter for league
vector<Team*> League::getLeague() {
    return this->league;
}

// printLeague
void League::printLeague() {
    for (int i = 0; i < this->league.size(); i++) {
        cout << this->league[i]->getName() << endl;
    }
}