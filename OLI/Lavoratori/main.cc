#include <iostream>
#include <cmath>
#include <ctime>

struct matrice_t {
    int **valori;
    int n;
};

struct array_t {
    int *valori;
    int n;
};

struct pos_t {
    int x, y;
};

void inizializza(pos_t &pos, const int x, const int y) {
    pos.x = x;
    pos.y = y;
}

void inizializza(array_t &array, const int N) {
    array.valori = new int[N];
    array.n = N;
    for (int i=0; i<N; i++) 
        array.valori[i] = 0;
}

void inizializza(matrice_t &mat, const int N) {
    mat.n = N;
    mat.valori = new int*[N];
    for (int i=0; i<N; i++) 
        mat.valori[i] = new int[N];
}

void chiedi(matrice_t &mat, bool random) {
    for (int y=0; y<mat.n; y++) {
        for (int x=0; x<mat.n; x++) {
            if (random) {
                mat.valori[y][x] = rand()%10;
            } else {
                std::cout << "lavoratore " << y << "\tcompito " << x << ": "; 
                std::cin >> mat.valori[y][x];
            }
        }
    }
}

void stampa(const array_t &array) {
    for (int i=0; i<array.n; i++) 
        std::cout << array.valori[i] << " ";
    std::cout << std::endl; 
}

void stampa(const matrice_t &mat) {
    for (int y=0; y<mat.n; y++) {
        for (int x=0; x<mat.n; x++) {
            if (x == 0) std::cout << y << ":\t";
            std::cout << mat.valori[y][x] << " ";
        }
        std::cout << std::endl;
    }
}

void calcola_soluzioni(matrice_t &matrice, array_t &array) {



}

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    matrice_t mat;
    int N;
    if (argc == 2) {
        N = std::atoi(argv[1]);
        inizializza(mat, N);
        chiedi(mat, true); 
    } else {
        std::cout << "numero lavoratori: ";
        std::cin >> N;
        inizializza(mat, N);
        chiedi(mat, false); 
    }
    stampa(mat);

    matrice_t sol;
    inizializza(sol, std::tgamma(mat.n+1));

    calcola_soluzioni(mat, sol);

    stampa(sol);

    return 0;
}
