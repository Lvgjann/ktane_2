//
// Created by dewitt on 12/09/19.
//

#include "Module.h"

Module::Module(std::string name, bool solved) {
    m_name = name;
    m_solved = solved;
}

bool Module::is_solved() {
    return m_solved;
}

std::string Module::get_name() {
    return m_name;
}

Module::~Module() = default;