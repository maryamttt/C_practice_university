#include <iostream> 
#include <string> 
#include <math.h>
#include <cmath>

int main() {
std:: string name = "1 course_Timirgaleeva Maryam_INBO-22_25";
std:: string exe_2 = "exe.2 from PR2";

std:: cout << name;
std:: cout << exe_2;

float b, y, x = 0;
std:: cout << "Введите значение для переменной b, y, x \n";
std:: cin >> b >> y >> x;

float m2 = b - x;
float m1 = b - y;

if (m2 < 0 || m1 <= 0) {
  std:: cout << "нет решений";
}

else {
  std:: cout << log(m1) * sqrt(m2);
}
}
