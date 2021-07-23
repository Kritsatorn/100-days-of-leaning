#include <bits/stdc++.h>
using namespace std;
// Combinational Sum but you can count with ur hands HAHAHA
int main()
{
  int Dice[7] = {1, 2, 3, 4, 5, 6};
  int target = 9;
  int count = 0;

  for (int d1 = 1; d1 <= 6; d1++)
    for (int d2 = d1; d2 <= 6; d2++)
      for (int d3 = d2; d3 <= 6; d3++)
        for (int d4 = d3; d4 <= 6; d4++)
          if (d1 + d2 + d3 + d4 == target)
          {
            count++;
            // printf(" d1 : %d ,d2 : %d , d3 : %d ,d4 : %d \n", d1, d2, d3, d4);
          }
  //  for ไม่คิดลำดับ
  printf("There are %d ways to be  %d ! \n", count, target);
  count = 0;
  for (int d1 = 1; d1 <= 6; d1++)
    for (int d2 = 1; d2 <= 6; d2++)
      for (int d3 = 1; d3 <= 6; d3++)
        for (int d4 = 1; d4 <= 6; d4++)
          if (d1 + d2 + d3 + d4 == target)
          {
            count++;
            // printf(" d1 : %d ,d2 : %d , d3 : %d ,d4 : %d \n", d1, d2, d3, d4);
          }
  printf("There are %d ways to be  %d ! \n", count, target);
  return 0;
}