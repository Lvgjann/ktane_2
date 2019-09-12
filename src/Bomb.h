//
// Created by dewitt on 12/09/19.
//

#ifndef KTANE2_BOMB_H
#define KTANE2_BOMB_H

#include <iostream>
#include <map>
#include <string>
#include <vector>

class Bomb {
private:
    int m_battery;
    std::map <std::string, bool> m_label;
    std::vector<bool> m_ports;
    std::string m_serial;

public:
    Bomb();
    Bomb(int b, std::map<std::string, bool> l, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, std::string serial);
    ~Bomb();

    int get_battery();
    void set_battery();

    std::map<std::string, bool> get_label();
    void set_label();

    std::vector<bool> get_port();
    void set_port();

    std::string get_serial();
    void set_serial();

    bool contains_label(std::string label);
    bool contains_lit_label(std::string label);

    void init_bomb();
};


#endif //KTANE2_BOMB_H
