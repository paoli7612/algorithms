#ifndef LIST_H
#define LIST_H

namespace list {

    struct Node {
        int value;
        Node *next;
    };

    typedef Node *List;
}

namespace listDouble {

    struct Node {
        int value;
        Node *next;
        Node *back;
    };

    typedef Node *List;
}

#endif // LIST_H