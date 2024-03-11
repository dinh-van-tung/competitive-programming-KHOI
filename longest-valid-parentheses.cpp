/* Dinh Van Tung */
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <stack>
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
          stack<ll> st;
          string s;
          cin >> s;
          ll n = s.length();
          vector<ll> v(n, 0);
          for (ll i = 0; i < n; i++)
          {
               if (s[i] == '(')
                    st.push(i);
               else
               {
                    if (st.empty() == false && s[st.top()] == '(')
                    {
                         v[st.top()] = 1;
                         v[i] = 1;
                         st.pop();
                    }
               }
          }
          ll m = 0, cnt = 0;
          for (ll i = 0; i < n; i++)
          {
               if (v[i] == 1)
                    cnt++;
               else
               {
                    m = max(m, cnt);
                    cnt = 0;
               }
          }
          m = max(m, cnt);
          cout << m << '\n';
     }
     return 0;
}
/* Dinh Van Tung */
