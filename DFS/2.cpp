#include <iostream>
#include <ctime>
#include <vector>

using namespace std;


int main(int argc, char** argv)
{
  srand(time(NULL));

  std::vector<int> v;
  v.begin();

  for (int n=0; n<10; n++)
    v.push_back(rand()%10);
  for (int n=0; n<10; n++)
    cout << v[n] << endl;

  return 0;
}
