#include<iostream>
#include<ctime>
#include <vector>
#include "Utils.h"
#include "Humans.h"
#include "Stadion.h"
using namespace std;

int main()
{
    int czas;

    Stadion stadion;
    Druzyna druzyna1;//("Poland","Zaglebie_Lubin");
    Druzyna druzyna2;//("Poland","Legia_Warszawa");
    Druzyna trener1;
    Druzyna trener2;
    Druzyna kibice1;
    Druzyna kibice2;
    utils.clearScreen();
    HumanFactory *factory = new HumanFactory();
/*    factory->registerTypyLudzi(new Druzyna1(20, 50, "Meeee!"));
    factory->registerTypyLudzi(new Druzyna2(10, 40, "Klap!"));
    factory->registerTypyLudzi(new Kibice2(250, 500, "Iiihaha!"));
    factory->registerTypyLudzi(new Kibice1(350, 700, "Muuuu!"));
    factory->registerTypyLudzi(new Trener1(1, 5, "SSSssss!"));
    factory->registerTypyLudzi(new Trener2(0, 3, "Krrk!"));*/
    cout << endl << "Czas na mecz.Stadion zapelnia sie :" << endl;
    cout << endl << "Druzyna 1-zawodnicy:" << endl;
    druzyna1.createGracz(15);
     cout << endl << "Druzyna 1-trener:" << endl;
    trener1.createTrener(1);
     cout << endl << "Druzyna 2-zawodnicy:" << endl;
    druzyna2.createGracz(15);
     cout << endl << "Druzyna 2-trener:" << endl;
    trener2.createTrener(1);
    cout << endl << "Kibice druzyny 1:" << endl;
    kibice1.createKibic(rand()%30+20);
     cout << endl << "Kibice druzyny 2:" << endl;
     kibice2.createKibic(rand()%30+20);
  //  stadion.fill(factory, 2500);
    delete factory;
    utils.sleep(10);

    cout << endl << "Mecz sie rozpoczyna!!!" << endl;
    czas += rand()%10;
    utils.sleep(czas);


    cout << endl << "Slaughtering time!" << endl;
    while(stadion.has_humans())
    {
        utils.sleep(5);
        Human *victim = stadion.get_human();
        stadion.notify("death", victim->TypyLudzi());
        delete victim;
    }

    return 0;
}
