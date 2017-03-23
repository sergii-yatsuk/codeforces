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
   //freopen("in1.txt", "r", stdin);
   //freopen("out.txt", "w", stdout);

   int n;

   cin >> n;

   string shelock;
   string moriarty;

   cin >> shelock;
   cin >> moriarty;

   map<char, int> morMap;
   map<char, int> morMap2;

   for (auto m : moriarty) {
      morMap[m] = morMap[m] + 1;
      morMap2[m] = morMap2[m] + 1;
   }
   /*
   string sSorted = shelock;
   sort(sSorted.begin(), sSorted.end());

   string mSorted(moriarty);
   sort(mSorted.begin(), m.end());*/
   int minFlicks = 0;
   for (auto m : shelock) {
      bool go = false;
      for (char c = m; c <= '9'; ++c) {
         if (morMap[c] > 0) {
            morMap[c] = morMap[c] - 1;
            go = true;
            break;
         }
      }

      if (go) continue;

      for (char c = '0'; c <= '9'; ++c) {
         if (morMap[c] > 0) {
            ++minFlicks;
            morMap[c] = morMap[c] - 1;
            break;
         }
      }
   end: {}
   }

   int maxFlicks = 0;
   for (auto m : shelock) {
      bool go = false;
      for (char c = m + 1; c <= '9'; ++c) {
         if (morMap2[c] > 0) {
            morMap2[c] = morMap2[c] - 1;
            maxFlicks++;
            go = true;
            break;
         }
      }

      if (go) continue;
      for (char c = '0'; c <= '9'; ++c) {
         if (morMap2[c] > 0) {
            morMap2[c] = morMap2[c] - 1;
            break;
         }
      }
   }

   cout << minFlicks << endl;
   cout << maxFlicks << endl;
   return 0;
}
