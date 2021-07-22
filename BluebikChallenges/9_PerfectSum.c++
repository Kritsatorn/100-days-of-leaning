#include <bits/stdc++.h>
using namespace std;
int N, M, arr[10010];
int dp[10010];
vector<int> st;
vector<multiset<int>> ANS;
void sol(int n)
{
  if (n == 0)
  {
    multiset<int> temp_mul;
    for (int i = 0; i < st.size(); i++)
      temp_mul.insert(st[i]);
    // printf("%d ", st[i]);

    // check duplicate
    bool dupclicate = false;
    for (int i = 0; i < ANS.size(); i++)
      if (ANS[i] == temp_mul)
      {
        dupclicate = true;
        break;
      }

    if (!dupclicate)
      ANS.push_back(temp_mul);

    return;
  }
  for (int i = 0; i < N; i++)
  {
    if (n >= arr[i])
    {
      st.push_back(arr[i]);
      sol(n - arr[i]);
      st.pop_back();
    }
  }
  return;
}
int main()
{
  cin >> N >> M;
  for (int i = 0; i < N; i++)
    scanf("%d", &arr[i]);
  sol(M);
  for (int i = 0; i < ANS.size(); i++)
  {
    for (auto t : ANS[i])
    {
      cout << t << " ";
    }
    cout << endl;
  }
  cout << "Total : " << ANS.size() << "  different ways to be " << M << endl;
  return 0;
}