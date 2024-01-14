#include <iostream>
using namespace std;

int main() {
  int n;
  // cin is special variable that is used to take input from user
  // cin - tab, enter, space, etc.
  cin >> n;
  // cout << "Value of n : " << n << endl;
  if (n > 0) {
    cout << "N is Positive" << endl;
  } 
  else {
    cout << "N is Negative" << endl;
  }
}
