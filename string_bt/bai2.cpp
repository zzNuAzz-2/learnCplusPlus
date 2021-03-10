#include <iostream>
using namespace std;
#include <cstdio>
#include <cstring>

int main() {
  string str;
  getline(cin, str);

  string ans = "";
  int start = 0;
  for(int i = 0; i < str.length(); i++) {
    if(str[i] == ' ') {
      string cut_string = str.substr(start, i - start);
      ans.append(cut_string);
      start = i+1;
    }
  }
  ans = ans.append(str.substr(start));
  cout << ans;

  return 0;
}