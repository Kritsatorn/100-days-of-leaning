#include <bits/stdc++.h>
using namespace std;
// variation from LIS ===> Maximum Sum Incresing Subsq
// dp sq = for all  dp[i] = dp[j] + arr[i] if sum max and incresing
int N, arr[10010], dp[10010];
int MSIS()
{
  for (int i = 0; i < N; i++)
    dp[i] = arr[i];

  for (int i = 1; i < N; i++)
    for (int j = 0; j < i; j++)
      if (arr[i] > arr[j] && dp[i] < dp[j] + arr[i])
        dp[i] = dp[j] + arr[i];

  int maxx = 0;
  for (int i = 0; i < N; i++)
    if (dp[i] > maxx)
      maxx = dp[i];

  return maxx;
}
int main()
{
  cin >> N;
  for (int i = 0; i < N; i++)
    scanf("%d", &arr[i]);

  cout << MSIS() << endl;
  return 0;
}
