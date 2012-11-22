#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int digits[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  for (int i = 0; i < 1000000-1; ++i) {
    next_permutation(digits, digits + 10);
  }
  for (int i = 0; i < 10; ++i) {
    cout << digits[i];
  }
  cout << endl;
}
