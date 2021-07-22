
#include <bits/stdc++.h>
using namespace std;
int arr[10010];
int sol(int idx, bool hadSkipped, int N)
{
  if (idx > N - 1)
    return 0;
  if (hadSkipped)
    return sol(idx + 1, false, N) + arr[idx];
  return min(sol(idx + 1, false, N) + arr[idx], sol(idx + 1, true, N));
}
int main()
{
  int N, M;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    scanf("%d", &arr[i]);
  }
  cout << sol(0, false, N) << endl;
  // cout << min(arr[0], arr[1]);

  return 0;
}