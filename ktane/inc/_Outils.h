#ifndef OUTILS
#define OUTILS

#include <array>
#include <cstdlib>
#include <iostream>
#include <map>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <vector>

#include <SDL/SDL.h>

using namespace std;

void clear();
void menu();
void display_vector(vector<string> tab);

bool find_word(vector<string> tab, string word);

void find_dictionnary(vector<vector<string> > tab, string dic);

void split(string s, int l, vector<string> &entries);

#endif // OUTILS
