#include <iostream> 
#include <string> 
#include <math.h>
#include <cmath>

int main() {
std:: string name = "1 course_Timirgaleeva Maryam_INBO-22_25";
std:: string exe_6 = "exe.6 from PR2";

std:: cout << name;
std:: cout << exe_6;

float S, n, m, z, m2;
std:: cout << "tdfghjj\n";
std:: cin >> S >> n >> m;
// Изначально нам даны переменные S, n, m. Последняя переменная m нам нужна, чтобы сравнивать ее с той m2, которую мы получим от работы в цикле for. (В цикле for i, которая в формуле задана p, считает m2.) В тот момент, когда m2 приближается к m (уже заданной), мы выводим i. 

for (double i = 1; i <= 300; i = i + 0.01) {

  z = 12 * (pow((1 + (i/100)), n) - 1);
  m2 = (S * (i/100) * pow((1 + (i/100)), n)) / z;

  if (m2 >= m) {
    std:: cout << i;
    return 0;
  }
}
}