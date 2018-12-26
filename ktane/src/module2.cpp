#include "module2.h"

void held_button()
{
    string color;

    clear();
    display_instructions_module2_1();

    cout << "Indicate the color of the strip : [blue/white/yellow/any]" << endl;
    cin >> color;

    if (color == "blue")
        cout << "Release when the countdown timer has a 4 in any position." << endl;
    if (color == "white" || color == "any")
        cout << "Release when the countdown timer has a 1 in any position." << endl;
    if (color == "yellow")
        cout << "Release when the countdown timer has a 5 in any position." << endl;
}

void module_2()
{
    string answer;

    int count = 0;
    bool quit = false;

    vector<string> possibilities = { "Blue button saying \"Abort\" ? [y/n]"
                                     , "Button saying \"Detonate\" and more than one battery on the bomb ? [y/n]"
                                     , "White button and a lit indicator with label CAR ? [y/n]"
                                     , "More than two batteries and a lit indicator with label FRK ? [y/n]"
                                     , "Yellow button ? [y/n]"
                                     , "Red button saying \"Hold\" ? [y/n]"};

    vector<string> solutions = {"Press and immediately release the button.."
                                , "Hold the button." };

    clear();
    display_instructions_module2_0();

    while (!quit && (count<6))
    {
        cout << possibilities[count] << endl;
        cin >> answer;
        if (answer == "y")
        {
            if (count != 2 || count != 4 || count != 6)
            {
                cout << solutions[1] << endl;
                held_button();
            }
            else
                cout << solutions[0] << endl;
            quit = true;
        }
        else if (answer == "n")
            count++;
        else
            cout << "Error. " << possibilities[count] << endl;
    }

    if (count == 6)
    {
        cout << solutions[1] << endl;
        held_button();
    }

    menu();
}
