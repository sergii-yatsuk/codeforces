#define _CRT_SECURE_NO_WARNINGS

//#include <algorithm>
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

//#pragma comment(linker,"/STACK:102400000,102400000") // 100 mb

#pragma warning(disable : 4996)

using namespace std;

#define all(c) (c).begin(), (c).end()
#define CLEAR(x) memset(x,0,sizeof x)

typedef long long ll;
typedef unsigned long long ull;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   //freopen("in1.txt", "r", stdin);
   //freopen("out.txt", "w", stdout);
   int n;
   int m;
   cin >> n;
   cin >> m;

   bool hasAct = false;

   long long count = 0;

   std::vector<std::vector<int>> s(
      n,
      std::vector<int>(m));

   for (size_t i = 0; i < n; ++i) {
      hasAct = false;
      for (size_t j = 0; j < m; ++j) {
         int k;
         cin >> k;
         s[i][j] = k;

         if (k == 1) hasAct = true;
         if (hasAct && k == 0)  ++count;

      }
   }


   for (int row = 0; row < n; ++row) {

      hasAct = false;
      for (int col = m - 1; col >= 0; --col) {
         if (s[row][col] == 1) hasAct = true;

         if (hasAct && s[row][col] == 0) ++count;

      }

   }

   for (int col = 0; col<m; ++col) {
      hasAct = false;
      for (int row = 0; row < n; ++row) {
         if (s[row][col] == 1) hasAct = true;

         if (hasAct && s[row][col] == 0) ++count;
      }

      hasAct = false;
      for (int row = n - 1; row >= 0; --row) {
         if (s[row][col] == 1) hasAct = true;

         if (hasAct && s[row][col] == 0) ++count;
      }

   }


   cout << count;
   return 0;
}