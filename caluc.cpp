#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A,B,answer;
  char op;
 
  answer = 0;
  cin >> A >> op >> B;
  if(op == '+')
  {
    answer = A + B;
  }
  else if (op == '-')
  {
   answer = A - B;
  }
  else {
    cout << "error" << endl;
  }
  cout << answer << endl;
}
