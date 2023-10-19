// binaryToDecimalConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

void binaryToDecimal(string input);

int main()
{

    cout << "Enter a series of binary digits (0 or 1's, MAX 16 bits): ";
    string input;
    getline(cin, input);

    for (char digit : input) // validate entry
    {
        if (digit != '0' && digit != '1' || input.length() > 16)
        {
            cout << "\nInvalid Input!" << endl;
            return 1;
        }
    }

    binaryToDecimal(input);

    system("PAUSE");

}

void binaryToDecimal(string input)
{
 
    int entryLength = input.length();
    int value = 0;

    for (int i = 0; i < entryLength; i++)
    {
        int power = entryLength - i - 1;
        int number = (input[i] - 48) * (pow(2, power));

        value += number;
    }

    cout << "\nDecimal Value: " << value << endl << endl;

}

//cout << "Input: " << input[i];
//cout << " Power: " << power;
//cout << " Binary: " << number << endl;