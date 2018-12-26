#include "_Outils.h"

void clear()
{
    cout << "\033[02J\033[1;1H";
}

void menu()
{
    cout << "Press any key to continue." << endl;
    cin.ignore();
    cin.get();
}

void display_vector(vector<string> tab)
{
    cout << "/==============================/" << endl;
    for (unsigned int i=0; i < tab.size(); i++)
        cout << tab[i] << " " << endl;
    cout << endl;
}

bool find_word(vector<string> tab, string word)
{
    bool found =  false;
    for (unsigned int i=0; i < tab.size(); i++)
    {
        if (tab[i] == word)
            found = true;
    }
    return found;
}

void find_dictionnary(vector<vector<string> > tab, string dic)
{
    bool found = false;
    unsigned int i = 0;
    while (!found && i < tab.size())
    {
        if (tab[i][0]== dic)
        {
            found = true;
            display_vector(tab[i]);
        }
        else
            i++;
    }
}

void split(string s, int l, vector<string> &entries)
{
    const char *c = s.c_str();
    char buffer[l];
    entries.reserve(0);

    int d = 0;
    for(unsigned int i = 0; i < s.length() - 1;)
    {
        if(d != l)
        {
            buffer[d] = c[i];
            d++;
            i++;
        }
        else
        {
            entries.push_back(std::string(buffer, l));

            //Clear array
            memset(buffer, 0, l);
            d = 0;
        }
    }
}
