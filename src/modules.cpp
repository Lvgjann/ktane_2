#include <utility>

//
// Created by dewitt on 26/12/18.
//

#include "modules.h"

#include "_Appli.h"
#include "Wire.h"

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
