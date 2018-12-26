#include "module5.h"

void step_2(string word)
{
    //Step 2 : Dictionnary


    vector<string> ready = {"ready", "YES", "OKAY", "WHAT", "MIDDLE", "LEFT", "PRESS", "RIGHT", "BLANK", "READY", "NO", "FIRST", "UHHH", "NOTHING", "WAIT"};
    vector<string> first = {"first", "LEFT", "OKAY", "YES", "MIDDLE", "NO", "RIGHT", "NOTHING", "UHHH", "WAIT", "READY", "BLANK", "WHAT", "PRESS", "FIRST"};
    //TO COMPLETE

    vector<vector<string> > global = { ready, first};

    find_dictionnary(global, word);

}

void step_1()
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
            step_1();
        }

        if (answer != "0")
        {
            cout << "Enter the label" << endl;
            cin >> word;
            step_2(word);
        }
    }
}

void module_5()
{
    step_1();
    menu();
}
