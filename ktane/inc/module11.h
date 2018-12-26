#ifndef MODULE11
#define MODULE11

#include "_Instructions.h"
#include "_Outils.h"

void sort_letters(vector<string> &letters, int stage);
void add_letters(vector<string> &letters);
void password(vector<string> le1, vector<string> le2, vector<string> le3, vector<string> le4, vector<string> le5, string &password);
void module_11();

const vector<string> _password = { "about", "after", "again", "below", "could"
                                   , "every", "first", "found", "great", "house"
                                   , "large", "learn", "never", "other", "place"
                                   , "plant", "point", "right", "small", "sound"
                                   , "spell", "still", "study", "their", "there"
                                   , "these", "thing", "think", "three", "water"
                                   , "where", "which", "world", "would", "write" };

const vector<string> _letter_1 = { "a", "b", "c", "f", "g", "h", "l", "n", "o", "p", "r", "s", "t", "w" };
const vector<string> _letter_2 = { "a", "b", "e", "f", "g", "h", "i", "l", "m", "o", "p", "r", "t" };
const vector<string> _letter_3 = { "a", "e", "g", "h", "i", "l", "m", "r", "t", "u" };
const vector<string> _letter_4 = { "a", "c", "e", "g", "i", "l", "m", "n", "o", "r", "s", "t", "u" };
const vector<string> _letter_5 = { "d", "e", "h", "k", "l", "n", "r", "t", "w" };

#endif // MODULE11

