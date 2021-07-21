
#include <bits/stdc++.h>
using namespace std;
void printDivisors(int n)
{
  for (int i = 1; i <= n; i++)
    if (n % i == 0)
      printf("%d ", i);
  printf("\n");
}

int main()
{
  int N, M;
  cin >> N >> M;
  cout << N << M << "\n";
  printDivisors(N);
  printDivisors(M);
  return 0;
}