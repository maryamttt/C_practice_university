#include <iostream>
#include <string>
using namespace std;

double tr(double h, double b) {return 0.5 * h * b;}
double pr(double h, double s) {return h * s;}
double cr(double r) {return 3.14 * r;}

int main() {
  cout << "Choose the type of figure \n";
  cout << "1-triangle, 2-rectangle, 3-circle \n";
  int t = 0;
  cin >> t;

  if (t == 1) {
    double h, b;
    cout << "Type parameters of triangle: height and one side\n";
    cin >> h >> b;
    cout << tr(h, b) << endl;
  }
  else if(t == 2) {
    double h, s;
    cout << "Type parameters of rectangle: height and width\n";
    cin >> h >> s;
    cout << pr(h, s) << endl;
  }
  else if(t == 3) {
    double r;
    cout << "Type parameters of circle: radius\n";
    cin >> r;
    cout << cr(r) << endl;
  }
  else {
    cout << "Invalid input!" << endl;
  }
}
