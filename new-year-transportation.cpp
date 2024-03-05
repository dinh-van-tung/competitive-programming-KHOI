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

     ll n, t;
     cin >> n >> t;
     ll A[n];
     for (ll i = 0; i < n - 1; i++)
          cin >> A[i];
     
     ll pivot = 1, temp = 0;
     while (pivot < t)
     {
          pivot += A[temp];
          temp = pivot - 1;
          //cout << pivot << ' ' << temp << '\n';
     }
     //cout << pivot << ' ' << temp << '\n';
     if (pivot == t)
          cout << "YES";
     else
          cout << "NO";
     
     return 0;
}
