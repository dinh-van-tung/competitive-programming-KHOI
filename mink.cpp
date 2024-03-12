/* Dinh Van Tung */
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>
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

     ll q;
     cin >> q;
     while (q--)
     {
          ll n, k;
          cin >> n >> k;
          ll A[n];
          for (ll i = 0; i < n; i++)
               cin >> A[i];
          
          deque<ll> dq;
          for (ll i = 0; i < k; i++)
          {
               if (dq.empty() == true)
                    dq.push_back(i);
               else
               {
                    while (dq.empty() == false && A[dq.back()] > A[i])
                         dq.pop_back();
                    dq.push_back(i);
               }
          }
          cout << A[dq.front()] << ' ';

          for (ll i = 1; i + k - 1 < n; i++)
          {    
               if (dq.empty() == false && dq.front() == i - 1)
                    dq.pop_front();  
               if (dq.empty() == true)
                    dq.push_back(i + k - 1);
               else
               {
                    while (dq.empty() == false && A[dq.back()] > A[i + k - 1])
                         dq.pop_back();
                    dq.push_back(i + k - 1);
               }
               cout << A[dq.front()] << ' ';
          }
          cout << '\n';
     }

     return 0;
}
/* Dinh Van Tung */