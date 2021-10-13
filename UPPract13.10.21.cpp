// UPPract13.10.21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //Задача 0
    cout << "Bojilov e religiq\n";

    //Задача 1
    int number;
    cin >> number;
    //Digits = dgt
    int dgt4 = number % 10;
    int dgt3 = (number / 10) % 10;
    int dgt2 = (number / 100) % 10;
    int dgt1 = number / 1000;
    int sumOfDigits = dgt1 + dgt2 + dgt3 + dgt4;
    cout << dgt1 << endl;
    cout << dgt2 << endl;
    cout << dgt3 << endl;
    cout << dgt4 << endl;
    cout << sumOfDigits << endl;

    //Задача 2
    int oppositeOfNumber = (dgt4 * 1000) + (dgt3 * 100) + (dgt2 * 10) + dgt1;
    cout << oppositeOfNumber << endl;

    cout << endl;

    //Задача 3
    int a, b;
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
    cout << multiply << ", " << lastDgt << " - " << alpha << endl;

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

    //Задача 5
    int num1, num2;
    cin >> num1 >> num2;
    bool divident = num1 >= num2;
    cout << boolalpha << divident << endl;

    //Задача 6 
    double side1, side2, side3;
    cin >> side1 >> side2 >> side3;
    if (side1 + side2 > side3 && side1 + side3 > side2 && side3 + side2 > side1)
    {
        //Задача 7
        double perimeter = side1 + side2 + side3;
        double semiperimeter = perimeter / 2;
        int area = sqrt(semiperimeter * (semiperimeter - side1) * (semiperimeter - side2) * (semiperimeter - side3));
        cout << "Perimeter: " << perimeter << " Area: " << area << endl;
    } else
    {
        cout << "False\n";
    }

    //Задача 8
    double numA, numB, numC;
    cin >> numA >> numB >> numC;
    double biggest, smallest;
    //Biggesst 
	if (numA > numB && numA > numC)
    {
        biggest = numA;
    }
	else if (numB > numA && numB > numC)
    {
        biggest = numB;
    }
    else
    {
        biggest = numC;
    }
    //Smallest
    if (numA < numB && numA < numC)
    {
        smallest = numA;
    }
    else if (numB < numA && numB < numC)
    {
        smallest = numB;
    }
    else
    {
        smallest = numC;
    }
    cout << "Biggest Number: " << biggest << " Smallest Number: " << smallest << endl;

    //Задача 9
	int x, intera, interb;
    cin >> x >> intera >> interb;
    if ( x >= intera && x <= interb)
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }

    //Задача 10
	int year, leap;
    cout << "Enter a year: ";
    cin >> year;
    if (!(year % 100))
    {
        leap = year % 400;
    }
    else
    {
        leap = year % 4;
    }
    if (leap == 0)
    {
        cout << year << " is a leap year\n";
    }
    else
    {
        cout << year << " is not a leap year\n";
    }
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
