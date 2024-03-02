#include    <bits/stdc++.h>
using namespace std;

int is_map(int i, int j, int N, vector<vector<int>> height)
{
    if (i < 0 || i >= N || j < 0 || j >= N)
    {
        return (0);
    }
    else
    {
        return (height.at(i).at(j));
    }
}
int main()
{
    // N: 二次元配列の大きさ
    int N;
    cin >> N;

    // 二次元配列の作成
    vector<vector<int>> height(N, vector<int>(N));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> height.at(i).at(j);
        }
    }
    
    // 山頂かどうか判断し山頂であれば、その座標に格納されている別の配列に格納する
    vector<int> summit;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(is_map(i, j, N, height) > is_map(i-1, j, N, height) && is_map(i, j, N, height) > is_map(i+1, j, N, height) && is_map(i, j, N, height) > is_map(i, j-1, N, height) && is_map(i, j, N, height) > is_map(i, j+1, N, height))
            {
                summit.push_back(height.at(i).at(j));
            }
        }
    }
    // 山頂を格納した配列を降順にソートして、出力する
    sort(summit.begin(), summit.end(), greater<int>());
    for (int k:summit)
    {
        cout << k << endl;
    }
    return (0);
}