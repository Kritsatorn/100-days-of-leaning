
#include <bits/stdc++.h>
using namespace std;
// explain
//  one person have 2 diff ways
// one is single  =  fn(n-1) ways exple  {1 ,2 3, 4, 5 }
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
  cout << dp(N) << "\n";
  return 0;
}