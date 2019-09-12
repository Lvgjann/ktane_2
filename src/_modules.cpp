//
// Created by dewitt on 12/09/19.
//

#include "_modules.h"

void simon_vowel(int strike) {
    bool quit = false;
    vector<string> colors;
    string color, result;

    cout << "Enter the flash color : [red/blue/green/yellow] " << endl;
    cout << "Enter \"strike\" if the defuser made a mistake." << endl
         << "Enter \"stop\" if there is no more flash.";
    while (!quit) {

        switch (strike) {
            case 0:
                cin >> color;
                if (color == "stop")
                    quit = true;
                if (color == "strike")
                    simon_vowel(strike + 1);
                if (color == "red") {
                    result = "Blue";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "blue") {
                    result = "Red";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "green") {
                    result = "Yellow";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "yellow") {
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
                    simon_vowel(strike + 1);
                if (color == "red") {
                    result = "Yellow";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "blue") {
                    result = "Green";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "green") {
                    result = "Blue";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "yellow") {
                    result = "Red";
                    colors.push_back(result);
                    display_vector(colors);
                }
                break;
            case 2:
                cin >> color;
                if (color == "stop")
                    quit = true;
                if (color == "red") {
                    result = "Green";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "blue") {
                    result = "Red";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "green") {
                    result = "Yellow";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "yellow") {
                    result = "Blue";
                    colors.push_back(result);
                    display_vector(colors);
                }
                break;
            default:
                break;
        }
    }
}

void simon_non_vowel(int strike) {
    bool quit = false;
    vector<string> colors;
    string color, result;

    cout << "Enter the flash color : [red/blue/green/yellow] " << endl;
    cout << "Enter \"strike\" if the defuser made a mistake." << endl
         << "Enter \"stop\" if there is no more flash.";
    while (!quit) {
        switch (strike) {
            case 0:
                cin >> color;
                if (color == "stop")
                    quit = true;
                if (color == "strike")
                    simon_non_vowel(strike + 1);

                if (color == "red") {
                    result = "Blue";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "blue") {
                    result = "Yellow";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "green") {
                    result = "Green";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "yellow") {
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
                    simon_non_vowel(strike + 1);

                if (color == "red") {
                    result = "Red";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "blue") {
                    result = "Blue";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "green") {
                    result = "Yellow";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "yellow") {
                    result = "Green";
                    colors.push_back(result);
                    display_vector(colors);
                }
                break;
            case 2:
                cin >> color;
                if (color == "stop")
                    quit = true;

                if (color == "red") {
                    result = "Yellow";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "blue") {
                    result = "Green";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "green") {
                    result = "Blue";
                    colors.push_back(result);
                    display_vector(colors);
                } else if (color == "yellow") {
                    result = "Red";
                    colors.push_back(result);
                    display_vector(colors);
                }
                break;
            default:
                break;
        }
    }
}

int solve_wires(const std::string str) {
    return 0;
}

void wof_step_2(string word) {
    //Step 2 : Dictionnary


    vector<string> ready = {"ready", "YES", "OKAY", "WHAT", "MIDDLE", "LEFT", "PRESS", "RIGHT", "BLANK", "READY", "NO",
                            "FIRST", "UHHH", "NOTHING", "WAIT"};
    vector<string> first = {"first", "LEFT", "OKAY", "YES", "MIDDLE", "NO", "RIGHT", "NOTHING", "UHHH", "WAIT", "READY",
                            "BLANK", "WHAT", "PRESS", "FIRST"};
    //TO COMPLETE

    vector<vector<string> > global = {ready, first};

    find_dictionnary(global, std::move(word));

}

void wof_step_1() {
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

    while (!quit) {
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
        else {
            cout << "Error" << endl;
            wof_step_1();
        }

        if (answer != "0") {
            cout << "Enter the label" << endl;
            cin >> word;
            wof_step_2(word);
        }
    }
}

void module_1(Bomb bomb) {
    std::string comb;
    std::cout << "Enter the number of wires and they color in the order." << std::endl
              << "black:b, blue:l, red:r, yellow:y, white:w" << std::endl;
    cin >> comb;

    int solution = solve_wires(comb);
}

void module_2(Bomb bomb) {
    std::string entry;
    Color color;

    std::cout << " What color is the button ?" << endl;
    std::cin >> entry;
    color = convert(entry);
    std::cout << " What instruction is writen on the button ?" << endl;
    std::cin >> entry;
    Button button = Button("Button", false, color, entry);
    button.solve_button(bomb);
    menu();
}

void module_3(Bomb bomb) {
    clear();
    display_instructions_module3();
    menu();
}

void module_4(Bomb bomb) {
    bool vowel = contains_vowel(bomb.get_serial());
    if (vowel)
        simon_vowel(0);
    else
        simon_non_vowel(0);
}

int appli() {
    clear();

    int module;
    Bomb bomb;
    bool quit = false;

    while (!quit) {
        cout << "Choose a module :" << endl;
        display_modules();

        cin >> module;
        switch (module) {
            case 0:
                quit = true;
                break;
            case 1:
                module_1(bomb);
                break;
            case 2:
                module_2(bomb);
                break;
            case 3:
                module_3(bomb);
                break;
            case 4:
                module_4(bomb);
                break;
            case 5:
                module_5(bomb);
                break;
            case 6:
                module_6(bomb);
                break;
            case 7:
                module_7(bomb);
                break;
            case 8:
                module_8(bomb);
                break;
            case 9:
                module_9(bomb);
                break;
            case 10:
                module_10(bomb);
                break;
            case 11:
                module_11(bomb);
                break;
            case 12:
                bomb.init_bomb();
                menu();
                break;
            default:
                cout << "Error: Module not found." << endl;
                break;
        }
    }
    return 0;
}