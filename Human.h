#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class Human
{
protected:
    string name,surname;
    int wiek;
public:

    Human(string name,string surname,int wiek) {}

    Human(string name) {}
};
