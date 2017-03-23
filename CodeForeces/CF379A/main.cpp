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
   //freopen("in1.txt", "r", stdin);
   //freopen("out.txt", "w", stdout);
   int n;
   int a = 0;
   int d = 0;
   cin >> n;

   string s;

   cin >> s;

   for (auto& c : s) {
      if (c == 'D') ++d;
      else ++a;
   }


   if (d > a) cout << "Danik";
   else if (a > d) cout << "Anton";
   else cout << "Friendship";

   return 0;
}