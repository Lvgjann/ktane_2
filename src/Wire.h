//
// Created by dewitt on 26/12/18.
//

#ifndef KTANE2_WIRE_H
#define KTANE2_WIRE_H

#include "_Appli.h"


class Wire {
private:
    std::vector<Color> color;
    std::vector<Color> color_2;
    bool led;
    bool star;
public:

    void check_3wires();
    void check_4wires();
    void check_5wires();
    void check_6wires();
    void check_wire(bool LED, bool star, bool red, bool blue);

    Wire();
};


#endif //KTANE2_WIRE_H