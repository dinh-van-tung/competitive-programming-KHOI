/* Dinh Van Tung */
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

     //freopen("ROBOT.INP", "r", stdin);
     //freopen("ROBOT.OUT", "w", stdout);
     
     ll t;
     cin >> t;
     while (t--)
     {
          ll n;
          cin >> n;
          ll x[n], y[n], z[n];
          for (ll i = 0; i < n; i++)
               cin >> x[i];
          
          for (ll i = 0; i < n; i++)
               cin >> y[i];
          
          for (ll i = 0; i < n; i++)
               z[i] = y[i] - x[i];
          
          sort(z, z + n);
          ll left = 0, right = n - 1, cnt = 0;
          while (left < right)
          {
               if (z[left] + z[right] >= 0)
               {
                    left++;
                    right--;
                    cnt++;
               }
               else
                    left++;
          }
          cout << cnt << '\n';
     }
     return 0;
}
/* Dinh Van Tung */