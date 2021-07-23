
#include <bits/stdc++.h>
using namespace std;

int mem[1000];
int dp(int N)
{
  if (mem[N])
    return mem[N];
  if (N <= 2)
    return N;
  return mem[N] = dp(N - 1) + (N - 1) * dp(N - 2);
}
int main()
{
  int N = 5;
  // cin >> N ;
  cout << "There are " << dp(N) << " diferent ways\n";
  return 0;
}