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


     ll n;
     while (cin >> n)
     {
          if (n == 0)
               break;
          ll A[n];
          for (ll i = 0; i < n; i++)
               cin >> A[i];
          
          stack<ll> st;
          ll temp = 0;
          for (ll i = 0; i < n; i++)
          {
               while (st.empty() == false && st.top() == temp + 1)
               {
                    temp = st.top();
                    st.pop();
               }
               if (A[i] != temp + 1)
                    st.push(A[i]);
               else
                    temp = A[i];
          }
          while (st.empty() == false && st.top() == temp + 1)
          {
               temp = st.top();
               st.pop();
          }

          if (st.empty() == true)
               cout << "yes\n";
          else
               cout << "no\n";
     }
     return 0;
}
/* Dinh Van Tung */
