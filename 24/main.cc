#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > permute(const vector<int>& digits, const vector<int>& curr) {
  vector<vector<int> > res;
  if (digits.empty()) {
    res.push_back(curr);
    return res;
  }
  for (int i = 0; i < digits.size(); ++i) {
    vector<int> tmpCurr = curr; // copy
    vector<int> tmpDigits = digits;
    tmpDigits.erase(remove(tmpDigits.begin(), tmpDigits.end(), digits[i]), tmpDigits.end());
    tmpCurr.push_back(digits[i]);
    vector<vector<int> > v = permute(tmpDigits, tmpCurr);
    res.insert(res.end(), v.begin(), v.end());
  }
  return res;
}

int main() {
  vector<int> A;
  for (int i = 0; i < 10; ++i) A.push_back(i);
  vector<vector<int> > v = permute(A, vector<int>());
  sort(v.begin(), v.end());

  const vector<int>& p = v[1000000-1];
  for (int i = 0; i < p.size(); ++i) cout << p[i] << " ";
  cout << endl;
}
