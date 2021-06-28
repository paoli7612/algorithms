
#include "tipo.h"

int seme_int(char seme)
{
    switch (seme)
    {
        case 'C':
            return 0;
        case 'Q':
            return 1;
        case 'F':
            return 2;
        case 'P':
            return 3;
    }
    throw "seme non valido";
}

int card_int(card_t card)
{
    return card.valore + seme_int(card.seme)*13;
}

int compare(card_t a, card_t b)
{
    return card_int(a) - card_int(b);
}

void copy(card_t& a, card_t b)
{
    a.seme = b.seme;
    a.valore = b.valore;
}

void print(card_t a)
{
    std::cout << " < " << a.valore << " " << a.seme << " >";
}

bool next(card_t a, card_t b)
{
    if (a.seme != b.seme)
        return false;

    if (abs(a.valore - b.valore) == 1)
        return true;
    else
        return false;    
}