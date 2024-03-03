#include    <bits/stdc++.h>
using namespace std;

int main()
{
    // １〜Nまでの整数の中で、各桁の和がA以上B以下であるものの総和を求める
    int N, A, B;
    cin >> N >> A >> B;

    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        int num = i;
        int digit_sum = 0;
        // 各桁の和を求める
        while (num > 0)
        {
            digit_sum += num % 10;
            num /= 10;
        }
        // 各桁の和がA以上B以下であるかを判定し、条件を満たす場合にiをsumに加算
        if (A <= digit_sum && digit_sum <= B)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return (0);
}
