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

     ll n;
     cin >> n;
     if (n % 2 == 0 && n > 2)
          cout << "YES";
     else
          cout << "NO";
     return 0;
}
