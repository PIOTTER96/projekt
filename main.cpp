#include<iostream>
#include<ctime>
#include <vector>
#include "Utils.h"
#include "Humans.h"
using namespace std;

int main()
{
    int czas, r;
    Druzyna druzyna1;
    Druzyna druzyna2;
    utils.clearScreen();
    cout << endl << "Czas na mecz. Stadion zapelnia sie:" << endl;
    cout << endl << "Druzyna 1-zawodnicy:" << endl;
    druzyna1.createGracz(15);
    cout << endl << "Druzyna 1-trener:" << endl;
    druzyna1.createTrener(1);
    cout << endl << "Druzyna 2-zawodnicy:" << endl;
    druzyna2.createGracz(15);
    cout << endl << "Druzyna 2-trener:" << endl;
    druzyna2.createTrener(1);
    cout << endl << "Kibice druzyny 1:" << endl;
    druzyna1.createKibic(rand()%30+20);
    cout << endl << "Kibice druzyny 2:" << endl;
    druzyna2.createKibic(rand()%30+20);
    utils.sleep(10);

    cout << endl << "Mecz sie rozpoczyna!!!" << endl;

    druzyna1.bramki = 0;
    druzyna2.bramki = 0;

    for(czas = 0; czas <= 90; czas = czas + rand()%45+1)
    {
        utils.sleep(czas);
        if(rand()%2==1)
        {
            cout << "Druzyna 1 zdobywa bramke. Kibice druzyny 1 sie ciesza:" << endl;
            druzyna1.powiadom(1);
            druzyna1.bramki++;
            utils.sleep(1);
            cout << "Kibice druzyny 2 pocieszaja swoich idolow:" << endl;
            druzyna2.powiadom(2);
            utils.sleep(1);
        }
        else
        {
            cout << "Druzyna 2 zdobywa bramke. Kibice druzyny 2 sie ciesza:" << endl;
            druzyna2.powiadom(1);
            druzyna2.bramki++;
            utils.sleep(1);
            cout << "Kibice druzyny 1 pocieszaja swoich idolow:" << endl;
            druzyna1.powiadom(2);
            utils.sleep(1);
        }
    }
    utils.sleep(5);
    cout << endl << "Wybila 90 minuta. Sedzia dolicza " << rand()%3 + 2 << " minuty." << endl;
    r = rand()%3;
    if(r == 0)
    {
        cout << endl << "Nikomu nie udalo sie zdobyc bramki w doliczanym czasie gry." << endl;
    }

    else if(r == 1)
    {
        cout << "Co za emocje!!! Druzyna 1 zdobywa bramke. Kibice druzyny 1 sie ciesza:" << endl;
        druzyna1.powiadom(1);
        druzyna1.bramki++;
        utils.sleep(1);
        cout << "Kibice druzyny 2 pocieszaja swoich idolow:" << endl;
        druzyna2.powiadom(2);
        utils.sleep(1);
    }

    else if(r == 2)
    {
        cout << "Co za emocje!!! Druzyna 2 zdobywa bramke. Kibice druzyny 2 sie ciesza:" << endl;
        druzyna2.powiadom(1);
        druzyna2.bramki++;
        utils.sleep(1);
        cout << "Kibice druzyny 1 pocieszaja swoich idolow:" << endl;
        druzyna1.powiadom(2);
        utils.sleep(1);
    }

    cout << endl << "Mecz sie zakonczyl wynikiem: " << druzyna1.bramki << "-" << druzyna2.bramki << endl;
    utils.sleep(10);

    return 0;
}
