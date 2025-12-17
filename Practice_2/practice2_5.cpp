#include <iostream> 
#include <string> 
#include <math.h>
#include <cmath>

int main() {
std:: string name = "1 course_Timirgaleeva Maryam_INBO-22_25";
std:: string exe_5 = "exe.5 from PR2";

std:: cout << name;
std:: cout << exe_5;

float S, p, n = 0;
std:: cout << "Введите значения для S, p, n\n";
std:: cin >> S >> p >> n;

double r = p / 100;
double z = 12 * (pow((1 + r), n) - 1);

if (z <= 0) {
  std:: cout << "///";
  return 0;
}

else {
  std:: cout << (S * r * pow((1 + r), n)) / z;
}
}