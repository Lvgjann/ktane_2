#include "module8.h"

void check_wire(bool LED, bool star, bool red, bool blue)
{
    if ((!LED && !star && !red && !blue)
            || (!LED && star && !red && !blue)
            || (!LED && star && red && !blue))
        cout <<  "Cut the wire." << endl;

    else if ((!LED && !star && red && !blue)
             || (!LED && !star && !red && blue)
             || (!LED && !star && red && blue)
             || (LED && !star && red && blue))
        cout << "Cut the wire if the last digit of the serial number is even." << endl;

    else if ((!LED && star && red && blue)
             || (LED && !star && !red && blue)
             || (LED && star && !red && blue))
        cout <<  "Cut the wire of the bomb has a parallel port." << endl;

    else if ((LED && star && !red && !blue)
             || (LED && star && red && !blue)
             || (LED && !star && red && !blue))
        cout << "Cut the wire if the bomb has two or more batteries." << endl;

    else
        cout << "Don't cut the wire." << endl;
}

void module_8()
{
    bool wire = false;

    bool LED = false;
    bool star = false;
    bool red = false;
    bool blue = false;

    string entry;

    clear();
    display_instructions_module8();

    cout << "Enter the combination on the wire and press 0 when finished: " << endl
         << "(\"LED\", \"star\", \"red\", \"blue\")" << endl;
    while (!wire)
    {
        cin >> entry;
        if (entry == "LED")
            LED = true;
        else if (entry == "star")
            star = true;
        else if (entry == "red")
            red = true;
        else if (entry == "blue")
            blue = true;
        else if (entry == "0")
            wire = true;
    }
    check_wire(LED, star, red, blue);

    menu();
}
