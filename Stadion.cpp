#include "Stadion.h"
#include "HumanFactory.h"

void Stadion::add(Human*a)
{
    humans.push_back(a);
    total_weight += a->weight();
}

void Stadion::show()
{
    cout << "Total weight: " << total_weight << " kg" << endl;
    for(uint32_t i = 0; i < humans.size(); ++i)
    {
        cout << (i+1) << ". ";
        humans.at(i)->show();
    }
}

Stadion::~Stadion()
{
    for(uint32_t i=0; i< humans.size(); ++i)
        delete humans.at(i);
    humans.clear();
}

uint32_t Stadion::has_humans()
{
    return humans.size();
}

Human* Stadion::get_human()
{
    uint32_t n = rand() % humans.size();
    Human *a = humans.at(n);
    humans.erase(humans.begin() + n);
    total_weight -= a->weight();
    return a;
}

void Stadion::notify(string action, string arg)
{
    for(uint32_t i = 0; i < humans.size(); ++i)
        humans.at(i)->notify(action, arg);
}

uint32_t Stadion::weight()
{
    return total_weight;
}


void Stadion::fill(HumanFactory*factory, uint32_t weight_limit)
{
    /*while(weight() < weight_limit)
    {
        Human *a = factory->create();
        if(weight() + a->weight() <= weight_limit)
            add( a );
        else
        {
            cout << "Human is too heavy, sorry... ";
            delete a;
            break;
        }
    }*/
}

