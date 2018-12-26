//
// Created by dewitt on 26/12/18.
//

#ifndef KTANE2_BUTTON_H
#define KTANE2_BUTTON_H

#include "_Appli.h"

class Button {
private:
    Color color;
    std::string name;
public:
    void held_button();
    Button();
    ~Button();
};


#endif //KTANE2_BUTTON_H
