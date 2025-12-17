#include <iostream> 
#include <string> 
#include <math.h>
#include <cmath>

int main() {
std:: string name = "1 course_Timirgaleeva Maryam_INBO-22_25";
std:: string exe_4 = "exe.4 from PR2";

std:: cout << name;
std:: cout << exe_4;

for (float i = -4; i <= 4; i = i + 0.5) {
  if (i == 1) {
    std:: cout << "Нет решений";
    continue;}
    
std:: cout << ((pow(i, 2) - i * 2 + 2) / (i - 1));
}
}