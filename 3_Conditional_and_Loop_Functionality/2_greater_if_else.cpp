#include <iostream>
using namespace std;

int main() {
  int a, b;
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
  if (a > b) {
    cout << "A is greater than B" << endl;
  } 
  else {  
    cout << "B is greater than A" << endl;
  }

  // int c;
  // c = cin.get();
  // // cin.get() - it is used to take input from user in form of character
  // cout << "value of c is " << c << endl;
  return 0;
}
