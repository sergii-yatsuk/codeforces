#include <iostream>
#include <queue>
#include <memory>
#include <sstream>
#include <map>
using namespace std;

int main()
{
   int k, r;
   cin >> k;
   cin >> r;

   int ans = 0;

   while (ans != 10) {
      ++ans;

      if ((k*ans) % 10 == 0 || (k*ans) % 10 == r) break;
   }
   cout << ans;

   return 0;
}