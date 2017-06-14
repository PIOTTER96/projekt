#pragma once
#include <iostream>
#include <vector>
using namespace std;
#include "Human.h"

class HumanFactory
{
    protected:
        vector<Human*> TypyLudzi;
        vector<string> names;
    public:
        HumanFactory();
       // Human *create();
        void registerTypyLudzi(Human *a);
       ~HumanFactory();
};
