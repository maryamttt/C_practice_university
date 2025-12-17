#include <iostream>
#include <string>
using namespace std;

int main() {
string name = "1 course_Timirgaleeva Maryam_INBO-22_25";
string exe_1 = "exe.4 from PR3";

cout << name;
cout << exe_1 << endl;

int m, n;
cout << "Введите значения для m и n" << endl;
cin >> m >> n;

if (m != n) {
  while (m != n) {
    if (m > n) {
      m = m - n;
    }
    else {
      n = n - m;
    }
  }
  cout << m << endl;
}
else{
  cout << m;
  }


int a, b;
cout << "Введите значения для a и b." << endl;
cin >> a >> b;

if (a != 0 && b != 0) {
  while (a != 0 && b != 0) {
    if (a > b) {
      a = a % b;
    }
    else {
      b = b % a;
    }
  }
cout << a + b;
}
else {
  cout << a + b;
}

}

