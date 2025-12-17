#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n;
  cout << " Введите верзнюю границу диапазона n= " << endl;
  cin >> n;
  int* primes = new int[n + 1];
  for (int i = 0; i < n + 1; i++) {
    primes[i] = i;
  }

  int j = 0;
  for (int i = 0; i < n; i = i + 1) {
    if (primes[i] != 0) {
      j = (i+1) * 2;
      while (j <= n) {
        primes[j] = 0;
        j = j + (i+2);
      }
    }
  }

  for (int x = 0 ; x <= n; x++) {
    if (primes[x] == 0) {
      continue;
    }
    cout << primes[x] << endl;
  } 
}