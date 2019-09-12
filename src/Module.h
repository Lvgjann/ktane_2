//
// Created by dewitt on 12/09/19.
//

#ifndef KTANE2_MODULE_H
#define KTANE2_MODULE_H

#include <string>

class Module {
private:
    std::string m_name;
    bool m_solved;

public:
    Module(std::string name, bool solved);
    ~Module();

    bool is_solved();
    std::string get_name();
};


#endif //KTANE2_MODULE_H
