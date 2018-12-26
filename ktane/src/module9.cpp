#include "module9.h"

void module_9()
{
    int count = 0;
    int count_red = 0;
    int count_blue = 0;
    int count_black = 0;

    string connection;
    string color;

    bool quit = false;

    while(!quit)
    {
        cout << "Enter the wire color : " << endl;
        if (count == 0)
            cout << " Red : r, Blue : b, Black : n" << endl;
        cin >> color;

        cout << "Enter the connection (A, B, C) : " << endl;
        cin >> connection;
    }
}
