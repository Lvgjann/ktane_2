//
// Created by dewitt on 12/09/19.
//

#include "Button.h"

Button::Button(std::string name, bool solved, Color color, std::string instruction)
        : Module(name, solved) {
    m_color = color;
    m_instruction = instruction;
}

Color Button::get_color() {
    return m_color;
}

std::string Button::get_instruction() {
    return m_instruction;
}

bool Button::solve_held_button() {
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
    else
        return false;
    return true;
}


bool Button::solve_button(Bomb bomb) {
    // Condition to press and release
    if ((bomb.get_battery() >= 1 && m_instruction == "detonate")
        || (bomb.get_battery() > 2 && bomb.contains_lit_label("frk"))
        || (m_color == red && m_instruction == "hold")) {
        std::cout << "Press and immediately release the button." << std::endl;
        return true;
    }
    else if ((m_instruction == "abort" && m_color == blue)
             || (m_color == white && bomb.contains_lit_label("car"))
             || (m_color == yellow)) {
        std::cout << "Hold the button." << std::endl;
        return solve_held_button();
    }
    else {
        std::cout << "Hold the button." << std::endl;
        return solve_held_button();
    }
}