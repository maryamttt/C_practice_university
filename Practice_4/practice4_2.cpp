#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;


int main() {
{
  ofstream file("pr4_2.txt");
  int i = 0;
  for (int line = 0; line < 14; line++) {
    if (line < 6) {
      for (int star = 0; star < 8; star++) {
        file << "*" << " ";
      }
      for (int l = 0; l <= 13; l++) {
        file << "--";
      }
      file << endl;
    }

    else {
      for (int ll = 0; ll <= 21; ll++) {
        file << "--";
      }
      file << endl;
    }
  }
}
return 0;
}

/*
int main() {
  int i = 0;
  for (int line = 0; line < 14; line++) {
    if (line < 6) {
      for (int star = 0; star < 8; star++) {
        cout << "*" << " ";
      }
      for (int l = 0; l <= 13; l++) {
        cout << "--";
      }
      cout << endl;
    }

    else {
      for (int ll = 0; ll <= 21; ll++) {
        cout << "--";
      }
      cout << endl;
    }
  }
  return 0;
}

/*
int main(){
  int i = 0;
  int line = 0;
  for (int i = 0; i < 6; i++) {
    for (int z = 0; z < 8; z++) {
      cout << "*" << " ";
    }
    for (int line = 0; line <= 13; line++) {
      cout << "--";
    }
    cout << endl;
  }
  for (int l = 0; l < 8; l++) {
    for (int s = 0; s <= 21; s++) {
      cout << "--";
    }
    cout << endl;
  }
  return 0;
}
*/