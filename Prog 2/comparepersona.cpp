/*Si scriva la funzione int compare(persona, persona) che implementa la seguente
relazione d’ordine:
compare(e1,e2)=0 se nome e id coincidono

compare (e1,e2)<0 se il nome di e2 precede il nome di e2 e oppure coincidono e l’id di e1 è
minore dell’id di e2

compare(e1,e2)>0 altrimenti
int compare(persona p1, persona p2){
}*/

#include <iostream>
#include <cstring>

using namespace std;

struct persona_t {
    int id;
    char nome[20];
};

int compare(const persona_t p1, const persona_t p2)
{
    if (p1.id == p2.id && strcmp(p1.nome, p2.nome) == 0)
        return 0;
    else if (p1.id < p2.id && strcmp(p1.nome, p2.nome) < 0)
        return -1;
    else
        return 1;
}

int main(int argc, char **argv)
{

    persona_t p = {2, "Tommaso"}, o = {1, "Filippo"};

    cout << compare(p, o);

}