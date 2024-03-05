#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <iomanip> 
using namespace std;
#define en '\n';
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);

     //freopen(".INP", "r", stdin);
     //freopen(".OUT", "w", stdout);

     ll n, m, a;
     cin >> n >> m >> a;
     cout << ((n / a) + (n % a != 0)) * ((m / a) + (m % a != 0));

     return 0;
}
