// codepage:ąćęłńóśżźĄĆĘŁŃÓŚŻŹ
#include <iostream>
#include <windows.h>
#include "nisza.h"
#include <fstream>
using namespace std;

int main()
{
    Srodowisko ekoSystem = Srodowisko::czytajZPliku("D:/Studia/Sem2/Cpp/OrganizmLab/start.txt");
    ofstream plikWynikowy("D:/Studia/Sem2/Cpp/OrganizmLab/symulacja.txt");
    if (!plikWynikowy.is_open())
        return 1;
    string stanSymulacji;
    // unsigned long i = 0;
    int i = 0;
    do
    {
        system("cls");
        cout << "Krok symulacji: " << i << endl;
        plikWynikowy << "Krok symulacji: " << i << endl;
        stanSymulacji = ekoSystem.doTekstu();

        cout << endl<< stanSymulacji << endl;
        plikWynikowy << stanSymulacji << endl;
        cin.ignore(1);
        ekoSystem++;
        i++;
    } while (i < 200 && !ekoSystem);
    cout << endl;
    plikWynikowy.close();
    return 0;
}
