#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++)
  {
    cin >> data.at(i);
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  for(int x = 1; x < data.size(); x++)
  {
    if (data.at(x) == data.at(x - 1))
    {
      cout << "YES" << endl;
      return (0);
    }  
  }
  cout << "NO" << endl;
  return (0);
}
