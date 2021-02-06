#include <iostream>

using namespace std;

const int VERTICI = 5;

const bool MAT[VERTICI][VERTICI] = {
  {0, 0, 1, 0, 1}, // 0
  {1, 0, 0, 0, 0}, // 1
  {0, 1, 0, 0, 0}, // 2
  {0, 1, 0, 0, 1}, // 3
  {0, 0, 1, 0, 1}  // 4
};

const int NODI[VERTICI] = {4, 5, 2, 3, 1};

int main(int argc, char** argv)
{

    for (int i=0; i<VERTICI; i++)
    {
      for (int j=0; j<VERTICI; j++)
      {
          if (MAT[i][j])
            cout << NODI[i] << " -> " << NODI[j] << endl;
      }
    }

    return 0;
}
