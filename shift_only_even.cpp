#include    <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    vector<int> num(N);
    for (int i = 0; i < N; i++)
    {
        cin >> num.at(i);
    }
    // 全てが偶数かどうかフラグを立てた
    int all_num_is_even = 1;
    for (int n : num)
    {
        if (n % 2 != 0)
        {
            all_num_is_even = 0;
            break;
        }
    }
    if (all_num_is_even)
    {
        //　一個前のif文で一回分のループが終わっているので、countは1からスタート
        int count = 1;
        while (all_num_is_even)
        {
            for (int i = 0; i < N; i++)
            {
                num.at(i) /= 2;
                if (num.at(i) % 2 != 0)
                {
                    //　奇数があったらフラグを変更してループを抜ける
                    all_num_is_even = 0;
                    break;
                }
            }
            if (all_num_is_even)
                count++;
        }
        cout << count << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}