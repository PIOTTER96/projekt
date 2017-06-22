#pragma once
#include "Human.h"
#include<list>
#include<iostream>


class Kibic : public Human
{
protected:
public:
    Kibic(string name):Human(name) {}
    void reaguj(int info);
};

class Trener : public Human
{
protected:
public:
    Trener(string name,string surname,int wiek):Human(name,surname,wiek) {}
};
class Gracz : public Human
{
protected:
public:
    Gracz(string name,string surname,int wiek):Human(name,surname,wiek) {}
};
class Druzyna
{
protected:
public:
    vector <Kibic*> lista;
    vector <Gracz*> czlonkowie;
    vector <Trener*> trenerzy;
    vector <Kibic*> kibice;
    void createGracz(int i);
    void createTrener(int i);
    void createKibic(int i);
    void dodaj(Kibic*o);
    void usun(Kibic*o);
    void powiadom(int info);
    int losujwiek();
    int bramki;
    string losujimie();
    string losujnazwisko();
};
