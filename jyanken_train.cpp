#include <bits/stdc++.h>
using namespace std;

int main()
{
    // N: 園児の人数, M:じゃんけんの勝敗記録の個数を表す
    int N, M; 
    cin >> N >> M;

    // A: 各園児の列車の長さを表す
    vector<int> A(N); 

    for (int i = 0; i < M; i++)
    {
        // a: じゃんけんの勝者, b: じゃんけんの敗者
        int a, b; 
        cin >> a >> b;
        // じゃんけんの勝者の列車の長さに、じゃんけんの敗者の列車の長さを加算する
        A.at(a-1) += A.at(b-1);
        // じゃんけんの敗者の列車の長さを0にする
        A.at(b-1) = 0;
    }

    // 列車の長さが最も長い園児の番号を出力
    int max_length = 0;
    max_length = *max_element(A.begin(), A.end());
     cout << max_length << endl;  
     for (int k = 0; k < N; k++)
     {
         if (A.at(k) == max_length)
         {
             cout << k + 1 << endl;
         }
     }
     return (0);
 }