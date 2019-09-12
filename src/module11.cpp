#include "module11.h"

void sort_letters(vector<string> &letters, int stage)
{
    vector<string> filter;

    switch(stage)
    {
    case 1:
        for (unsigned int i = 0; i < letters.size(); i++)
        {
            for (unsigned int j = 0; j<_letter_1.size(); j++)
            {
                if (letters[i] == _letter_1[j])
                    filter.push_back(letters[i]);
            }
        }
        break;
    case 2:
        for (unsigned int i = 0; i < letters.size(); i++)
        {
            for (unsigned int j = 0; j<_letter_2.size(); j++)
            {
                if (letters[i] == _letter_2[j])
                    filter.push_back(letters[i]);
            }
        }
        break;
    case 3:
        for (unsigned int i = 0; i < letters.size(); i++)
        {
            for (unsigned int j = 0; j<_letter_3.size(); j++)
            {
                if (letters[i] == _letter_3[j])
                    filter.push_back(letters[i]);
            }
        }
        break;
    case 4:
        for (unsigned int i = 0; i < letters.size(); i++)
        {
            for (unsigned int j = 0; j<_letter_4.size(); j++)
            {
                if (letters[i] == _letter_4[j])
                    filter.push_back(letters[i]);
            }
        }
        break;
    case 5:
        for (unsigned int i = 0; i < letters.size(); i++)
        {
            for (unsigned int j = 0; j<_letter_5.size(); j++)
            {
                if (letters[i] == _letter_5[j])
                    filter.push_back(letters[i]);
            }
        }
        break;
    }
    letters.clear();
    letters = filter;
}

void add_letters(vector<string> &letters)
{
    string letter;

    for (int count = 0; count < 1; count++)
    {
        cin >> letter;
        letters.push_back(letter);
    }
}

void password(vector<string> le1, vector<string> le2, vector<string> le3, vector<string> le4, vector<string> le5, string &password)
{
    vector<string> res;
    vector<string> pass;
    bool found = false;
    unsigned i=0;

    while (i < _password.size() && !found)
    {
        split(_password[i], 0, pass);
        display_vector(pass);

        for (unsigned int l1 = 0; l1 < le1.size(); l1++)
        {
            if (le1[l1] == pass[0])
            {
                for (unsigned int l2 = 0; l2 < le2.size(); l2++)
                {
                    if (le2[l2] == pass[1])
                    {
                        for (unsigned int l3 = 0; l3 < le3.size(); l3++)
                        {
                            if (le3[l3] == pass[2])
                            {
                                for (unsigned int l4 = 0; l4 < le4.size(); l4++)
                                {
                                    if (le4[l4] == pass[3])
                                    {
                                        for (unsigned int l5 = 0; l5 < le5.size(); l5++)
                                        {
                                            if (le5[l5] == _password[4])
                                            {
                                                password = _password[i];
                                                cout << password << endl;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        i++;
    }
    cout << "test 2" << endl;

    cout << password << endl;
}


void module_11()
{
    //    vector<string> letters;
    vector<string> letter_1;
    vector<string> letter_2;
    vector<string> letter_3;
    vector<string> letter_4;
    vector<string> letter_5;

    bool quit = false;
    int stage = 1;

    string result;

    clear();
    display_instructions_module11();

    while (!quit && stage < 6)
    {
        switch(stage)
        {
        case 1:
            cout << "Enter the first letter possibilities" << endl;
            add_letters(letter_1);
            sort_letters(letter_1, 1);
            display_vector(letter_1);
            break;
        case 2:
            cout << "Enter the second letter possibilities" << endl;
            add_letters(letter_2);
            sort_letters(letter_2, 2);
            display_vector(letter_2);
            break;
        case 3:
            cout << "Enter the third letter possibilities " << endl;
            add_letters(letter_3);
            sort_letters(letter_3, 3);
            display_vector(letter_3);
            break;
        case 4:
            cout << "Enter the fourth letter possibilities" << endl;
            add_letters(letter_4);
            sort_letters(letter_4, 4);
            display_vector(letter_4);
            break;
        case 5:
            cout << "Enter the fifth letter possibilities" << endl;
            add_letters(letter_5);
            sort_letters(letter_5, 5);
            display_vector(letter_5);
            break;
        }
        stage++;
    }
    cout << "test 1" << endl;

    password(letter_1, letter_2, letter_3, letter_4, letter_5, result);

    cout << "The password is : " << result << endl;

    menu();
}
