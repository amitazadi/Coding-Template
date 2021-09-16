/****************** About Me ********************/
/*						*/
/*	Codechef: superazad			*/
/*	GFG: amitazadi				*/
/*	leetcode: amitazadi			*/
/*	Github: amitazadi			*/
/*	Hackerrank: amitazadi			*/
/*						*/
/****************** About Me ********************/

#include <bits/stdc++.h>
using namespace std;

/******************* Shortcuts  ********************/

typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;

#define fast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MOD 1000000007
#define Max 1e9
#define Min - 1e9
#define fr(i, z, n) for (int i = z; i < n; i++)
#define fr1(i, z, n) for (int i = z; i <= n; i++)
#define repr(i, n) for (int i = n - 1; i >= 0; i--)
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
#define vl vector<ll>
#define vll vector<vl>
#define vs vector<string>
#define pl pair<ll, ll>
#define vpl vector<pl>
#define f first
#define s second

/******************* Debugging Code *********************/

#ifndef ONLINE_JUDGE
#define debug(x)       \
	cerr << #x << " "; \
	_print(x);         \
	cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
	cerr << t;
}

void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }


// pair
template <class T, class V>
void _print(pair<T, V> p)
{
	cerr << "{";
	_print(p.f);
	cerr << ",";
	_print(p.s);
	cerr << "}";
}

// vector
template <class T>
void _print(vector<T> v)
{
	cerr << "[ ";
	for (T i : v)
	{
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}

// stack
template <class T>
void _print(stack<T> v)
{
	cerr << "[ ";
	while(!v.empty())
	{
		_print(v.top());
		cerr << " ";
		v.pop();
	}
	cerr << "]";
}

// queue
template <class T>
void _print(queue<T> v)
{
	cerr << "[ ";
	while(!v.empty())
	{
		_print(v.front());
		cerr << " ";
		v.pop();
	}
	cerr << "]";
}

// set
template <class T>
void _print(set<T> v)
{
	cerr << "[ ";
	for (T i : v)
	{
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}

// unordered-set
template <class T>
void _print(unordered_set<T> v)
{
	cerr << "[ ";
	for (T i : v)
	{
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}

// multiset
template <class T>
void _print(multiset<T> v)
{
	cerr << "[ ";
	for (T i : v)
	{
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}

//map
template <class T, class V>
void _print(map<T, V> v)
{
	cerr << "[ ";
	for (auto i : v)
	{
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}

// unordered-map
template <class T, class V>
void _print(multimap<T, V> v)
{
	cerr << "[ ";
	for (auto i : v)
	{
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}

// multimap
template <class T, class V>
void _print(unordered_map<T, V> v)
{
	cerr << "[ ";
	for (auto i : v)
	{
		_print(i);
		cerr << " ";
	}
	cerr << "]";
}


/***************** Some Useful Functions ******************/

ll lcm(ll a, ll b)
{
	return (a *b) / __gcd(a, b);
}

ll gcd(ll a, ll b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

bool isPrime(int n)
{
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0) return false;
	return true;
}

ll fact(ll n)
{
	if (n <= 1) return 1;
	return n* fact(n - 1);
}

ll nPr(ll n, ll r)
{
	return fact(n) / fact(n - r);
}

ll nCr(ll n, ll r)
{
	return fact(n) / (fact(r) *fact(n - r));
}

void leftrotate(string s, ll d)
{
	reverse(s.begin(), s.begin() + d);
	reverse(s.begin() + d, s.end());
	reverse(s.begin(), s.end());
}

void rightrotate(string s, ll d)
{
	leftrotate(s, s.length() - d);
}

bool cmp(pair<int,int>&a,pair<int,int>&b)
{
    if(a.second==b.second)
    return a.first>b.first;
    
    return a.second>b.second;
}


/********************* My Code *********************/







void solve()
{
	
	



	
}


int main()
{
	fast;
	#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	ll t;
	cin >> t;
	fr1(i,1,t)
	{
	    //cout<<"Case #"<<i<<": ";
	    solve();
	}
}
