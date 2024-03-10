/* Dinh Van Tung */
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <stack>
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
     ll A[n];
     for (ll i = 0; i < n; i++)
          cin >> A[i];
     
     stack<ll> st;
     for (ll i = 0; i < n; i++)
     {
          if (st.empty() == true)
          {
               cout << 0 << ' ';
               st.push(i);
          }
          else
          {
               if (A[st.top()] >= A[i])
               {
                    while (st.empty() == false && A[st.top()] >= A[i])
                         st.pop();
                    if (st.empty() == true)
                         cout << 0 << ' ';
                    else
                         cout << st.top() + 1 << ' ';
                    st.push(i);
               }
               else
               {
                    cout << st.top() + 1 << ' ';
                    st.push(i);
               }
          }
     }
     return 0;
}
/* Dinh Van Tung */