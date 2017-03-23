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

//#pragma comment(linker,"/STACK:102400000,102400000") // 100 mb

#pragma warning(disable : 4996)

using namespace std;

#define all(c) (c).begin(), (c).end()
#define CLEAR(x) memset(x,0,sizeof x)

typedef long long ll;
typedef unsigned long long ull;

int main()
{
   //freopen("in1.txt", "r", stdin);
   //freopen("out.txt", "w", stdout);

   int x1, y1, x2, y2, x3, y3;
   set<pair<int, int>>result;

   cin >> x1;
   cin >> y1;
   cin >> x2;
   cin >> y2;
   cin >> x3;
   cin >> y3;

   int x4, y4;

   double x5, y5;
   // d1 1 -2 
   x5 = (x1 + x2) / 2.0;
   y5 = (y1 + y2) / 2.0;
   x4 = 2 * x5 - x3;
   y4 = 2 * y5 - y3;
   result.insert(make_pair(x4, y4));

   // d1 1 -3
   x5 = (x1 + x3) / 2.0;
   y5 = (y1 + y3) / 2.0;
   x4 = 2 * x5 - x2;
   y4 = 2 * y5 - y2;
   result.insert(make_pair(x4, y4));

   // d1 2-3 
   x5 = (x2 + x3) / 2.0;
   y5 = (y2 + y3) / 2.0;
   x4 = 2 * x5 - x1;
   y4 = 2 * y5 - y1;
   result.insert(make_pair(x4, y4));




   cout << result.size() << endl;
   for (auto&a : result) {
      cout << a.first << " " << a.second << endl;
   }







   return 0;
}