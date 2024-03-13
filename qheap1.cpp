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

     ll n;
     cin >> n;
     priority_queue<ll, vector<ll>, greater<ll> > pq;
     priority_queue<ll, vector<ll>, greater<ll> > pqtemp;
     while (n--)
     {
          ll x, y;
          cin >> x;
          if (x == 1)
          {
               cin >> y;
               pq.push(y);
          }
          else if (x == 2)
          {
               cin >> y;
               pqtemp.push(y);
          }
          else
          {
               while (pqtemp.empty() == false && pqtemp.top() == pq.top())
               {
                    pq.pop();
                    pqtemp.pop();
               }
               cout << pq.top() << '\n';
          }
     }
     return 0;
}
/* Dinh Van Tung */