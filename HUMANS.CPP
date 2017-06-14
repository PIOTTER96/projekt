#include "Humans.h"
#include "Human.h"

string imie,nazwisko;
int wiek;
string Druzyna:: losujimie()
{
    switch(rand()%28)
    {
        case 0: return "Jan";
        case 1: return "Franciszek";
        case 2: return "Stefan";
        case 3: return "Andrzej";
        case 4: return "Karol";
        case 5: return "Michal";
        case 6: return "Maksymilian";
        case 7: return "Janusz";
        case 8: return "Alfred";
        case 9: return "Józef";
        case 10: return "Kacper";
        case 11: return "Bartlomiej";
        case 12: return "Marek";
        case 13: return "Dawid";
        case 14: return "Jarek";
        case 15: return "Wojciech";
        case 16: return "Leslaw";
        case 17: return "Adam";
        case 18: return "Miroslaw";
        case 19: return "Waldemar";
        case 20: return "Stanislaw";
        case 21: return "Daniel";
        case 22: return "Piotr";
        case 23: return "Pawel";
        case 24: return "Arkadiusz";
        case 25: return "Aleksander";
        case 26: return "Tomasz";
        case 27: return "Mieczyslaw";
    }
throw -666;
}
string Druzyna:: losujnazwisko()
{
    switch(rand()%28)
    {
        case 0: return "Gacek";
        case 1: return "Staworowski";
        case 2: return "Kowalski";
        case 3: return "Nowak";
        case 4: return "Pawliczak";
        case 5: return "Wisniewski";
        case 6: return "Adamczyk";
        case 7: return "Andrzejewski";
        case 8: return "Bernas";
        case 9: return "Czyczerski";
        case 10: return "Gawlak";
        case 11: return "Glowacki";
        case 12: return "Kowalik";
        case 13: return "Budzowski";
        case 14: return "Dopart";
        case 15: return "Abram";
        case 16: return "Mruk";
        case 17: return "Markiewicz";
        case 18: return "Kucharski";
        case 19: return "Sozanski";
        case 20: return "Fornal";
        case 21: return "Milek";
        case 22: return "Heda";
        case 23: return "Garwol";
        case 24: return "Lychonski";
        case 25: return "Chichlowski";
        case 26: return "Grabowski";
        case 27: return "Szargan";
    }
throw -666;
}

int Druzyna:: losujwiek()
{
  int x;
  x=rand()%20;
  return x + 18;
throw -666;
}
 void Druzyna::createGracz(int i)
 {
     for(int a=1;a<=i;a++)
     {
       imie = losujimie();
         nazwisko = losujnazwisko();
         wiek = losujwiek();
         this->czlonkowie.push_back(new Gracz(imie,nazwisko,wiek));
         cout << imie << " " << nazwisko << " " << wiek << " lat "<<endl;
    }
 }
void Druzyna::createTrener(int i)
{
    for(int a=1;a<=i;a++)
     {
        imie = losujimie();
         nazwisko = losujnazwisko();
         wiek = losujwiek()+25;
        this->trenerzy.push_back(new Trener(imie,nazwisko,wiek));
        cout << imie << " " << nazwisko << " " << wiek << " lat "<< endl;
     }
}

void Druzyna::createKibic(int i)
 {
     for(int a=1;a<=i;a++)
     {
       imie = losujimie();

         this->kibice.push_back(new Kibic(imie));
         cout << imie <<endl;
    }
 }
/*void Druzyna::wypiszTrener(int i)
{
    for(int a=0;a<=i;a++)
     {
       czlonkowie.at(i)->show();
     }
}
void  Druzyna::wypiszGracze(int i)
{
    for(int a=0;a<=i;a++)
     {
        trenerzy.at(i)->show();
     }
}*/


