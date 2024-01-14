#include <iostream>
using namespace std;

int main() {
  char ch;
  cin >> ch;
  if(ch >= 'A' && ch <= 'Z') {
    cout << "This is Uppercase" << endl;
  }
  else if(ch >= 'a' && ch <= 'z') {
    cout << "This is Lowercase" << endl;
  }
  else if(ch >= '0' && ch <= '9') {
    cout << "This is Numeric" << endl;
  }
  else {
    cout << "This is Special Character" << endl;
  }
}
