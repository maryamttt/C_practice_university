#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
  
  const int sell = 3; 
  const int prod = 4; 

  int t_a[sell][prod] = {
    {5, 2, 0, 10},
    {3, 5, 2, 5},
    {20, 0, 0, 0}
  };

  double t_b[prod][2] = {
    {1.20, 0.50},
    {2.80, 0.40},
    {5.00, 1.00},
    {2.00, 1.50}
  };

  double r[sell]= {0}; 
  double cc[sell] = {0}; 

  for (int i = 0; i < sell; i+=1) {
    for (int j = 0; j < prod; j+=1) {
      r[i] += t_a[i][j] * t_b[j][0]; 
      cc[i] += t_a[i][j] * t_b[j][1];
    } 
  }

  double t_r = 0; 
  double c = 0; 
  int r_max = 0, r_min = 0;
  int c_max = 0, c_min = 0;

  for(int i = 0; i < sell; i++) {
    t_r += r[i]; 
    c += cc[i]; 
    if (r[i] > r[r_max]) {
      r_max = i; 
    }
    if (r[i] < r[r_min]) {
      r_min = i; 
    }
  }

  for (int i = 0; i < sell; i++) {
    if (cc[i] > cc[c_max]) {
      c_max = i;
    }
    if (cc[i] < cc[c_min]) {
      c_max = i;
    }
  }
    
    cout << "Seller Num: " << (r_max + 1) << " max revenue: " << r[r_max] << endl;
    cout << "Seller Num: " << (r_min + 1) << " min revenue: " << r[r_min] << endl;
    cout << "Seller Num: " << (c_max + 1) << " max commission: " << cc[c_max] << endl;
    cout << "Seller Num: " << (c_min + 1) << " min commission: " << cc[c_min] << endl;
    cout << "All commissions: " << c << endl; 

    for (int i = 0; i < sell; i++) {
      cout << "Seller: " << (i+1) << ":" << cc[i] << endl;
    }

    cout << "All money: " << (t_r + c) << endl;
}