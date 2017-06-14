#pragma once
#include <iostream>
#include <vector>
using namespace std;
#include "Human.h"
#include "HumanFactory.h"

class Stadion
{
    protected:
        vector<Human*> humans;
        uint32_t total_weight;
    public:

        Stadion() : total_weight(0) {}
        void add(Human*a);
        void show();
        ~Stadion();
        uint32_t has_humans();
        Human* get_human();
        void notify(string action, string arg);
        uint32_t weight();
        void fill(HumanFactory*factory, uint32_t weight_limit);
};



