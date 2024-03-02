#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<vector<int>> chocolate(H, vector<int>(W));
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            cin >> chocolate.at(i).at(j);
        }
    }

    bool canDivide = true;
    // アリスとボブの各行の分割結果を格納する
    vector<string> division(H); 

    for (int i = 0; i < H && canDivide; ++i) {
        int sum = accumulate(chocolate.at(i).begin(), chocolate.at(i).end(), 0);
        // 目標値（アリスとボブが等しく分け合う糖度の和）
        int halfSum = sum / 2; 
        int currentSum = 0;
        for (int j = 0; j < W; ++j) {
            currentSum += chocolate.at(i).at(j);
            division.at(i) += 'A'; // アリスに割り当て
            if (currentSum >= halfSum) {
                // 残りはボブに割り当て
                division.at(i) += string(W - j - 1, 'B');
                break;
            }
        }

        // 検証: 各行でアリスとボブが等しく分け合えているか
        if (currentSum < halfSum || (sum % 2 != 0 && currentSum == halfSum)) {
            // 分割不可能な条件を検出
            canDivide = false;
        }
    }

    if (canDivide) {
        cout << "Yes" << endl;
        for (const auto& line : division) {
            cout << line << endl;
        }
    } else {
        cout << "No" << endl;
    }

    return (0);
}
