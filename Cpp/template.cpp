// doot diddly donger cuckerino Hahahahahah

#include <iostream>
#include <complex>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <numeric>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <cmath>
#include <bitset>
#include <cassert>
#include <queue>
#include <stack>
#include <deque>
#include <random>
using namespace std;

// @formatter:off

using LL = long long;
using LD = long double;
using ULL = unsigned long long;
using PII = pair<int, int>;
using PSI = pair<string, int>;
using PLL = pair<LL, LL>;
using VI = vector<int>;
using VVI = vector<VI>;
using VS = vector<string>;
using VB = vector<bool>;
using VPII = vector<PII>;
using VPLL = vector<PLL>;
using VLL = vector<LL>;
using VVLL = vector<VLL>;
using pqueue = priority_queue<int>;
using pdqueue = priority_queue<int, VI, greater<> >;

#define sim             template<class T
#define ris 			return * this
#define dor 			> debug & operator <<
#define eni(x) 			sim > typename enable_if<sizeof dud<T>(0) x 1, debug&>::type operator<<(T i)
sim > struct rge { T b, e; };
sim > rge<T> range(T i, T j) { return rge<T>{i, j}; }
sim > auto dud(T* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
  ~debug() { cerr << endl; }
	eni(!=) { cerr << boolalpha << i; ris;}
	eni(==) { ris << range(begin(i), end(i)); }
	sim, class U dor(pair<U,T> d) { ris << "(" << d.first << ", " << d.second << ")"; }
	sim dor(rge<T> d) {
		*this << "[";
		for (auto it = d.b; it != d.e; ++it) *this << ", " + 2 * (it == d.b) << *it;
		ris << "]";
	}
#else
  sim dor(const T&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#define MP              make_pair
#define MT              make_tuple
#define PB              push_back
#define EB              emplace_back
#define F               first
#define S               second
#define ALL(a)          std::begin(a), std::end(a)
#define Sort(X)         sort(ALL(X))
#define UNIQUE(X)       Sort(X); (X).erase(unique(ALL(X)),(X).end())
#define SZ(x)           (int)(x).size()
#define IN_REP          int _t; cin >> _t ; while(_t--)
#define IOS             ios::sync_with_stdio(false);cin.tie(NULL)
#define FOR(i, a, b)    for(int i=(a);i<(b);i++)
#define REP(i, n)       FOR(i,0,n)
#define FORR(i, n)      for(int i=(n);i>=0;i--)
#define EPS             (LD) 1e-9
#define MOD             (LL)(1e9+7)
const LD PI = acos(-1);
sim>T gcd(T x, T y) {return (y==0)?x:gcd(y, x % y);}
sim>void mini(T &a, T b) { a = min(a, b); }
sim>void maxi(T &a, T b) { a = max(a, b); }
sim>inline void add(T &x, T y) {x += y;if (x >= MOD) x -= MOD;}
sim>inline void sub(T &x, T y) {x -= y;if (x < 0) x += MOD;}
sim>inline T mul(T a, T b) {LL x = (long long) a * b;x %= MOD;return x;}
sim>inline T power(T base, T exp) {T result = 1; while (exp) {if (exp & 1)result *= base;exp >>= 1;base *= base;}return result;}
sim>inline T power(T a, T b, T mod) {T res = 1;while (b > 0) {if (b & 1) { res = mul(res, a); }a = mul(a, a);b >>= 1;}return res%mod;}
sim>inline T modInverse(T n, T p) { return power(n, p - 2, p)%p; }
sim, class U>string to_string(pair<T, U> p) {return "" + to_string(p.F) + " " + to_string(p.S) + "";}
// @formatter:on


int main() {
  IOS;

  return 0;
}