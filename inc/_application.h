//
// Created by dewitt on 12/09/19.
//

#ifndef KTANE2_APPLICATION_H
#define KTANE2_APPLICATION_H

#include <array>
#include <cstdlib>
#include <cstring>
#include <exception>
#include <iostream>
#include <map>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>


using namespace std;

enum Color {black, blue, red, yellow, white};

Color convert(std::string str);
bool contains_vowel(std::string str);

void clear();
void menu();

void display_vector(vector<string> tab);
bool find_word(vector<string> tab, string word);
void find_dictionnary(vector<vector<string> > tab, string dic);
vector<string> split(string str);

#endif //KTANE2_APPLICATION_H
