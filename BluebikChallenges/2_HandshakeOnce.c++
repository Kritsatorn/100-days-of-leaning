
#include <bits/stdc++.h>
using namespace std;
// n-th person has n choices ===> no handshake and n-1 handshake
// no hand shake give ANS equal ANS of handshake n-1
// cut down the question into sum of handshake N+1 to 0
// but step down by -2 bc if one single make another single
// handshake once recursion ==> handshake(n) = (n-1) + handshake(n-1)
int handshakeOnce(int N)
{
  if (N <= 0)
    return 0;
  return (N - 1) + handshakeOnce(N - 1);
}
int sumHandshake(int N)
{
  int summ = 0;
  // if (N % 2 == 1)
  // {
  //   // sum +=
  // }
  // N must be even
  for (int i = N; i >= 2; i--)
    summ += handshakeOnce(i);
  return summ;
}
int main()
{
  int N = 5;
  // cin >> N ;
  // cout << handshakeOnce(N) << endl;
  cout << sumHandshake(N) << "\n";
  return 0;
}