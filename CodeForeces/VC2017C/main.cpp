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
   cin >> n;
   vector<int> p(n);
   vector<bool> visited(n, false);

   for (int i = 0; i < n; ++i) {
      int k;
      cin >> k;
      p[i] = k - 1;
   }

   int res = 0;

   for (int i = 0; i < n; ++i) {
      if (!visited[i]) {
         if (!visited[p[i]])
            ++res;
         int k = i;
         while (!visited[k]) {
            visited[k] = true;
            k = p[k];
         }


      }
   }


   cout << res;


   return 0;
}