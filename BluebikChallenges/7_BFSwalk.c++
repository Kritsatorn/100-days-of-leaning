
#include <bits/stdc++.h>
using namespace std;
int BFS(int N, int K, int X, int Y)
{
  queue<pair<int, int>> qs;
  bool check[100][100] = {0};
  //initial
  qs.push(make_pair(X, Y));
  check[X][Y] = true;
  for (int i = 1; i <= K; i++)
  {
    cout << "ROUND " << i << endl;
    queue<pair<int, int>> q;
    while (!qs.empty())
    {
      pair<int, int> p = qs.front();
      qs.pop();
      int x = p.first;
      int y = p.second;
      cout << x << " " << y << endl;

      // 8 direction
      int directions[10][3] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}, {1, 1}, {-1, 1}, {1, -1}, {-1, -1}};
      for (int i = 0; i < 8; i++)
      {
        int new_x = x + directions[i][0];
        int new_y = y + directions[i][1];
        if ((new_x >= 1 && new_x <= N) == false)
          continue;
        if ((new_y >= 1 && new_y <= N) == false)
          continue;
        if (check[new_x][new_y] == true)
          continue;
        q.push(make_pair(new_x, new_y));
        check[new_x][new_y] = true;
      }
    }
    qs.swap(q);
    cout << endl;
  }

  return qs.size();
}
int main()
{
  int N = 5, K = 2, X = 2, Y = 2;
  // swap X Y ==> X = first dimiension of Array
  // cin >> N >> M >> K >> X >> Y;
  // cout << handshakeOnce(N) << endl;
  cout << BFS(N, K, X, Y) << "\n";
  return 0;
}