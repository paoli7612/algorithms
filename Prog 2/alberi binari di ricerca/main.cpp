#include <iostream>

#include "tree.h"

using namespace std;

int main(int argc, char **argv)
{
    BTree_t tree = NULL;
    
    int running = 20;
    
    while (running--)
    {
        show_tree(tree, 6);

        int n;
        cin >> n;

        add(tree, newNode(n));
        system("clear");
    }

    show_tree(tree, 6);

    int c;
    cout << "elemento da cercare: ";
    cin >> c;

    if (search(tree, c) == NULL)
        cout << " >>> non trovato [!]" << endl;
    
    cout << endl << leftest(tree->right)->inf << " è l'elemento piu a sinistra della prima destra" << endl;

    return 0;
}

// 50 10 20 5 25 11 1 55 56 57