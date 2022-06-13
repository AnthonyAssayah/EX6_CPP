#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <League.hpp>

using namespace std;

class Schedule{

    private:
        League *league;
        vector< vector<Game*> > results_table;

    public:
        Schedule();
        Schedule(League *league);
        vector< vector<Game*> > getResultsTable();
        void printSchedule();
      
};
