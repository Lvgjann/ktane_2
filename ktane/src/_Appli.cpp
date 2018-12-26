#include "_Appli.h"

void display_modules()
{
    clear();
    cout << "NOTE : Keypads and Maze are not managed by the application. Please refer to the official manual." << endl << endl;

    cout << "1 : Simple Wires" << endl
         << "2 : Buttons" << endl
         << "3 : Keypads (instructions only)" << endl
         << "4 : Simon" << endl
         << "5 : Who's on first" << endl
         << "6 : Memory" << endl
         << "7 : Morse Code" << endl
         << "8 : Complicated wires" << endl
         << "9 : Wire Sequences" << endl
         << "10 : Mazes (instructions only)" << endl
         << "11 : Password" << endl
         << "12 : [NEEDY] Knobs" << endl
         << endl
         << "0 : Quit" << endl;
}

int appli()
{
    clear();
    int module;

    bool quit = false;

    SDL_Init(SDL_INIT_EVERYTHING);

    while (!quit)
    {
        cout << "Choose a module :" << endl;
        display_modules();

        cin>>module;
        switch(module)
        {
        case 0:
            quit = true;
            break;
        case 1:
            module_1();
            break;
        case 2:
            module_2();
            break;
        case 3:
            module_3();
            break;
        case 4:
            module_4();
            break;
        case 5:
            module_5();
            break;
        case 6:
            module_6();
            break;
        case 7:
            module_7();
            break;
        case 8:
            module_8();
            break;
        case 9:
            module_9();
            break;
        case 10:
            module_10();
            break;
        case 11:
            module_11();
            break;
        case 12:
            needy_3();
            break;
        default:
            cout << "Module not found." << endl;
            break;
        }
    }
    return 0;
}
