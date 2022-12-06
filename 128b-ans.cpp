#include <bits/stdc++.h>
using namespace std;

int main() {
  int N ;
  cin >> N;
  vector<tuple<string, int, int>> vec(N);
  for (int i=0; i<N; i++) {
    string s;
    int p;
    cin >> s >> p;
    vec.at(i) = make_tuple(s, -p, i+1);
  }
  sort(vec.begin(), vec.end());
  for (int i=0; i<N; i++) {
    int num;
    tie(ignore, ignore, num) = vec.at(i);
    cout << num << endl;
  }
}