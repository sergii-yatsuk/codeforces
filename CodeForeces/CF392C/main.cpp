#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <fstream>
#include <list>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <iomanip>
#include <array>
#include <math.h>
#include <cassert>
#include <limits>
#include <memory.h>
#include <unordered_map>
#include <unordered_set>

//#pragma comment(linker,"/STACK:102400000,102400000") // 100 mb

#pragma warning(disable : 4996)

using namespace std;

#define all(c) (c).begin(), (c).end()
#define CLEAR(x) memset(x,0,sizeof x)

typedef long long ll;
typedef unsigned long long ull;

bool isFilled(unordered_map<long, map<long, char>>& figursXY, long x, long y) {
   return figursXY.count(x) != 0 && figursXY[x].count(y) != 0;
}

int main()
{
   //freopen("in1.txt", "r", stdin);
   //freopen("out.txt", "w", stdout);
   int n;
   int m;
   ll k;
   int x;
   int y;

   cin >> n;
   cin >> m;
   cin >> k;
   cin >> x;
   cin >> y;

   if (n > 2) {

      ll p = 2 * m + (n - 2) * 2 * m;
      ll t = k / p;
      ll r = k % p;

      vector<vector<ll>> cl(n, vector<ll>(m, 2 * t));

      for (int i = 0; i < m; ++i) {
         cl[0][i] = t;
         cl[n - 1][i] = t;
      }

      int row = 0;
      int col = 0;
      bool down = true;
      while (r != 0) {
         ++cl[row][col];
         ++col;
         if (col >= m) {
            if (down)
               ++row;
            else --row;
            col = 0;

            if (row == n) {
               row = n - 2;
               down = false;
            }
         }
         --r;
      }

      ll  mmin = cl[x - 1][y - 1];
      ll mmax = cl[x - 1][y - 1];
      ll s = cl[x - 1][y - 1];

      for (row = 0; row < n; ++row) {
         for (col = 0; col < m; ++col) {
            mmin = min(mmin, cl[row][col]);
            mmax = max(mmax, cl[row][col]);
         }
      }

      cout << mmax << " " << mmin << " " << s;

   }
   else {
      ll p = n*m;
      ll t = k / p;
      ll r = k % p;
      vector<vector<ll>> cl(n, vector<ll>(m, t));

      int row = 0;
      int col = 0;
      while (r != 0) {
         ++cl[row][col];
         ++col;
         if (col >= m) {
            ++row;
            col = 0;

            if (row >= n) {
               row = 0;
            }
         }
         --r;
      }

      ll  mmin = cl[x - 1][y - 1];
      ll mmax = cl[x - 1][y - 1];
      ll s = cl[x - 1][y - 1];

      for (row = 0; row < n; ++row) {
         for (col = 0; col < m; ++col) {
            mmin = min(mmin, cl[row][col]);
            mmax = max(mmax, cl[row][col]);
         }
      }

      cout << mmax << " " << mmin << " " << s;
   }



   return 0;
}