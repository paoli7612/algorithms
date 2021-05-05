
#include <iostream>

#include "liste.h"

using namespace std;

void move(list_t list)
{
    int choice;
    do
    {
        cout << list->value << endl;
        cout << "1. next\n2. back\n0. exit" << endl;
        cin >> choice;
        if (choice == 1)
            next(list);
        else if (choice == 2)
            back(list);
    } while (choice != 0);
    

}

int main(int argc, char **argv)
{

    list_t list = NULL;
    
    bool running = true;
    while (running)
    {
        cout << 
            "\t 1. add next" <<
            "\t 2. add back" << 
            "\t 3. move" << endl;

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

        case 3: // move
            move(list);
            break;
        
        default:
            break;
        }

        print_next(first(list));
    }

    return 0;
}