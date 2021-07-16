#include "stdio.h"
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int findDuplicate(vector<int> &nums)
  {
    int slow = 0;
    int fast = 0;
    do
    {
      slow = nums[slow];
      fast = nums[nums[fast]];
    } while (slow != fast);

    int cstart = 0; // starting of the cycle
    while (cstart != fast)
    {
      cstart = nums[cstart];
      fast = nums[fast];
    }
    return cstart;
  }
};

int main()
{
  printf("HEELLO\n");
  return 0;
}