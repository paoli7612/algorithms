#include <iostream>
#include <cmath>
#include <ctime>
#include <fstream>

using namespace std;

struct matrix_t {
    int x, y;
    int **v;
    int s = 0;
};

void init(matrix_t &matrix, const int x, const int y) {
    matrix.y = y;
    matrix.x = x;

    matrix.v = new int*[y];
    for (int y=0; y<matrix.y; y++) {
        matrix.v[y] = new int[matrix.x];
        for (int x=0; x<matrix.x; x++) {
            matrix.v[y][x] = 0;
        }
    }
}

void print(const matrix_t &matrix) {
    cout << "print __ " << endl;
    for (int y=0; y<matrix.y; y++) {
        for (int x=0; x<matrix.x; x++) 
            cout << matrix.v[y][x] << " ";
        cout << endl;
    }
}

void ask(matrix_t &matrix, const bool random, istream &is=cin) {
    for (int y=0; y<matrix.y; y++) 
        for (int x=0; x<matrix.x; x++) {
            if (random) matrix.v[y][x] = rand()%10;
            else is >> matrix.v[y][x];
        }
}

int s=0;

void calculate(const matrix_t &matrix, matrix_t &solution, int x=-1, int y=-1) {
    if (x == -1 && y == -1) {
        for (int i=0; i<matrix.x; i++) {
            calculate(matrix, solution, i, 0);
        }
    } else if (matrix.x - y == 1) {
        cout << x << " " << y << endl;
    } else {
        cout << "asd" << y << endl;
        for (int i=0; i<matrix.x; i++) {
            if (i != x)
                calculate(matrix, solution, i, y+1);
        }
    }
}

void load(matrix_t &matrix) {
    ifstream file("matrix.txt");

    int N;
    file >> N;
    init(matrix, N, N);
    ask(matrix, false, file);

    file.close();
}

int main(int argc, char const *argv[])
{
    matrix_t matrix;    
    srand(time(NULL));

    int N;
    if (argc == 2) {
        N = std::atoi(argv[1]);
        if (N == 0) {
            load(matrix);
        } else {
            init(matrix, N, N);
            ask(matrix, true); 
        }
    } else {
        std::cout << "numero lavoratori: ";
        std::cin >> N;
        init(matrix, N, N);
        ask(matrix, false); 
    }
    print(matrix);

    matrix_t solution;
    init(solution, matrix.x, tgamma(matrix.x+1));

    calculate(matrix, solution);

    print(solution);


    return 0;
}
