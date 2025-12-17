#include <iostream> 
#include <string> 
#include <math.h>
#include <cmath>

int main() {
std:: string name = "1 course_Timirgaleeva Maryam_INBO-22_25";
std:: string exe_1 = "exe.1 from PR2";

std:: cout << name;
std:: cout << exe_1;

double a, x;
std:: cout << "Введите числовые значения для переменной a\n";
std:: cin >> a;
std:: cout << "Введите числовые значения для переменной x\n";
std:: cin >> x;

if (abs(x) < 1 && abs(x) != 0) {
  double n1 = a * log(abs(x));
  std:: cout << n1; 
}

else if (x == 0) {
  std:: cout << "Нет решений"; 
}

else {
double n2 = (a - pow(x, 2));

if (n2 < 0) {
  std:: cout << "Нет решений";
  return 0;
}
std:: cout << sqrt(n2);
}

return 0;
}