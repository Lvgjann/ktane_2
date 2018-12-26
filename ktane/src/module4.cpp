#include "module4.h"

void vowel(int strike)
{
    bool quit = false;
    vector<string> colors;
    string color, result;

    cout << "Enter the flash color : [red/blue/green/yellow] " << endl;
    cout << "Enter \"strike\" if the defuser made a mistake." << endl
         << "Enter \"stop\" if there is no more flash.";
    while(!quit)
    {

        switch(strike)
        {
        case 0:
            cin >> color;
            if (color == "stop")
                quit = true;
            if (color == "strike")
                vowel(strike+1);
            if (color == "red")
            {
                result = "Blue";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "blue")
            {
                result = "Red";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "green")
            {
                result = "Yellow";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "yellow")
            {
                result = "Green";
                colors.push_back(result);
                display_vector(colors);
            }
            break;
        case 1:
            cin >> color;
            if (color == "stop")
                quit = true;
            if (color == "strike")
                vowel(strike+1);
            if (color == "red")
            {
                result = "Yellow";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "blue")
            {
                result = "Green";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "green")
            {
                result = "Blue";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "yellow")
            {
                result = "Red";
                colors.push_back(result);
                display_vector(colors);
            }
            break;
        case 2:
            cin >> color;
            if (color == "stop")
                quit = true;
            if (color == "red")
            {
                result = "Green";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "blue")
            {
                result = "Red";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "green")
            {
                result = "Yellow";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "yellow")
            {
                result = "Blue";
                colors.push_back(result);
                display_vector(colors);
            }
            break;
        }
    }
}

void non_vowel(int strike)
{
    bool quit = false;
    vector<string> colors;
    string color, result;

    cout << "Enter the flash color : [red/blue/green/yellow] " << endl;
    cout << "Enter \"strike\" if the defuser made a mistake." << endl
         << "Enter \"stop\" if there is no more flash.";
    while(!quit)
    {

        switch(strike)
        {
        case 0:
            cin >> color;
            if (color == "stop")
                quit = true;
            if (color == "strike")
                vowel(strike+1);

            if (color == "red")
            {
                result = "Blue";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "blue")
            {
                result = "Yellow";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "green")
            {
                result = "Green";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "yellow")
            {
                result = "Red";
                colors.push_back(result);
                display_vector(colors);
            }
            break;
        case 1:
            cin >> color;
            if (color == "stop")
                quit = true;
            if (color == "strike")
                vowel(strike+1);

            if (color == "red")
            {
                result = "Red";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "blue")
            {
                result = "Blue";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "green")
            {
                result = "Yellow";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "yellow")
            {
                result = "Green";
                colors.push_back(result);
                display_vector(colors);
            }
            break;
        case 2:
            cin >> color;
            if (color == "stop")
                quit = true;

            if (color == "red")
            {
                result = "Yellow";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "blue")
            {
                result = "Green";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "green")
            {
                result = "Blue";
                colors.push_back(result);
                display_vector(colors);
            }
            else if (color == "yellow")
            {
                result = "Red";
                colors.push_back(result);
                display_vector(colors);
            }
            break;
        }
    }
}

void module_4()
{
    int strike;
    string answer;

    clear();
    display_instructions_module4();

    cout << "Does the serial number contain a vowel ? [y/n]" << endl;
    cin >> answer;

    if (answer == "y")
    {
        cout << "How any strikes ? [0-2]" << endl;
        cin >> strike;
        vowel(strike);
    }
    else if (answer == "n")
    {
        cout << "How any strikes ? [0-2]" << endl;
        cin >> strike;
        non_vowel(strike);
    }
    else
    {
        cout << "Error. " << endl;
        module_4();
    }

}
