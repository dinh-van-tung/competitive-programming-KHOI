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

bool isValid(string s) 
{
     stack<char> st;
     int n = s.length();
     for (int i = 0; i < n; i++)
     {
          if (s[i] == '(' || s[i] == '[' || s[i] == '{')
               st.push(s[i]);
          else
          {
               if (st.empty() == false && s[i] == ')' && st.top() == '(')
                    st.pop();
               else if (st.empty() == false && s[i] == ']' && st.top() == '[')
                    st.pop();
               else if (st.empty() == false && s[i] == '}' && st.top() == '{')
                    st.pop();
               else
                    st.push(s[i]);
          }
     }
     if (st.empty() == true)
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

     string s;
     cin >> s;
     if (isValid(s) == true)
          cout << "YES\n";
     else
          cout << "NO\n";
     return 0;
}
/* Dinh Van Tung */