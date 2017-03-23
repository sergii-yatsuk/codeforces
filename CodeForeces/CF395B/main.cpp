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
   vector<int> arr(n);

   for (int i = 0; i < n; ++i)
      cin >> arr[i];


   int l = 0;
   int r = n - 1;

   while (l < r) {
      swap(arr[l], arr[r]);
      l += 2;
      r -= 2;
   }

   for (int i = 0; i < n; ++i)
      cout << arr[i] << " ";


   return 0;
}