/* Dinh Van Tung */
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
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

     ll n, k, cnt = 0;;
     n = 1, k = 1;
     while (n != 0 && k != 0)
     {
          cin >> n >> k;
          if (n == 0 && k == 0)
               break;
          cnt++;
          cout << "Case " << cnt << ":\n";

          queue<ll> QE;
          for (ll i = 1; i <= min(n, k); i++)
               QE.push(i);
          while (k--)
          {
               char c;
               cin >> c;
               if (c == 'N')
               {
                    cout << QE.front() << '\n';
                    QE.push(QE.front());
                    QE.pop();
               }
               else
               {
                    ll x;
                    cin >> x;
                    queue<ll> QEtemp;
                    while (QE.empty() == false && QE.front() != x)
                    {
                         QEtemp.push(QE.front());
                         QE.pop();
                    }
                    if (QE.empty() == false)
                    {
                         QE.pop();
                         while (QE.empty() == false)
                         {
                              QEtemp.push(QE.front());
                              QE.pop();
                         }
                         QE.push(x);
                         while (QEtemp.empty() == false)
                         {
                              QE.push(QEtemp.front());
                              QEtemp.pop();
                         }
                    }
                    else
                    {
                         QE.push(x);
                         while (QEtemp.empty() == false)
                         {
                              QE.push(QEtemp.front());
                              QEtemp.pop();
                         }
                    }
               }
          }
     }
     return 0;
}
/* Dinh Van Tung */