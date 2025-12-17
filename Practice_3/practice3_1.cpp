#include <iostream> 
#include <fstream>
#include <string> 
using namespace std;


int main() {

ifstream fin("practica.txt"); //открыли файл для чтения  
string line; 


while(getline(fin, line)) {
  cout <<  line << endl;}
}