#include <utility>

//
// Created by dewitt on 26/12/18.
//

#include "Button.h"

Button::Button() {
}

void Button::held_button()
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

Button::~Button() = default;
