// I dont know why this code is not working. some test cases are successful but some are not.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // N:発言の件数, M:監視する時間, T:バズ判定における対象期間T K:「Good」アクションの回数
    int N, M, T, K;
    cin >> N >> M >> T >> K;
    // 発言の件数と「Good」アクションの回数を表す2次元配列
    vector<vector <int>> a(M, vector<int>(N));
    int buzz_time = 0;
    //　入力処理
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> a.at(i).at(j);
        }
    }

    //　バズ判定のための処理：　T時間以内に「Good」アクションの回数がK回以上であれば「yes」、そうでなければ「no」を出力
    for (int j = 0; j < N; j++)
    {
        int good_flag = 0;
        buzz_time = 0;
        // T時間以内にK回以上「Good」アクションがあるかどうかを判定
        for (int i = 0; i < M - T +1; i++)
        {
            int good_count = 0;
            for (int k = i; k < i + T; k++)
            {
                good_count += a.at(k).at(j);
            }
            if (good_count >= K)
            {
                good_flag = 1;
                buzz_time = i + 1;
                break;
            }
        }
        // 結果の出力
        if (good_flag == 1)
        {
            cout << "yes " <<  buzz_time << endl;
        }
        else
        {
            cout << "no " << buzz_time << endl;
        }
    }
    return (0);
}
