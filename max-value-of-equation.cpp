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

int findMaxValueOfEquation(vector<vector<int>>& points, int k) 
{
     int n = points.size();
     int x[n], y[n];
     for (int i = 0; i < n; i++)
     {
          x[i] = points[i][0];
          y[i] = points[i][1];
     }

     deque<int> dq;
     int ans = -1e9;
     for (int i = 0; i < n; i++)
     {
          while (dq.empty() == false && x[i] - x[dq.front()] > k)
               dq.pop_front();
          if (dq.empty() == false)
               ans = max(ans, y[i] + x[i] + (y[dq.front()] - x[dq.front()]));
          while(dq.empty() == false && y[dq.back()] - x[dq.back()] < y[i] - x[i])
               dq.pop_back();
          dq.push_back(i);
     }
     return ans;
}

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);

     //freopen("ROBOT.INP", "r", stdin);
     //freopen("ROBOT.OUT", "w", stdout);
     
     return 0;
}
/* Dinh Van Tung */