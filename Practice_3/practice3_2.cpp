#include <iostream> 
#include <fstream>
#include <string> 
using namespace std;


int main() {

ifstream fin("pr3_2.txt");
string line;


while (getline(fin, line)) {
  for (int i = 0; i < line.length(); i = i + 1) {
    if (line[i] >= 48 && line[i] <= 57) {
      cout << line[i];
    }
  }
}
}
