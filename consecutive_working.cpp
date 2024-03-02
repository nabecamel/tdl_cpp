#include    <bits/stdc++.h>
using namespace std;

int main()
{
    //　N：引き受けた仕事の数を表す整数
    int N;
    cin >> N;

    //　A：引き受けた仕事の開始時刻と終了時刻を表す整数のペアを要素とする長さ N の配列
    vector<pair<int, int>> job(N);
    for (int i = 0; i < N; i++)
    {
        cin >> job.at(i).first >> job.at(i).second;
    }

    // 各仕事の期間から、何連勤が必要になるのかを計算する
    int start_day = job.at(0).first;
    int end_day = job.at(0).second;
    int vacation_start_day = 0;
    int vacation_end_day = 0;
    int working_days = 0;
    int vacation_days = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(job.at(i).first <= job.at(j).first && job.at(i).second >= job.at(j).second)
            {
                start_day = min(start_day, job.at(j).first);
                end_day = max(end_day, job.at(j).second);
                working_days = end_day - start_day;
            }
            else if (job.at(i).second < job.at(j).first)
            {
                start_day = job.at(i).first;
                end_day = job.at(i).second;
                vacation_start_day = job.at(i).second;
                vacation_end_day = job.at(j).first;
                working_days = end_day - start_day;
                vacation_days = vacation_end_day - vacation_start_day;
                working_days -= vacation_days;
            }
        }  
    }
    cout << working_days + 1 << endl;
}