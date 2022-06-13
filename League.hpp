#include "Team.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class League {

    private:
        vector<Team*> teams;
    
    public:
        League();
        League(vector<Team*> teams);
        vector<Team*> getTeams();
        void printLeague();
};