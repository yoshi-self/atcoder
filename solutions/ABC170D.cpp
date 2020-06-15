#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <climits>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <complex>

#define REP(i, n) for(int i = 0; i < (int)(n); ++i)
#define FOR(i, m, n) for(int i = (m); i < (int)(n); ++i)
#define ALL(x) (x).begin(), (x).end()
#define INF 2000000000

#ifdef LOCAL
  #define dprintf(...) fprintf(stdout, __VA_ARGS__)
#else
  #define dprintf(...) 0
#endif

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef unsigned int uint;

//const double PI = 3.1415926535897932384626433832795;

int main() {
  int n;
  cin >> n;
  set<LL> st;
  map<LL, LL> mp;
  LL tmp;
  REP(i, n) {
    cin >> tmp;
    st.insert(tmp);
    mp[tmp] += 1;
  }

  if(mp.size() == 1) {
    if(mp.begin()->second == 1) {
      cout << 1 << endl;
      return 0;
    }
    else {
      cout << 0 << endl;
      return 0;
    }
  }

  LL count = 0;
  for(auto itr = st.begin(); itr != st.end(); itr++) {
    if(mp[*itr] == 1) {
      count += 1;
    }
    for(LL num = *itr; num <= *(st.rbegin()); num += *itr) {
        mp[num] = 0;
    }
  }
  cout << count << endl;
  return 0;
}
