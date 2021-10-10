#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
// #include <boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
using namespace __gnu_pbds;
using namespace std;
#define ff                first
#define ss                second
#define int               long long
#define pb                push_back
#define pf                push_front
#define ps(x,y)           fixed<<setprecision(y)<<x
#define w(x)              int x; cin>>x; while(x--)
#define FOR(i,a,b)        for(int i=(a);i<(b);i++)
#define ROF(i,a,b)        for(int i=(a);i>=(b);i--)
#define so(a,n)           sort(a,a+n)
#define rso(a,n)          sort(a,a+n),reverse(a,a+n)
#define all(v)            (v).begin(),(v).end()
#define ps(x,y)           fixed<<setprecision(y)<<x
const int                 maxn = 2e5 + 10;
const int                 modulo = 1000000007;
#define mod               1000000007;
const double              pi = 3.14159;
#define vv vector<vector<int>>
#define vi vector<int>

int fib(int n)
{
    if (n <= 2)return n;
    return fib(n - 1) + fib(n - 2);
}
void solve()
{
    int n; cin >> n;
    cout << fib(n);
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
