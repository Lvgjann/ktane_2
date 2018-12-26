#ifndef APPLI
#define APPLI

#include <array>
#include <cstdlib>
#include <iostream>
#include <map>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

struct Color {
    std::string color;
};


void display_instructions_module1();
void display_instructions_module2_0();
void display_instructions_module2_1();
void display_instructions_module3();
void display_instructions_module4();
void display_instructions_module5();
void display_instructions_module6();
void display_instructions_module7();
void display_instructions_module8();
void display_instructions_module9();
void display_instructions_module10();
void display_instructions_module11();
void display_instructions_needy1();
void display_instructions_needy2();
void display_instructions_needy3();

void clear();
void menu();

void display_vector(vector<string> tab);

bool find_word(vector<string> tab, string word);

void find_dictionnary(vector<vector<string> > tab, string dic);

void display_modules();
int appli();

#endif // APPLI

