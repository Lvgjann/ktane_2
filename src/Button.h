//
// Created by dewitt on 12/09/19.
//

#ifndef KTANE2_BUTTON_H
#define KTANE2_BUTTON_H

#include "../inc/_application.h"
#include "../inc/_instructions.h"
#include "Bomb.h"
#include "Module.h"

class Button : public Module{
private:
    using Module::Module;
    Color m_color;
    std::string m_instruction;
public:
    Button(std::string name, bool solved, Color c, std::string i);

    Color get_color();
    std::string get_instruction();

    bool solve_held_button();
    bool solve_button(Bomb bomb);
};


#endif //KTANE2_BUTTON_H
