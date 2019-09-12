//
// Created by dewitt on 12/09/19.
//

#include "_instructions.h"

//Module 1 : Wires
void display_instructions_module1() {
    std::cout << "On the subject of Wires" << std::endl << std::endl
              << " * A wire module can have 3-6 wires on it." << endl
              << " * Only the one correct wire needs to be cut to disarm the module." << endl
              << " * Wire ordering begins with the first on the top." << endl;
}

//Module 2 : Buttons
void display_instructions_module2_0() {
    cout << "On the subject of the Button" << endl << endl
         << "Follow these rules in the order they are listed. Perform the first action that applies : " << endl;
}

void display_instructions_module2_1() {
    cout << "If you start holding tthe button down, a olored strip will light  up on the right side of the module."
            "Based on its color you must release the button at a specifid point in time : " << endl;
}

//Module 3 : Keypads
void display_instructions_module3() {
    cout << "On the subject of Keypads" << endl << endl
         << " * Only one column below has all four of the symbols from the keypad." << endl
         << " * Press the four buttons in the order their symbols appear from the top to bottom within that column."
         << endl;
}

//Module 4 : Simon
void display_instructions_module4() {
    cout << "On the subject of Simon Says" << endl << endl
         << " 1. One of the four colored buttons will flash." << endl
         << " 2. Using the correct table below, press the button with the corresponding color" << endl
         << " 3. The original button will flash, followed by another. Repeat this sequence in order using the color mapping."
         << endl
         << " 4. The sequence will legthen by one each time you correctly enter a sequence until the module is disarmed."
         << endl;
}

//Module 5 : Who's on First
void display_instructions_module5() {
    cout << "On the subject of Who's on First" << endl << endl
         << " 1. Read the display and use step 1 to determine which button label to read." << endl
         << " 2. Using this button label, use step 2 determine which button to push." << endl
         << " 3. Repeat until the module has been disarmed." << endl << endl
         << " Step 1 : Based on the display, read the label of a particular button and proceed to step 2" << endl
         << " Step 2 : Using the label from step 1, push the first button that appears in its corrsponding list."
         << endl;
}

//Module 6 : Memory
void display_instructions_module6() {
    cout << "On the subject of Memory" << endl << endl
         << " * Press the correct button to progress the module to the next stage. Complete all stages to disarm the module."
         << endl
         << " * Pressing an incorrect button will reset the module back to stage 1." << endl
         << " * Button positions are ordered from left to right." << endl;
}

//Module 7 : Morse Code
void display_instructions_module7() {
    cout << "On the subject of Morse Code" << endl << endl
         << " * Interpret the signal from the flashing light using the Morse Code chart to spell one of the words in the table."
         << endl
         << " * The signal will loop, with a long gap between repetitions." << endl
         << " * Once the word is identified, set the corresponding frequency and press the transmit (TX) button"
         << endl;
}

//Module 8 : Complicated wires
void display_instructions_module8() {
    cout << "On the subject of Complicated wires" << endl << endl
         << " * Look at each wire : there is an LED above the wire and a space for a star symbol below the wire."
         << endl
         << " * For each wire/LED/symbol combination, use the Venn diagram below to decide whether or not to cut the wire."
         << endl
         << " * Each wire may be stripped with multiple colors." << endl;
}

//Module 9 : Wire Sequences
void display_instructions_module9() {
    cout << "On the subject of Wires Sequences" << endl << endl
         << " * Within this module there are several panels with wires on them, but only one panel is visible at a time."
         << " Switch to the next panel by using the down button and the previous panel by using the up button." << endl
         << " * Do not switch to the next panel until you are sure that you have cut all necessary wires on the current panel."
         << endl
         << " * Cut the wires as directed by the following table. Wire occurrences are cumulative over all panels within the module."
         << endl;
}

//Module 10 : Mazes
void display_instructions_module10() {
    cout << "On the subject of Mazes" << endl << endl
         << " * Find the maze with matching circular markings." << endl
         << " * The defuser must navigate the white light to the red triangle using the arrow buttons." << endl
         << " * Warning: Do not cross the lines shown in the maze. These lines are invisible on the bomb" << endl;
}

//module 11 : Passwords
void display_instructions_module11() {
    cout << "On the subject of Passwords" << endl << endl
         << " * The buttons above and below each letter will cycle through the possibilities for that position." << endl
         << " * Only one combination of the available letters will match a password below." << endl
         << " * Press the submit button once the correct word has been set." << endl;
}

//Needy module 1 : Venting gas
void display_instructions_needy1() {
    cout << "On the subject of venting Gas" << endl << endl
         << R"( * Respond to the computer prompts by pressung "Y" for "YES" or "N" for "NO".)" << endl;
}

//Needy module 2 : Capacitor discharge
void display_instructions_needy2() {
    cout << "On the subject of Capacitor Discharge" << endl << endl
         << "Discharge the capacitor before it overloads by holding down the lever." << endl;
}

//Needy module 3 : Knobs
void display_instructions_needy3() {
    cout << "On the subject of knobs" << endl << endl
         << " * The know can be turned to one of four different positions." << endl
         << " * The knob must be in the correct position when this module's timer hits zero." << endl
         << " * The correct position can be determined by the on/off configuration of the twelve LEDs." << endl
         << " * Knob positions are relative to the \"UP\" label, which may be rotated" << endl;
}


void display_modules() {
    clear();
    cout << "NOTE : Keypads and Maze are not managed by the application. Please refer to the official manual." << endl
         << endl;

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
         << "13 : Describe the bomb" << endl
         << "0 : Quit" << endl;
}