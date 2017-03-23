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

   int n, m;

   cin >> n;
   cin >> m;

   set<string> polland;

   for (int i = 0; i < n; ++i) {
      string s;
      cin >> s;
      polland.insert(s);
   }

   set<string> enemy;

   for (int i = 0; i < m; ++i) {
      string s;
      cin >> s;
      enemy.insert(s);
   }


   vector<string> intersection;

   set_intersection(polland.begin(), polland.end(),
      enemy.begin(), enemy.end(),
      back_inserter(intersection));

   bool isWin = false;
   if (intersection.empty()) {
      isWin = n - m > 0;
   }
   else {
      if (intersection.size() % 2 == 1) {
         isWin = n - m >= 0;
      }
      else {
         isWin = n - m > 0;
      }

   }

   if (isWin) {
      cout << "YES";
   }
   else {
      cout << "NO";
   }


   return 0;
}