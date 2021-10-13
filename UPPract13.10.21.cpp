// UPPract13.10.21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Задача 0
    cout << "Bojilov e religiq\n";

    //Задача 1
    /*int number;
    cin >> number;*/
    //Digits = dgt
    /*int dgt4 = number % 10;
    int dgt3 = (number / 10) % 10;
    int dgt2 = (number / 100) % 10;
    int dgt1 = number / 1000;
    int sumOfDigits = dgt1 + dgt2 + dgt3 + dgt4;
    cout << dgt1 << endl;
    cout << dgt2 << endl;
    cout << dgt3 << endl;
    cout << dgt4 << endl;
    cout << sumOfDigits << endl;*/

    //Задача 2
    /*int oppositeOfNumber = (dgt4 * 1000) + (dgt3 * 100) + (dgt2 * 10) + dgt1;
    cout << oppositeOfNumber << endl;

    cout << endl;*/

    //Задача 3
    /*int a, b;
    cin >> a >> b;
    int multiply = a * b;
    int lastDgt = multiply % 10;
    bool alpha;
    if (lastDgt / 2) {
        alpha = 1;
    }
    else
    {
        alpha = 0;
    }
    cout << multiply << ", " << lastDgt << " - " << alpha << endl;*/

    //Задача 4
    int numa;
    int numb;
    cin >> numa >> numb;

    /*numa = numa + numb;
    numb = numa - numb;
    numa = numa + numb;*/

    //Задача 4.1
    int numc;
    numc = numa;
    numa = numb;
    numb = numc;
    cout << numa << numb;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
