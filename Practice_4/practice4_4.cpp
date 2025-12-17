#include <iostream>
using namespace std;

int main() {
  int gen = 0;
  cout << "Chooose generator: 1 or 2" << endl;
  cin >> gen;

  if (gen == 1) {
    int m = 37;
    int i = 3;
    int c = 64;
    int s = 0;
    for (int j = 0; j < 10; j++)
    {
      s = (m * s + i) % c;
      cout << s << endl;
    }
  }

  else if (gen == 2) {
    int m = 25173;
    int i = 13849;
    int c = 65537;
    int s = 0;

    for (int j = 0; j < 10; j++) {
      s = (m * s + i) % c;
      cout << s << endl;
    }
  }

  else {
    cout << "No such generator";
  }
  return 0;
}