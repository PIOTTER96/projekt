#include "HumanFactory.h"

HumanFactory::HumanFactory()
{
    names.push_back("Zocha");
    names.push_back("Basia");
    names.push_back("Stefan");
    names.push_back("Andrzej");
    names.push_back("Rafal");
    names.push_back("Szwagier");
}

/*Human *HumanFactory::create()
{
    Human *a = TypyLudzi.at(rand() % TypyLudzi.size());
    Human *child = a->clone( names.at(rand() % names.size()));
    child->max_weight = a->max_weight;
    child->min_weight = a->min_weight;
    child->rand_weight();
    child->voice = a->voice;
    child->is_zygote = false;
    cout << "creation successful: " << child->TypyLudzi() << " " << child->name << endl;
    return child;
}*/

void HumanFactory::registerTypyLudzi(Human *a)
{
    TypyLudzi.push_back(a);
   // cout << a->TypyLudzi() << " is now registered." << endl;
}

HumanFactory::~HumanFactory()
{
    cout << endl << "Unregistering TypyLudzi..." << endl;
    for(uint32_t i=0; i< TypyLudzi.size(); ++i)
    {
         delete TypyLudzi.at(i);
    }
    TypyLudzi.clear();
}

