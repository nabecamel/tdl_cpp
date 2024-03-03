#include    <bits/stdc++.h>
using namespace std;

int main()
{
    //５００円玉の枚数：A、１００円玉の枚数：B、５０円玉の枚数：C、合計金額：X
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int count = 0;
    // 500円玉の枚数をi、100円玉の枚数をj、50円玉の枚数をkとして全探索
    for (int i = 0; i <= A; i++)
    {
        for (int j = 0; j <= B; j++)
        {
            for (int k = 0; k <= C; k++)
            {
                if (500 * i + 100 * j + 50 * k == X)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return (0);
}