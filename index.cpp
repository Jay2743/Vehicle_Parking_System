#include <iostream>
#include <conio.h>
using namespace std;

// Declaration of user defined function singnature
int Menu();
void Bus();
void Car();
void Rikshaw();
void Cycle();
void Show_details();
void Delete();

// Declaration of Global Variables
int nor = 0, nob = 0, nof = 0, noc = 0, amount = 0, count = 0;

int main()
{
    int b;
    do
    {

        switch (Menu())
        {
        case 1:
            Bus();
            break;
        case 2:
            Car();
            break;
        case 3:
            Rikshaw();
            break;
        case 4:
            Cycle();
            break;
        case 5:
            Show_details();
            break;
        case 6:
            Delete();
        default:
            cout << "YOU ENTERED A WRONG ENTRY" << endl;
            cout << "*******************************************************" << endl;
        }
        cout << "TO ADD MORE VEHICLE DETAILS PLEASE PRESS 0 " << endl
             << "ELSE PRESS ANY NUMBER FOR EXIT" << endl;
        cout << "ENTER YOUR CHOICE" << endl;
        cin >> b;
    } while (b == 0);
    cout << "THANK YOU PLEASE VISIT AGAIN" << endl;
    getch();
    return 0;
}

int Menu()
{

    int ch;
    cout << "*******************************************************" << endl;
    cout << "PRESS 1 FOR BUS CHARGES IS 100 INR" << endl;
    cout << "PRESS 2 FOR CAR CHARGES IS 80 INR" << endl;
    cout << "PRESS 3 FOR RIKSHAW CHARGES IS 60 INR" << endl;
    cout << "PRESS 4 FOR CYCLE CHARGES IS 30 INR" << endl;
    cout << "PRESS 5 TO SEE THE ENTERED RECORD" << endl;
    cout << "PRESS 6 TO DELETE THE RECORD" << endl;
    cout << "PRESS 7 FOR EXIT" << endl;
    cout << "*******************************************************" << endl;

    cout << "PLEASE ENTER YOUR CHOICE" << endl;
    cin >> ch;
    return ch;
};

void Bus()
{
    nob++;
    amount = amount + 100;
    count++;
};

void Car()
{
    nof++;
    amount = amount + 80;
    count++;
};

void Rikshaw()
{
    nor++;
    amount = amount + 60;
    count++;
};

void Cycle()
{
    noc++;
    amount = amount + 30;
    count++;
};

void Show_details()
{
    cout << "*******************************************************" << endl;
    cout << "TOTAL NO OF BUSES STANDING IN PARKING" << endl
         << nob << endl;
    cout << "TOTAL NO OF CAR STANDING IN PARKING" << endl
         << nof << endl;
    cout << "TOTAL NO OF RIKSHAW STANDING IN PARKING" << endl
         << nor << endl;
    cout << "TOTAL NO OF CYCLE STANDING IN PARKING" << endl
         << noc << endl;
    cout << "TOTAL NO OF VEHICLE ARE STANDING IN PARKING" << endl
         << count << endl;
    cout << "TOTAL COLLECTION OF PARKING AMOUNT" << endl
         << amount << endl;
    cout << "*******************************************************" << endl;
};

void Delete()
{
    nob = 0;
    noc = 0;
    nof = 0;
    nor = 0;
    amount = 0;
    count = 0;
};