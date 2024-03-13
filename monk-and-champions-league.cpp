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

     priority_queue<ll> pq;
     ll n, k;
     cin >> n >> k;
     for (ll i = 1; i <= n; i++)
     {
          ll x;
          cin >> x;
          pq.push(x);
     }
     ll ans = 0;
     while (k--)
     {
          ans += pq.top();
          ll temp = pq.top() - 1;
          pq.pop();
          pq.push(temp);
     }
     cout << ans;
     return 0;
}
/* Dinh Van Tung */