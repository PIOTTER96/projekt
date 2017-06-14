#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

class HumanFactory;
class Stadion;

class Human
{
    friend class HumanFactory;
    friend class Stadion;

    public:

        virtual ~Human() {
            if(is_zygote)
            {
                cout << "Zygote '" << _TypyLudzi << "' is dead. " << endl;
            }
            else
            {
                cout << _TypyLudzi << " " << name << " (" << _weight << " kg) is dead." << endl;
            }
        }
        virtual string give_voice() { return voice; }
        virtual void show() { cout << _TypyLudzi << " " << name << "   " << surname << wiek << endl; }
        //virtual Human* clone(string name) = 0;
        Human(string name,string surname,int wiek, string TypyLudzi)
            : name(name), _TypyLudzi(TypyLudzi)
            {
                is_zygote = false;
            }
        Human(string name, string TypyLudzi)
            : name(name), _TypyLudzi(TypyLudzi)
            {
                is_zygote = false;
            }

        virtual void notify(string action, string arg);
        inline uint32_t weight() { return _weight; }
        string TypyLudzi() { return _TypyLudzi; }
    protected:
        bool is_zygote;
        uint32_t _weight, min_weight, max_weight;
        string name, _TypyLudzi,surname,wiek,number,voice;
};
