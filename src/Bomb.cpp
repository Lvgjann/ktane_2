//
// Created by dewitt on 12/09/19.
//

#include "Bomb.h"

Bomb::Bomb(int b, std::map<std::string, bool> l, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, std::string serial) {
    m_battery = b;
    m_label = l;
    m_ports = {p1, p2, p3, p4, p5, p6};
    m_serial = serial;
}

Bomb::~Bomb() = default;

int Bomb::get_battery() {
    return m_battery;
}

void Bomb::set_battery() {
    int battery;
    std::cin >> battery;
    m_battery = battery;
}

std::map<std::string, bool> Bomb::get_label() {
    return m_label;
}

void Bomb::set_label() {
    std::map<std::string, bool> l;
    // TODO : map entry.
    m_label = l;
}

std::vector<bool> Bomb::get_port() {
    return m_ports;
}

void Bomb::set_port() {
    std::string tmp;
    std::vector<std::string> questions = {
            "Is there a DVI-I port ? [y/n]",
            "Is there a parallel port ? [y/n]",
            "Is there a DVIPS/2 port ? [y/n]",
            "Is there a RJ-45 port ? [y/n]",
            "Is there a serial port ? [y/n]",
            "Is there a Stereo RCA port ? [y/n]"
    };

    for (int i = 0; i < 5; i++) {
        std::cout << questions[i] << std::endl;
        std::cin >> tmp;
        while (tmp != "y" || tmp != "n") {
            std::cout << "Error. " << questions[i] << std::endl;
            std::cin >> tmp;
            if (tmp == "y")
                m_ports[i] = true;
            else if (tmp == "n")
                m_ports[i] = false;
        }
    }
}

bool Bomb::contains_label(std::string label) {
    return false;
}

bool Bomb::contains_lit_label(std::string label) {
    return false;
}

void Bomb::init_bomb() {

}

std::string Bomb::get_serial() {
    return m_serial;
}

void Bomb::set_serial() {
    std::string str;
    std::cin >> str;
    m_serial = str;
}