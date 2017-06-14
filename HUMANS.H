#pragma once
#include "Human.h"
#include "HumanFactory.h"

class Kibic : public Human
{
    protected:
    public:
        Kibic(string name): Human(name, "Kibic"){}
};

class Trener : public Human
{
    protected:
    public:
        Trener(string name,string surname,int wiek): Human(name,surname,wiek,"Trener"){}
};
class Gracz :public Human
{
protected:
public:
     Gracz(string name,string surname,int wiek): Human(name,surname,wiek, "Gracz") {}
    };
class Druzyna
{
    protected:
    public:

        //Druzyna(string country, string name);
        //Druzyna();
        //Druzyna(string country, string name,HumanFactory * factory);
       // ~Druzyna();
        vector <Gracz* > czlonkowie;
        vector <Trener*> trenerzy;
        vector <Kibic*> kibice;
        HumanFactory * factory;
        void createGracz(int i);
        void createTrener(int i);
        void createKibic(int i);
        int losujwiek();
        string losujimie();
        string losujnazwisko();
};
