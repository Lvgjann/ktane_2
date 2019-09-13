//
// Created by dewitt on 12/09/19.
//

#ifndef KTANE2_MODULES_H
#define KTANE2_MODULES_H

#include "_application.h"
#include "Button.h"

void simon_vowel(int strike);
void simon_non_vowel(int strike);
int count_wires(std::vector<std::string> wires, std::string color);
void solve_wires(std::string str, Bomb bomb);
void wof_step_2(std::string word);
void wof_step_1();

void module_1(Bomb bomb);
void module_2(Bomb bomb);
void module_3();
void module_4(Bomb bomb);
void module_5();
void module_6();
void module_7();
void module_8(Bomb bomb);
void module_9(Bomb bomb);
void module_10(Bomb bomb);
void module_11(Bomb bomb);

int appli();

#endif //KTANE2_MODULES_H
