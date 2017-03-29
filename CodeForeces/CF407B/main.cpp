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

int main()
{
   freopen("in.txt", "r", stdin);
   //freopen("out.txt", "w", stdout);

   int b1, q, l, m;
   int b1s = 1;
   int qs = 1;

   cin >> b1;
   cin >> q;
   cin >> l;
   cin >> m;

   if (b1 < 0) b1s = -1;
   b1 = abs(b1);

   if (q < 0)  qs = -1;
   q = abs(q);
   unordered_set<int> am;
   unordered_map<int, int> ams;

   long ai;
   for (int i = 0; i < m; ++i) {
      cin >> ai;

      am.insert(ai);
   }

   if (qs==1 && q == 1 || q == 0 || b1 == 0) {
      if (am.count(b1*b1s) == 1) {
         cout << 0 << endl;
         return 0;
      }
      else {
         cout << "inf" << endl;
         return 0;
      }
   }

   if (q == 1 && qs == -1) {
      if (am.count(b1*b1s) == 1 && am.count(-b1*b1s) == 1) {
         cout << 0 << endl;
         return 0;
      }
      else {
         cout << "inf" << endl;
         return 0;
      }
   }

   int result=0;

   double n = log(double(l) / b1)/log(q);
   result = int(n)+1;
   for (const auto& a : am) {
      if (a < l) {
         float p = float(abs(a)) / b1;
         if (pow(q, int(log(p)/log(q))) == p) {
            if (b1s ==1 && qs ==1 && a>0) {
               --result;
            }
            else if (b1s == 1 && qs ==-1) {
               int p1 = int(log(p) / log(q));
               if (p1 % 2 == 1 && a<0 || p1 % 2 == 0 && a>0) {
                  --result;
               }
            }
            else if (b1s == -1 && qs == -1) {
               int p1 = int(log(p) / log(q));
               if (p1 % 2 == 1 && a>0 || p1 % 2 == 0 && a<0) {
                  --result;
               }
            }
         }
      }
   }

   cout << result << endl;
   return 0;
}