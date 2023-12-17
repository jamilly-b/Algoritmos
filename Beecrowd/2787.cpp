#include <iostream>
using namespace std;

int main() {
  int L, C;
  cin >> L >> C;

  if ((L + C) % 2 == 0){
    cout << "1" << endl;
  }
  else
    cout << "0" << endl;
}
