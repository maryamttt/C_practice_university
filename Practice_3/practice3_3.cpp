#include <iostream> 
#include <fstream>
#include <string> 
#include <algorithm>
using namespace std;

string aphabet(string x) {
  for (int i; i < x.length(); i++) {
    for (int j = i + 1; j < x.length() - 1; j++) {
      if (x[i] > x[j]) {
        swap(x[i], x[j]);
      }
    }
  }
  return x;
}


int main() {
string name = "1 course_Timirgaleeva Maryam_INBO-22_25";
string exe_1 = "exe.3 from PR3";

cout << name;
cout << exe_1 << endl;

ifstream fin("pr3_3.txt");
string line, b;
int sc;

while (getline(fin, line)) {
  if (line.length() < 30 && line.length() != 0) {
    for (int i = 0; i < line.length() + 1; i++) {
      if (((line[i] > 64) && (line[i] <= 90)) || ((line[i] > 96) && (line[i] <= 122))) {
        b += line[i];
      }
    }
  }
  else {
    cout << "Enter sentence one more time. There are some numbers or length or sentence too long.";
  }
}

string x = b;
for (int i = 0; i < x.length(); i++) {
    for (int j = 0; j < x.length() - 1; j++) {
      if (x[j] > x[j + 1]) {
        swap(x[j], x[j+1]);
    }
  }
}
cout << x;
}

