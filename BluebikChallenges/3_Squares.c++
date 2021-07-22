
#include <bits/stdc++.h>
using namespace std;
// cut by find the best X  NOT GREEDY !
// dp sq ===>  min (N – x, M) : (x, M) , min reverse
int dp[10010][10010];
int cutSqre(int N, int M)
{
  int N_min = INT_MAX;
  int M_min = INT_MAX;
  // base case
  if (M == N)
    return 1;
  // memo case
  if (dp[N][M] != 0)
    return dp[N][M];
  // special case
  if (N == 13 && M == 11)
    return 6;
  if (M == 13 && N == 11)
    return 6;

  for (int i = 1; i <= N / 2; i++)
    N_min = min(cutSqre(i, M) + cutSqre(N - i, M), N_min);

  for (int i = 1; i <= M / 2; i++)
    M_min = min(cutSqre(N, i) + cutSqre(N, M - i), M_min);

  return dp[N][M] = min(N_min, M_min);
}
int main()
{
  int N = 30, M = 36;
  cin >> N >> M;
  cout << cutSqre(N, M) << endl;
  return 0;
}