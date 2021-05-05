
#include <iostream>

#include "liste.h"

using namespace std;

int main(int argc, char **argv)
{

    list_t list = NULL;
    
    bool running = true;
    while (running)
    {
        cout << 
            "\t 1. add next" <<
            "\t 2. add back" << endl;

        int choice;
        cin >> choice;

        switch (choice)
        {
            int value;
        case 1: // add next
            cout << "value: ";
            cin >> value;
            add_next(list, value);
            break;

        case 2: // add back
            cout << "value: ";
            cin >> value;
            add_back(list, value);
            break;
        
        default:
            break;
        }

        print_next(first(list));
    }

    return 0;
}