#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  int A, B;
  cin >> A >> B;
  double S = double(B) / double(A);
  cout << fixed << setprecision(3) << S << endl;
}
