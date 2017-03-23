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

bool isPrime(int k) {
   for (int i = 2; i*i < k; ++i)
      if (k%i == 0) return false;
   return true;
}

int main()
{
   //freopen("in1.txt", "r", stdin);
   //freopen("out.txt", "w", stdout);
   int n;
   cin >> n;

   for (int m = 1; m < 1000; ++m) {
      if (!isPrime(m*n + 1)) {
         cout << m;
         return 0;
      }
   }


   return 0;
}