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

   string s;
   cin >> n;
   cin >> s;

   size_t pos = 0;

   while (s.find("ogo", pos) != string::npos) {
      size_t newPos = s.find("ogo", pos);
      cout << s.substr(pos, newPos - pos);
      cout << "***";

      size_t i = newPos + 3;
      while (i < n && s[i] == 'g' && s[i + 1] == 'o') i += 2;
      pos = i;
   }

   cout << s.substr(pos, n - pos);

   return 0;
}