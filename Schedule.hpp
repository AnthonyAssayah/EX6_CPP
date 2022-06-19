#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Team.hpp"
#include "League.hpp"
#include "Game.hpp"
#include <algorithm>

using namespace std;

class Schedule{

    private:
        League *league;
        std::vector<std::vector<Game*>> results_table;

    public:
        Schedule();
        Schedule(League my_league);
        vector< vector<Game*> > getResultsTable();
        void printSchedule();
      
};
