//
// Created by dewitt on 26/12/18.
//

#include "needy.h"

#include "_Appli.h"

void combination(string seq1, string seq2)
{
    //Up combination
    if ((seq1 == "001011" && seq2 == "111101")
        || (seq1 == "101010" && seq2 == "011011"))
        cout << "Turn the know to the position : Up." << endl;

        //Down combination
    else if ((seq1 == "011001" && seq2 == "111101")
             || (seq1 == "101010" && seq2 == "010001"))
        cout << "Turn the know to the position : Down." << endl;

        //Left combination
    else if ((seq1 == "000010" && seq2 == "100111")
             || (seq1 == "000010" && seq2 == "000110"))
        cout << "Turn the know to the position : Left." << endl;

        //Right combination
    else if ((seq1 == "101111" && seq2 == "111010")
             || (seq1 == "101100" && seq2 == "111010"))
        cout << "Turn the know to the position : Right." << endl;

        //Invalid combination
    else
        cout << "Error. Invalid combination." << endl;
}

void needy_1() {
    display_instructions_needy1();
}

void needy_2() {
    display_instructions_needy2();
}

void needy_3()
{
    bool quit = false;
    pair<string, string> sequence;

    clear();
    display_instructions_needy3();

    while (!quit)
    {
        cout << "Enter the first sequence of LED or 0 to return to menu " << endl;
        cin >> sequence.first;

        if (sequence.first == "0")
            quit = true;

        else if (sequence.first != "0")
        {
            cout << "Enter the last sequence of LED : " << endl;
            cin >> sequence.second;

            combination(sequence.first, sequence.second);
        }
    }
    menu();
}
