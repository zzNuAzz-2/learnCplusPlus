#include <iostream>
using namespace std;
#include <cstdio>
#include <cstring>

int main()
{
  string str;
  cin >> str;

  bool condition[5] = {false, false, false, false, false};
  
  // for(int i =0 ; i < str.size(); i++) {
  //   if(str[i] >= 'a' && str[i] <= 'z') {
  //     // la chu thuông
  //     condition[0] = true;
  //     condition[1] = true;
  //     condition[3] = true;
  //   } else if(str[i] >= 'A' && str[i <= 'Z']) {
  //     // la chu hoa
  //     condition[0] = true;
  //     condition[1] = true;
  //     condition[4] = true;
  //   } else if(str[i] >= '0' && str[i] <= '9') {
  //     //la chu so
  //     condition[0] = true;
  //     condition[2] = true;
  //   }
  // }

  for(int i =0 ; i < str.size(); i++) {
    if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '9' && str[i] <= '9')) {
      condition[0] = true;
    }
    if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
      condition[1] = true;
    }
    if(str[i] >= '0' && str[i] <= '9') {
      condition[2] = true;
    }
    if(str[i] >= 'a' && str[i] <= 'z') {
      condition[3] = true;
    }
    if(str[i] >= 'A' && str[i] <= 'Z') {
      condition[4] = true;
    }
  }
  for(int i = 0 ; i < 5; i++) {
    if(condition[i]) {
      cout << "True" << endl;
    } else {
      cout << "False" << endl;
    }
  }
  return 0;
}