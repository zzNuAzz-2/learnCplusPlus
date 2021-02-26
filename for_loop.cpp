#include <iostream>

using namespace std;
/*  
  Có 3 loại vòng lắp chính
  - for
    for( câu lệnh 1 ; câu lệnh 2 ; câu lệnh 3 ) {
      câu lệnh
    }

    câu lệnh 1 : được thực hiện trước tất cả loop
    câu lệnh 2 : là điều kiện dừng, thực hiện trước mỗi vòng lặp
    câu lệnh 3 : là được thực hiện sau mỗi vòng lặp
  

  - while ... 

  while( điều kiện vẫn đúng ) {
    làm gì đó
  }

  - do ... while
	do {
		làm cái gì đó
	} while(khi ...)

*/

int main()
{
	// for (int i = 1; i <= 5; i = i + 1)
	// {
	// 	cout << "Counting " << i << endl;
	// }

	/*
  int i = 1;

  kiểm tra đk i <= 10 => đùng thì chạy câu lênh
  sai thì bỏ qua, thoát khỏi vòng lặp

  1 <= 5 => đúng => chạy câu lệnh trong vòng lặp
  i = i + 1 -> i = 2;

  i = 2 <= 5 đúng => chạy câu lệnh trong vòng lặp
  i = i + 1 -> i = 3;


  . . .. . 
  i = 5 <= 5  đúng => chạy câu lệnh trong vòng lặp
  i = i + 1 -> i = 6;

  i = 6 <= 5 sai => thoát khỏi vòng lặp
  */

// while

	// int i = 0;
	// while(i < 10) {
	// 	cout << i << " nho hon 10\n";
	// 	i++;
	// }

// do while

	// do {
	// 	cout << "2 < 1\n";
	// } while( 2 < 1);


	// for(int i = 1; i <= 100; i++) {
	// 	if(i == 20) {
	// 		break;
	// 	}
	// 	cout << "Counting " << i << endl;
	// }


	// for(int i = 1; i <= 10; i++) {
	// 	if(i == 5) {
	// 		cout << "Skiped\n";
	// 		continue;
	// 	}
	// 	cout << "Counting " << i << endl;
	// }


	return 0;
}
