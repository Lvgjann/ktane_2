//
// Created by dewitt on 26/12/18.
//

#include "Wire.h"

Wire::Wire() {

}

void Wire::check_3wires()
{
    string answer;

    int count = 0;
    bool quit = false;

    vector<string> possibilities = { "No red wires ? [y/n]"
            , "Last wire is white ? [y/n]"
            , "More than one blue wire ? [y/n]" };

    vector<string> solutions = { "Cut the second wire."
            , "Cut the last wire."
            , "Cut the last blue wire"
            , "Cut the last wire."  };

    while (!quit && (count<3))
    {
        cout << possibilities[count] << endl;
        cin >> answer;
        if (answer == "y")
        {
            cout << solutions[count] << endl;
            quit = true;
        }
        else
            count++;
    }

    if (count == 3)
        cout << solutions[3] << endl;
}

void Wire::check_4wires()
{
    string answer;

    int count = 0;
    bool quit = false;

    vector<string> possibilities = { "More than one red wire and last digit of the serial number is odd ? [y/n]"
            , "Last wire is yellow and no red wire ? [y/n]"
            , "Exactly one blue wire ? [y/n]"
            , "More than one yellow wire ? [y/n]" };

    vector<string> solutions = {"Cut the last red wire."
            , "Cut the first wire."
            , "Cut the first wire"
            , "Cut the last wire."
            , "Cut the second wire." };

    while (!quit && (count<4))
    {
        cout << possibilities[count] << endl;
        cin >> answer;
        if (answer == "y")
        {
            cout << solutions[count] << endl;
            quit = true;
        }
        else
            count++;
    }

    if (count == 4)
        cout << solutions[4] << endl;
}

void Wire::check_5wires()
{
    string answer;

    int count = 0;
    bool quit = false;

    vector<string> possibilities = { "Last wire is black last digit of the serial number is odd ? [y/n]"
            , "Exactly one red wire and more than one yellow wire ? [y/n]"
            , "No black wires ? [y/n]" };

    vector<string> solutions = {"Cut the fourth wire."
            , "Cut the first wire."
            , "Cut the second wire."
            , "Cut the first wire." };

    while (!quit && (count<3))
    {
        cout << possibilities[count] << endl;
        cin >> answer;
        if (answer == "y")
        {
            cout << solutions[count] << endl;
            quit = true;
        }
        else
            count++;
    }

    if (count == 3)
        cout << solutions[3] << endl;
}

void Wire::check_6wires()
{
    string answer;

    int count = 0;
    bool quit = false;

    vector<string> possibilities = { "No yellow wire and the last digit of the serial number is odd ? [y/n]"
            , "Exactly one yellow wire and more than one white wire ? [y/n]"
            , "No red wires ? [y/n]" };

    vector<string> solutions = {"Cut the third wire."
            , "Cut the fourth wire."
            , "Cut the last wire."
            , "Cut the fourth wire." };

    while (!quit && (count<3))
    {
        cout << possibilities[count] << endl;
        cin >> answer;
        if (answer == "y")
        {
            cout << solutions[count] << endl;
            quit = true;
        }
        else
            count++;
    }

    if (count == 3)
        cout << solutions[3] << endl;
}

void Wire::check_wire(bool LED, bool star, bool red, bool blue)
{
    if ((!LED && !star && !red && !blue)
        || (!LED && star && !red && !blue)
        || (!LED && star && red && !blue))
        cout <<  "Cut the wire." << endl;

    else if ((!LED && !star && red && !blue)
             || (!LED && !star && !red && blue)
             || (!LED && !star && red && blue)
             || (LED && !star && red && blue))
        cout << "Cut the wire if the last digit of the serial number is even." << endl;

    else if ((!LED && star && red && blue)
             || (LED && !star && !red && blue)
             || (LED && star && !red && blue))
        cout <<  "Cut the wire of the bomb has a parallel port." << endl;

    else if ((LED && star && !red && !blue)
             || (LED && star && red && !blue)
             || (LED && !star && red && !blue))
        cout << "Cut the wire if the bomb has two or more batteries." << endl;

    else
        cout << "Don't cut the wire." << endl;
}