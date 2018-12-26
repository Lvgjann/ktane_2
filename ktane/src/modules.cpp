#include <utility>

//
// Created by dewitt on 26/12/18.
//

#include "modules.h"

#include "_Appli.h"
#include "Button.h"
#include "Wire.h"

void simon_vowel(int strike)
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
                    simon_vowel(strike+1);
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
                    simon_vowel(strike+1);
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
            default:break;
        }
    }
}

void simon_non_vowel(int strike)
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
                    simon_non_vowel(strike+1);

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
                    simon_non_vowel(strike+1);

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
            default:break;
        }
    }
}

void wof_step_2(string word)
{
    //Step 2 : Dictionnary


    vector<string> ready = {"ready", "YES", "OKAY", "WHAT", "MIDDLE", "LEFT", "PRESS", "RIGHT", "BLANK", "READY", "NO", "FIRST", "UHHH", "NOTHING", "WAIT"};
    vector<string> first = {"first", "LEFT", "OKAY", "YES", "MIDDLE", "NO", "RIGHT", "NOTHING", "UHHH", "WAIT", "READY", "BLANK", "WHAT", "PRESS", "FIRST"};
    //TO COMPLETE

    vector<vector<string> > global = { ready, first};

    find_dictionnary(global, std::move(word));

}

void wof_step_1()
{
    /*Step 1 : Positions
     *
     * Read the display and use step 1 to determine which button label to read.
     *
     */
    vector<string> l_u = {"ur"},
            l_m = {"yes", "led", "nothing", "they are"},
            l_d = {" ", "reed", "they're"},
            r_u = {"first", "okay", "c"},
            r_m = {"blank", "read", "red", "you", "your", "you're"},
            r_d = {"display", "says", "no", "lead", "hold on", "you are", "see", "cee"};


    bool quit = false;
    string answer, word;

    clear();
    display_instructions_module5();

    while (!quit)
    {
        cout << "Enter the display" << endl
             << "or 0 to return to menu" << endl;

        cin >> answer;

        if (answer == "0")
            quit = true;
        else if (find_word(l_d, answer))
            cout << "Position : Left, Down" << endl;
        else if (find_word(l_m, answer))
            cout << "Position : Left, Middle" << endl;
        else if (find_word(l_u, answer))
            cout << "Position : Left, Up" << endl;
        else if (find_word(r_d, answer))
            cout << "Position : Right, Down" << endl;
        else if (find_word(r_m, answer))
            cout << "Position : Right, Middle" << endl;
        else if (find_word(r_u, answer))
            cout << "Position : Right, Up" << endl;
        else
        {
            cout << "Error" << endl;
            wof_step_1();
        }

        if (answer != "0")
        {
            cout << "Enter the label" << endl;
            cin >> word;
            wof_step_2(word);
        }
    }
}

void module_1()
{
    Wire wire;
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
            wire.check_3wires();
            break;
        case 4:
            wire.check_4wires();
            break;
        case 5:
            wire.check_5wires();
            break;
        case 6:
            wire.check_6wires();
            break;
        default:
            cout << "Error." << endl;
            module_1();
            break;
    }
    menu();
}

void module_2()
{
    Button button;
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
                button.held_button();
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
        button.held_button();
    }

    menu();
}

void module_3()
{
    clear();
    display_instructions_module3();
    menu();
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
        simon_vowel(strike);
    }
    else if (answer == "n")
    {
        cout << "How any strikes ? [0-2]" << endl;
        cin >> strike;
        simon_non_vowel(strike);
    }
    else
    {
        cout << "Error. " << endl;
        module_4();
    }
}


void module_5()
{
    wof_step_1();
    menu();
}

void module_6()
{
    array<int, 5> positions{};
    array<int, 5> values{};

    array<string, 5> stage_1 = { "Press the button in the second position"
            , "Press the button in the second position"
            , "Press the button in the third position"
            , "Press the button in the fourth position" };

    array<string, 5> stage_2 = { "Press the button labeled \"4\""
            , "Press the button in the same position as you pressed in stage 1"
            , "Press the button in the first position"
            , "Press the button in the same position as you pressed in stage 1" };

    array<string, 5> stage_3 = { "Press the button with the same label as you pressed in stage 2"
            , "Press the button with the same label as you pressed in stage 1"
            , "Press the button in the third position"
            , "pres the button labeled \"4\"" };

    array<string, 5> stage_4 = { "Press the button in the same position as you pressed in stage 1"
            , "Press the button in the first position"
            , "Press the button in the same position as you pressed in stage 2"
            , "Press the button in the same position as you pressed in stage 2" };

    array<string, 5> stage_5 = { "Press the button with the same label as you pressed in stage 1"
            , "Press the button with the same label as you pressed in stage 2"
            , "Press the button with the same label as you pressed in stage 4"
            , "Press the button with the same label as you pressed in stage 3" };

    bool quit = false;
    int display, position, value;
    int stage = 1;

    clear();
    display_instructions_module6();

    while (!quit && stage < 6)
    {
        cout << "Enter the display [1-4] or 0 to return to menu " << endl;
        cin >> display;
        if (display == 0)
            quit = true;

        if (!quit)
        {
            switch(stage)
            {
                case 1:
                    cout << stage_1[display] << endl;
                    break;
                case 2:
                    cout << stage_2[display] << endl;
                    break;
                case 3:
                    cout << stage_3[display] << endl;
                    break;
                case 4:
                    cout << stage_4[display] << endl;
                    break;
                case 5:
                    cout << stage_5[display];
                    break;
                default:break;
            }
            cout << "Enter the position [1-4] : " << endl;
            cin >> position;
            positions[stage] = position;

            cout << "Enter the value [1-4] : " << endl;
            cin >> value;
            values[stage] = value;

            stage++;
        }
    }

    menu();
}

void module_7()
{
    display_instructions_module7();
}

void module_8()
{
    Wire w;
    bool wire = false;

    bool LED = false;
    bool star = false;
    bool red = false;
    bool blue = false;

    string entry;

    clear();
    display_instructions_module8();

    cout << "Enter the combination on the wire and press 0 when finished: " << endl
         << R"(("LED", "star", "red", "blue"))" << endl;
    while (!wire)
    {
        cin >> entry;
        if (entry == "LED")
            LED = true;
        else if (entry == "star")
            star = true;
        else if (entry == "red")
            red = true;
        else if (entry == "blue")
            blue = true;
        else if (entry == "0")
            wire = true;
    }
    w.check_wire(LED, star, red, blue);

    menu();
}

void module_9()
{
    display_instructions_module9();

    int count = 0;
    int count_red = 0;
    int count_blue = 0;
    int count_black = 0;

    string connection;
    string color;

    bool quit = false;

    while(!quit)
    {
        cout << "Enter the wire color : " << endl;
        if (count == 0)
            cout << " Red : r, Blue : b, Black : n" << endl;
        cin >> color;

        cout << "Enter the connection (A, B, C) : " << endl;
        cin >> connection;
    }
}

void module_10()
{
    clear();
    display_instructions_module10();
    menu();
}

void module_11()
{
    clear();
    //TODO Password
}