//
// Created by dewitt on 12/09/19.
//

#include "_application.h"

Color convert(const std::string str) {
    if (str == "black") return black;
    else if (str == "blue") return blue;
    else if (str == "red") return red;
    else if (str == "yellow") return yellow;
    else if (str == "white") return white;
}

bool contains_vowel(std::string str) {
    std::vector<std::string> vowels = {"a", "e", "i", "o", "u"};
    bool found = false;
    int i = 0;
    while (i < 4 || !found) {
        if (str.find(vowels[i]))
            found = true;
        i++;
    }
    return found;
}

void clear() {
    cout << "\033[02J\033[1;1H";
}

void menu() {
    cout << "Press any key to continue." << endl;
    cin.ignore();
    cin.get();
}

void display_vector(vector<string> tab) {
    cout << "/==============================/" << endl;
    for (const auto &i : tab)
        cout << i << " " << endl;
    cout << endl;
}

bool find_word(vector<string> tab, string word) {
    bool found = false;
    for (const auto &i : tab) {
        if (i == word)
            found = true;
    }
    return found;
}

void find_dictionnary(vector<vector<string> > tab, string dic) {
    bool found = false;
    unsigned int i = 0;
    while (!found && i < tab.size()) {
        if (tab[i][0] == dic) {
            found = true;
            display_vector(tab[i]);
        }
    }
}

vector<string> split(string str) {
    int n = static_cast<int>(str.length());
    char arr[n+1];
    vector<string> res;

    strcpy(arr, str.c_str());

    for (int i = 0; i < n; i++)
        res[i] = arr[i];
    return res;
}
