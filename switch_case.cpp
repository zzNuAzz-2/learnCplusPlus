#include <iostream>

using namespace std;

int main()
{
  int a, b;
  char c;
  cin >> a >> c >> b;

  int result;

  // if(c == '+') {
  //   result = a + b;
  // } else if (c == '-') {
  //   result = a - b;
  // } else if (c == '*') {
  //   result = a * b;
  // } else if (c == '/') {
  //   result = a / b;
  // }

  /* cú pháp
  switch (x) {
	case value1:
		// If x is equal to value1, the code in this block will be executed
		break;
	case value2:
		// If x is equal to value2, the code in this block will be executed
		break;
	case value3:
		// If x is equal to value3, the code in this block will be executed
		break;
	...
	case valuen:
		// If x is equal to valuen, the code in this block will be executed
		break;
	default:
		// If x is not equal to one of the values above the code in this block will be executed
		
		break;
	}
*/

  switch (c)
  {
  case '+':
    result = a + b;
    break;
  case '-':
    result = a - b;
    break;
  case '*':
    result = a * b;
    break;
  case '/':
    result = a / b;
    break;
  }

  cout << result;
  return 0;
}
