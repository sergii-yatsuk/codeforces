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
#include <numeric>

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
   int m;
   cin >> m;
   int z;
   cin >> z;

   int hcf = n;
   int temp = m;
   int lcm = 0;

   hcf = n;
   temp = m;

   while (hcf != temp)
   {
      if (hcf > temp)
         hcf -= temp;
      else
         temp -= hcf;
   }

   lcm = (n * m) / hcf;

   cout << z / lcm;


   return 0;
}