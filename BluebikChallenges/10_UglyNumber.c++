
#include <bits/stdc++.h>
using namespace std;
//  It's very simple Q but Im gonna use DP :p
int Sol()
{
  int ugly[1000];
  // next[0] = next of 2 , next[1] == 3 , next [2] =5 , next[3] = 7
  int next[4] = {2, 3, 5, 7}, next_ugly = 1, ugly_th = 0;
  int count_times[5] = {0};
  int size_next = sizeof(next) / sizeof(next[0]);
  ugly[ugly_th++] = 1;
  for (; next_ugly <= 1000; ugly_th++)
  {
    next_ugly = *min_element(next, next + size_next);
    // cout << next_ugly << endl;
    ugly[ugly_th] = next_ugly;
    if (ugly[ugly_th] == next[0])
      next[0] = ugly[++count_times[0]] * 2;
    if (ugly[ugly_th] == next[1])
      next[1] = ugly[++count_times[1]] * 3;
    if (ugly[ugly_th] == next[2])
      next[2] = ugly[++count_times[2]] * 5;
    if (ugly[ugly_th] == next[3])
      next[3] = ugly[++count_times[3]] * 7;
  }
  // return ugly[--ugly_th];
  // minus 1 bc , - 1 from ugly_th++ and -1 from next_ugly <= 1000 and +1 from number 1
  return ugly_th - 1;
}
int main()
{
  cout << Sol() << "\n";
  return 0;
}