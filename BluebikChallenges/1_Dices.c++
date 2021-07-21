#include <bits/stdc++.h>
using namespace std;
// Combinational Sum

int main()
{
  int Dice[7] = {1, 2, 3, 4, 5, 6};
  int count = 0;
  // vector<set<int>> vt;
  for (int d1 = 1; d1 <= 6; d1++)
  {
    for (int d2 = d1; d2 <= 6; d2++)
    {
      for (int d3 = d2; d3 <= 6; d3++)
      {
        for (int d4 = d3; d4 <= 6; d4++)
        {
          if (d1 + d2 + d3 + d4 == 9)
          {
            // int arr[] = {d1, d2, d3, d4};
            // set<int> setTep(arr, arr + 4);

            count++;
            printf(" d1 : %d ,d2 : %d , d3 : %d ,d4 : %d \n", d1, d2, d3, d4);
          }
        }
      }
    }
  }
  printf("Hello %d \n", count);
  return 0;
}