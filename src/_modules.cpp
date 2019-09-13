//
// Created by dewitt on 12/09/19.
//

#include "../inc/_modules.h"

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

int count_wires(std::vector<std::string> wires, std::string color) {
    int count = 0;
    for (const auto &wire : wires) {
        if (wire == color)
            count++;
    }
    return count;
}

void solve_wires(const std::string str, Bomb bomb) {
    std::vector<std::string> wires = split(str);
    std::vector<std::string> serial = split(bomb.get_serial());
    switch (stoi(wires[0])) {
        case 3:
            if (count_wires(wires, "r") == 0)
                std::cout << "Cut the second wire." << std::endl;
            if (wires[3] == "w")
                std::cout << "Cut the last wire." << std::endl;
            else if (count_wires(wires, "l") > 1)
                std::cout << "Cut the last blue wire." << std::endl;
            else
                std::cout << "Cut the last wire." << std::endl;
            break;
        case 4:
            if (count_wires(wires, "r") > 1 && (stoi(serial[serial.size()]) % 2 != 0))
                std::cout << "Cut the last red wire." << std::endl;
            else if ((wires[4] == "y" && count_wires(wires, "r") == 0)
                     || (count_wires(wires, "l") == 1))
                std::cout << "Cut the first wire." << std::endl;
            else if (count_wires(wires, "y") < 1)
                std::cout << "Cut the last wire." << std::endl;
            else
                std::cout << "Cut the second wire." << ::endl;
            break;
        case 5:
            if (wires[5] == "b" && stoi(serial[serial.size()]) % 2 != 0)
                std::cout << "Cut the fourth wire." << std::endl;
            else if (count_wires(wires, "r") == 1 && count_wires(wires, "y") > 1)
                std::cout << "Cut the first wire." << std::endl;
            else if (count_wires(wires, "b") == 0)
                std::cout << "Cut the second wire." << std::endl;
            else
                std::cout << "Cut the first wire." << std::endl;
            break;
        case 6:
            if (count_wires(wires, "y") == 0 && stoi(serial[serial.size()]) % 2 != 0)
                std::cout << "Cut the third wire." << std::endl;
            else if (count_wires(wires, "y") == 1 && count_wires(wires, "w") > 1)
                std::cout << "Cut the fourth wire." << std::endl;
            else if (count_wires(wires, "r") == 0)
                std::cout << "Cut the last wire." << std::endl;
            else
                std::cout << "Cut the fourth wire." << std::endl;
            break;
        default:
            std::cout << "Error: Invalid entry." << std::endl;
            break;
    }
}

//TODO : Step 2
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
            cout << "Error: Word not found." << endl;
            wof_step_1();
        }

        if (answer != "0") {
            cout << "Enter the label" << endl;
            cin >> word;
            wof_step_2(word);
        }
    }
}

// Module 1 : Wires
void module_1(Bomb bomb) {
    clear();
    display_instructions_module1();

    std::string comb;
    std::cout << "Enter the number of wires [3-6] and they color in the order." << std::endl
              << "[b/l/e/y/w] (black, blue, red, yellow, white)" << std::endl;
    cin >> comb;

    solve_wires(comb, bomb);
}

