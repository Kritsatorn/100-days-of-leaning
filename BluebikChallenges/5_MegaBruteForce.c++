
#include <bits/stdc++.h>
using namespace std;
bool Sol(int n)
{
  int sumEven = 0, sumOdd = 0;
  int ten = 10;
  for (int i = 1; i <= 4 && n > 0; i++, n /= 10)
  {
    if (i % 2 == 0)
      sumEven += n % 10;
    if (i % 2 != 0)
      sumOdd += n % 10;
  }
  return sumEven > sumOdd;
}
int main()
{
  int count = 0;
  for (int i = 0; i <= 9999; i++)
    if (Sol(i))
    {
      // cout << i << endl;
      count++;
    }

  cout << count << endl;
  return 0;
}