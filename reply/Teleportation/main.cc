#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
  ifstream file("1.txt");
  ofstream out("out.txt");

  int T;
  file >> T;

  for (int i=0; i<T; i++)
  {
    cout << "Case #1" << endl;
    int w, h;
    int qx, qy;
    file >> w >> h;
    int** mat = new int*[h];
    for (int j=0; j<h; j++)
      mat[j] = new int;

    file >> qx >> qy;
    int p;
    file >> p;

    for (int j=0; j<p; j++){
      int x, y;
      file >> x >> y;
      mat[y][x] = j+1;
      cout << mat[y][x] << endl;
      file >> x >> y;
      mat[y][x] = -j-1;
    }

    for (int y=0; y<h; y++){
      for (int x=0; x<w; x++)
        cout << mat[y][x] << " ";
      cout << endl;
    }
    int passi = 0;

  }


  return 0;
}
