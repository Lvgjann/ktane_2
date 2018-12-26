#include "module1.h"

void check_3wires()
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

void check_4wires()
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

void check_5wires()
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

void check_6wires()
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

void module_1()
{
    int wires;

    clear();
    display_instructions_module1();

    cout << "How many wires ? [3-6]" << endl;
    cin >> wires;

    switch(wires)
    {
    case 0:
        appli();
        break;
    case 3:
        check_3wires();
        break;
    case 4:
        check_4wires();
        break;
    case 5:
        check_5wires();
        break;
    case 6:
        check_6wires();
        break;
    default:
        cout << "Error. How many wires ? [3-6]" << endl;
        module_1();
        break;
    }
    menu();
}
