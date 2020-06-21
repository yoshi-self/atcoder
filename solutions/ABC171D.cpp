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
#include <functional>
#include <utility>
#include <iterator>

#define REP(i, n) for(int i = 0; i < (int)(n); ++i)
#define FOR(i, m, n) for(int i = (m); i < (int)(n); ++i)
#define ALL(x) (x).begin(), (x).end()
#define INF 2000000000

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef unsigned int uint;

//const double PI = 3.1415926535897932384626433832795;

void show(map<LL, LL> mp) {
  for(auto itr = mp.begin(); itr != mp.end(); itr++) {
    if(itr->second != 0) {
      printf("%lld: %lld, ", itr->first, itr->second);
    }
  }
  printf("\n");
}

int main() {
  int n;
  scanf("%d", &n);
  map<LL, LL> mp;

  int t;
  REP(i, n) {
    scanf("%d", &t);
    mp[t] += 1;
  }
  LL total = 0;
  //show(mp);
  for(auto itr = mp.begin(); itr != mp.end(); itr++) {
    total += itr->first * itr->second;
  }
  int q;
  scanf("%d", &q);
  int b, c;
  REP(i, q) {
    scanf("%d %d", &b, &c);
    mp[c] += mp[b];
    total -= b * mp[b];
    total += c * mp[b];
    mp.erase(b);
    //show(mp);
    printf("%lld\n", total);
  }
}
