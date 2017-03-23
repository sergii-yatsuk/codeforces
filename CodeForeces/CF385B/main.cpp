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

   int m;
   int n;

   cin >> n;
   cin >> m;

   vector<string> puzzle;

   set<int> left;
   set<int> right;

   string s;

   for (int i = 0; i < n; ++i) {
      cin >> s;
      if (s.find('X') != string::npos) {
         puzzle.push_back(s);
         left.insert(s.find('X'));
         right.insert(s.rfind('X'));
      }

   }

   if (puzzle.empty() || left.size()>1 || right.size() > 1) {
      cout << "NO";
      return 0;
   }



   int l1 = puzzle[0].find('X');
   int r1 = puzzle[0].rfind('X');

   for (int j = 0; j < puzzle.size(); ++j) {
      string& first = puzzle[j];
      for (int i = l1; i < r1; ++i) {
         if (first[i] == '.') {
            cout << "NO";
            return 0;
         }
      }
   }


   cout << "YES";


   return 0;
}