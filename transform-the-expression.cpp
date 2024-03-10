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
 
ll f(char c)
{
     if (c == '+' || c == '-')
          return 1;
     else if (c == '*' || c == '/')
          return 2;
     else if (c == '^')
          return 3;
     else
          return 0;
}
 
bool check(char c)
{
     if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
          return true;
     return false;
}
 
int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
 
     //freopen("ROBOT.INP", "r", stdin);
     //freopen("ROBOT.OUT", "w", stdout);
 
     ll n;
     cin >> n;
     while (n--)
     {
          string s;
          cin >> s;
          stack<char> st;
          ll l = s.length();
          for (ll i = 0; i < l; i++)
          {
               if (check(s[i]) == false)
               {
                    if (s[i] == '(')
                         st.push(s[i]);
                    else if (s[i] == ')')
                    {
                         while (st.empty() == false && st.top() != '(')
                         {
                              cout << st.top();
                              st.pop();
                         }
                         st.pop();
                    }
                    else
                         cout << s[i];
               }
               else
               {
                    if (st.empty() == false && check(st.top()) == true && f(st.top()) >= f(s[i]))
                    {
                         while (st.empty() == false && f(st.top()) >= f(s[i]))
                         {
                              cout << st.top();
                              st.pop();
                         }
                         st.push(s[i]);
                    }
                    else
                         st.push(s[i]);
               }
          }
          while (st.empty() == false)
          {
               cout << st.top();
               st.pop();
          }
          cout << '\n';
     }
     return 0;
}
/* Dinh Van Tung */