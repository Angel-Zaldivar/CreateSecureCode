// s112-Zaldivar-Security_Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//author        Angel Zaldivar
//goal          create secure code

#include <iostream>

using namespace std;
int main()
{
    //variable declerations
    int a, b, c, accum, original_value, secure_version;
    //input
    cout << "Enter a six-digit integer: ";
    cin >> original_value;
    //process
    a = (original_value) / 1000;
    b = (original_value) % 1000;
    c = a + b;
    accum = ((c) / 100) + (c) % 10 + ((c / 10) % 10);
    secure_version = ((accum) % 10) + ((accum) / 10);
    cout << "Original Version: " << original_value << endl <<
        "Secured Version: " << original_value << secure_version;
}

