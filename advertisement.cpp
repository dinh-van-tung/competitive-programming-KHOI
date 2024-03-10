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
     
     vector<ll> v1, v2;
     stack<ll> st;
     for (ll i = 0; i < n; i++)
     {
          if (st.empty() == true)
          {
               st.push(i);
               v1.push_back(0);
          }
          else
          {
               while (st.empty() == false && A[st.top()] >= A[i])
                    st.pop();
               if (st.empty() == true)
                    v1.push_back(0);
               else
                    v1.push_back(st.top() + 1);
               st.push(i);
          }
     }
     
     while (st.empty() == false)
          st.pop();
     
     for (ll i = n - 1; i >= 0; i--)
     {
          if (st.empty() == true)
          {
               st.push(i);
               v2.push_back(0);
          }
          else
          {
               while (st.empty() == false && A[st.top()] >= A[i])
                    st.pop();
               if (st.empty() == true)
                    v2.push_back(0);
               else
                    v2.push_back(st.top() + 1);
               st.push(i);
          }
     }
     reverse(v2.begin(), v2.end());

     // for (ll i = 0; i < n; i++)
     //      cout << v1[i] << ' ';
     // cout << '\n';
     // for (ll i = 0; i < n; i++)
     //      cout << v2[i] << ' ';
     
     ll m = 0;
     for (ll i = 0; i < n; i++)
     {
          ll temp;
          if (v1[i] == 0 && v2[i] == 0)
               temp = A[i] * n;
          else if (v1[i] == 0)
               temp = (v2[i] - 1) * A[i];
          else if (v2[i] == 0)
               temp = (n - v1[i]) * A[i];
          else
               temp = A[i] * abs(abs(v2[i] - v1[i]) - 1);
          m = max(m, temp);
     }
     cout << m;
     return 0;
}
/* Dinh Van Tung */