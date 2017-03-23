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
   int n;
   unordered_map<int, int> left;
   unordered_map<int, int> right;
   long totalL = 0;
   long totalR = 0;
   cin >> n;

   for (int i = 0; i < n; ++i) {
      int l = 0;
      int r = 0;
      cin >> l;
      cin >> r;
      totalL += l;
      totalR += r;
      left[i] = l;
      right[i] = r;
   }

   long maxD;
   maxD = abs(totalL - totalR);
   int changed = -1;

   int localTotalL;
   int localTotalR;
   int localMax;
   for (int i = 0; i < n; ++i) {
      localTotalL = totalL;
      localTotalR = totalR;
      localTotalL = localTotalL - left[i] + right[i];
      localTotalR = localTotalR - right[i] + left[i];
      localMax = abs(localTotalL - localTotalR);
      if (localMax > maxD) {
         maxD = localMax;
         changed = i + 1;
      }
   }

   if (changed == -1) {
      cout << 0;
      return 0;
   }
   else {
      cout << changed;
   }
   return 0;
}