#include <iostream>

using namespace std;


int main() {
  // nhập vào 5 số nguyên, và in ra tổng của chúng
  // int a1,a2,a3,a4,a5;
  // cin >> a1 >> a2 >> a3 >> a4 >> a5;
  // int sum = a1 + a2 + a3 + a4 + a5;
  // cout << sum;

  // array: là mảng, danh sách, list gồm các phần tử thuộc cùng một kiểu dữ liệu
  // ví dụ array gốm các số nguyên 1,23,4,5,...


  // <Kiểu dữ liệu> <tên biến>[<Số lượng phần tử>]
  // trong đó số lượng phần tử phải là hằng số

  // a[i] -> i là chỉ mục (index) của phẩn tử trong mảng, và đánh số từ 0

  // a   {11,22,33,44,55} thì a[0] = 11, a[1] = 22

  int a[5];
  int sum = 0;
  for(int i = 0; i < 5; i++) {
    cin >> a[i];
  }

  for(int i = 0; i < 5; i++) {
    // tường đương sum = sum + a[i]
    sum += a[i];
  }
  cout << sum;



  return 0;
}