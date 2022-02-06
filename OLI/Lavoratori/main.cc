#include <iostream>

struct mat_t {
    int **valori;
    int n;
};

void inizializza(mat_t &mat, const int N) {
    mat.n = N;
    mat.valori = new int*[N];
    for (int i=0; i<N; i++) 
        mat.valori[i] = new int[N];
}

void chiedi(mat_t &mat) {
    for (int y=0; y<mat.n; y++) {
        for (int x=0; x<mat.n; x++) {
            std::cout << "lavoratore " << y << "\tcompito " << x << ": "; 
            std::cin >> mat.valori[y][x];
        }
    }
}

void stampa(const mat_t &mat) {
    for (int y=0; y<mat.n; y++) {
        for (int x=0; x<mat.n; x++) {
            if (x == 0) std::cout << y << ":\t";
            std::cout << mat.valori[y][x] << " ";
        }
        std::cout << std::endl;
    }
}

int main(int argc, char const *argv[])
{
    mat_t mat;
    int N;
    std::cout << "numero lavoratori: ";
    std::cin >> N;
    inizializza(mat, N);

    chiedi(mat);
    stampa(mat);

    return 0;
}
