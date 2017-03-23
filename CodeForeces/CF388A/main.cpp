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
   cin >> n;
   if (n % 2 == 0) {
      cout << n / 2 << endl;
      for (int i = 0; i < n / 2; ++i) {
         cout << "2 ";
      }
   }
   else
   {
      n = n - 3;
      cout << n / 2 + 1 << endl;
      for (int i = 0; i < n / 2; ++i) {
         cout << "2 ";
      }
      cout << "3";

   }
   return 0;
}