#include <iostream>
using namespace std;

int main() {
  int a = 2/5;
  // int/int = int
  // float/int = float
  // double/int = double
  cout << a << endl;

  cout << 2.0/5 << endl;

  // Relational Operators - =, <, >, <=, >=, !=

  int x = 5;
  int y = 3;
  bool first = (x==y);
  cout << first << endl;

  // logical operators - &&, ||, !
  int age = 0;
  cout << !age << endl;

  // bitwise operators - &, |, ^, ~, <<, >>
}
