
#include <bits/stdc++.h>
using namespace std;
void description()
{
  // KnightWalk link : http://varianceexplained.org/figs/2018-12-10-knight-chess/unnamed-chunk-1-1.png
  // ข้อนี้มองยากมาก ต้องมองเป็น Prob และ DP ก่อน
  // step 1 ถ้า หมาก อยู๋ x , y แล้ว สามารถเดินไป 8 ทิศ 1 steps ( K = 1 )
  // ถ่้า 4 ทิศ หลุดกระดาน มี 4 ทิศที่เหลือ แปลว่า === คำตอบคือ ( 4/8 ) ==> ความน่าจะเป็นของคำตอบนี้คือ 1/2 หรือ 0.5
  // แล้วถ้าคิดต่อไป แต่ละทิศ สามารถเดินได้อีก 8 ทิศ ที่หนึ่ง มีหลุดจากกระดาน ครึ่งนึง แปลว่าอีก 4 จุด จะมีโอกาส จุดละ 0.5*0.5 = 0.25
  // คำตอบรวมคือ sum ของ prob ทั้งหมด / 8 (เพราะมี 8 ทางเลือก ~~~ เฉลี่ย)

  // ^^^ สังเกตุว่้า โจทยนี้เป็นโจทย์ DP และมองแบบ  จะยากTop down
  // ต้องทำเป็น  Bottom up เพื่อแยกเป็น sub problem ทำให้ง่ายต่อการคิด และ โค้ด

  //Top down
  // ถ้าคำตอบคือ dp[X][Y][K] จะหาคำตอบได้อย่างไร ===>
  // dp[X][Y][K] = sum(dp[][][K-1] ทั้ง 8ทิศ ที่สามารถมาถึงจุด X Y ได้ ) / 8
  // and recur จน K = 0 ( base case )

  //Bottom up
  // สมมติ สามช่อง เริ่มด้วย [1][1][1] prob 1 เริ่มต้นเท่ากัน
  // step 2 ลองใ้หช่องซ้ายขวาเดิน และรวม prob ==>  [1][ 1/8 + 1/8 ][1]
  // มี 2 ช่องที่เข้าถึง ช่องกลางด้วย ด้วย prob อย่างละ 1/8
  // หมายความว่าเมื่อเดิน 1 step จาก ซ้ายขวา จะมี prob เข้าถึงช่องตรงกลางคือ 0.125 + 0.125 = 0.25
  // คิดกลับกัน แปลว่า ถ้าเริ่มจากช่องกลาง และเดิน 1 step จะสามารถเข้าถึงช่องซ้ายขวา และ อยู่บนกระดาน !
  // ด้วย Prob = 0.25  !!!!!

  // Solution pickup ====> Bottom up
  // ไล่หา Prob ทุกช่องใน K step และจะเลือกคำตอบจากไหนก็เลือกเอา
}

int directions[9][3] = {{1, 2}, {2, 1}, {1, -2}, {2, -1}, {-1, 2}, {-2, 1}, {-1, -2}, {-2, -1}};
double KnightWalk(int N, int K, int X, int Y)
{
  double dp[50][50][20] = {};
  // fill(&dp[0][0][0], &dp[0][0][0] + (N + 1) * (N + 1) * (K + 1), 1.0);
  for (int i = 0; i <= N; i++)
    for (int j = 0; j <= N; j++)
      dp[i][j][0] = 1;

  for (int step = 1; step <= K; step++)
  {

    // table 1 to N , start from (1,1) to (N,N)
    for (int x = 1; x <= N; x++)
    {
      for (int y = 1; y <= N; y++)
      {
        double prob = 0.0;
        for (int i = 0; i < 8; i++)
        {
          int new_x = x + directions[i][0];
          int new_y = y + directions[i][1];

          if ((new_x >= 1 && new_x <= N) == false)
            continue;
          if ((new_y >= 1 && new_y <= N) == false)
            continue;

          prob += dp[new_x][new_y][step - 1] / 8.0;
        }

        dp[x][y][step] = prob;
      }
    }
  }

  return dp[X][Y][K];
}
int main()
{
  int N = 8, K = 3, X = 1, Y = 1;
  // cin >> N ;
  cin >> N >> K >> X >> Y;
  cout << KnightWalk(N, K, X, Y) << "\n";
  return 0;
}