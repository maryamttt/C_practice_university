#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
using namespace std;

int main() {
string name = "1 course_Timirgaleeva Maryam_INBO-22_25";
string exe_1 = "exe.6 from PR3";

cout << name;
cout << exe_1 << endl;

{
  ofstream file("pr.txt");
  int i = 10;
  while (i < 20){
    file << i << ' ';
    i++;
  }
  file.close();
}

{
  string line;
  fstream file("pr.txt");
  int ss = 0;
  int num;
  while(file >> num){
    ss += num;
    }
  cout << ss;
  }
  
  
  /*int numbers[20] = {0};
  int count = 0;
  int i = 0;
  int ss = 0;
  int j = 0;
  string cur = "";
  

  while(getline(file, line)){
    while(i <= line.length()){
      if (isdigit(line[i])) {
        cur += line[i];
        cout << cur << endl;
      }
      else{
        j = stoi(cur);
        cout << j << endl;
        ss += j;
        int j = 0;
        cur.clear();
      }
      i += 1;
    }
  }
  */
  /*while(getline(file, line)) {
    string cur = "";
    for (int i = 0; i < line.length(); i++) {
      for (int j = i+1; j < line.length(); j++) {
        if (isdigit(line[j])) {
          cur += line[j];
        }
      }
    cout << cur << endl;
    }
  }
  */

}

