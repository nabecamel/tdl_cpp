#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  string   S;
  cin  >>  S;
  int len;
  int answer;

  len = S.size();
  answer = 1;
  for (int i = 0; i < len ; i++)
  {
    if ( S.at(i) == '+')
    {
      answer++;
    }
    else if (S.at(i) == '-')
    {
      answer--;
    }
  }

  cout << answer << endl;
}