// Module 2 : Button
void module_2(Bomb bomb) {
    clear();
    display_instructions_module2_0();

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

// Module 3 : Keypads
void module_3() {
    clear();
    display_instructions_module3();
    menu();
}

// Module 4 : Simon
void module_4(Bomb bomb) {
    clear();
    display_instructions_module4();

    bool vowel = contains_vowel(bomb.get_serial());
    if (vowel)
        simon_vowel(0);
    else
        simon_non_vowel(0);
}

// Module 5 : Who's on Firts
void module_5() {
    clear();
    display_instructions_module5();

    wof_step_1();
    menu();
}

// Module 6 : Memory
void module_6() {
    array<int, 5> positions{};
    array<int, 5> values{};

    array<string, 5> stage_1 = {"Press the button in the second position", "Press the button in the second position",
                                "Press the button in the third position", "Press the button in the fourth position"};

    array<string, 5> stage_2 = {"Press the button labeled \"4\"",
                                "Press the button in the same position as you pressed in stage 1",
                                "Press the button in the first position",
                                "Press the button in the same position as you pressed in stage 1"};

    array<string, 5> stage_3 = {"Press the button with the same label as you pressed in stage 2",
                                "Press the button with the same label as you pressed in stage 1",
                                "Press the button in the third position", "pres the button labeled \"4\""};

    array<string, 5> stage_4 = {"Press the button in the same position as you pressed in stage 1",
                                "Press the button in the first position",
                                "Press the button in the same position as you pressed in stage 2",
                                "Press the button in the same position as you pressed in stage 2"};

    array<string, 5> stage_5 = {"Press the button with the same label as you pressed in stage 1",
                                "Press the button with the same label as you pressed in stage 2",
                                "Press the button with the same label as you pressed in stage 4",
                                "Press the button with the same label as you pressed in stage 3"};

    bool quit = false;
    int display, position, value;
    int stage = 1;

    clear();
    display_instructions_module6();

    while (!quit && stage < 6) {
        cout << "Enter the display [1-4] or 0 to return to menu " << endl;
        cin >> display;
        if (display == 0)
            quit = true;

        if (!quit) {
            switch (stage) {
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
                default:
                    break;
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

// Module 7 : Morse code
//TODO : Morse code
void module_7() {
    display_instructions_module7();
}

// Module 8 : Complicated wires
void module_8(Bomb bomb) {
    std::vector<std::string> c = {"0000", "0010", "1010"};
    std::vector<std::string> d = {"0001", "0110", "1111"};
    std::vector<std::string> s = {"1000", "1100", "1101", "0100"};
    std::vector<std::string> p = {"1110", "0101", "0111"};
    std::vector<std::string> b = {"0011", "1011", "1001"};

    bool cut = false;
    int count_wire;
    int i = 0;
    std::string entry;
    std::vector<std::string> serial = ;
    std::vector<bool> ports = bomb.get_port();

    clear();
    display_instructions_module8();
    std::cout << "Indicate how many wires are there." << std::endl;
    cin >> entry;
    count_wire = stoi(entry);
    while (i < count_wire) {
        std::cout << "Indicate if the wire has the following elements by a 0 (absent) or a 1 (present)" << std::endl
                  << R"(("red", "blue", "star, "led"))" << endl;
        cin >> entry;
        if (find_word(c, entry) ||
            (find_word(s, entry) && stoi(serial[serial.size()]) % 2 == 0) ||
            (find_word(p, entry) && ports[1]) ||
            (find_word(b, entry) && bomb.get_battery() >= 2))
            cut = true;
        if (cut) std::cout << "Cut the wire." << std::endl;
        else std::cout << "Do not cut the wire." << std::endl;
        i++;
    }

    menu();
}

// Module 9 WWire Sequences
void module_9() {
    display_instructions_module9();
    string black[] = {"A, B or C", "A or C", "B", "A or C", "B", "B or C", "A or B", "C", "C"};
    string blue[] = {"B", "A or C", "B", "A", "B", "B or C", "C", "A or C", "A"};
    string red[] = {"C", "B", "A", "A or C", "B", "A or C", "A, B or C", "A or B", "B"};

    int red_it = 0;
    int blue_it = 0;
    int black_it = 0;

    string color;

    bool quit = false;

    while (!quit) {
        cout << "Indicate the wire color [black / blue / red]" << endl;
        cin >> color;
        if (color == "exit") {
            quit = true;
        } else {
            if (color == "black") {
                cout << black[black_it] << endl;
                black_it++;
            } else if (color == "blue") {
                cout << blue[blue_it] << endl;
                blue_it++;
            } else if (color == "red") {
                cout << red[red_it] << endl;
                red_it++;
            } else {
                cout << "Error. Invalid entry." << endl;
            }
        }
    }
}

// Module 10 : Mazes
void module_10() {
    clear();
    display_instructions_module10();
    menu();
}

// Module 11 : Password
void module_11() {
    clear();
    //TODO Password
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
                module_3();
                break;
            case 4:
                module_4(bomb);
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