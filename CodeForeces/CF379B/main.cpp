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

   int k2;
   int k3;
   int k5;
   int k6;

   cin >> k2;
   cin >> k3;
   cin >> k5;
   cin >> k6;


   // 256
   // 32


   long long sum = 0;

   int m256 = min(min(k2, k5), k6);
   sum = m256 * 256;

   k2 -= m256;
   k5 -= m256;
   k6 -= m256;

   int m32 = min(k2, k3);

   sum += m32 * 32;
   cout << sum;

   return 0;
}