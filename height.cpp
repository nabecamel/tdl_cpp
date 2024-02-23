#include	<bits/stdc++.h>
using namespace std;

int	main()
{
	int	A;
	int	B;
	int	C;
	int	answer;
	int	MIN;
	int	MAX;

	answer = 0;
	MIN = 0;
	MAX = 0;
	cin >> A >> B >> C ;

	MIN = min(min(A,B), min(B,C));
	MAX = max(max(A,B), max(B,C));

	answer = MAX - MIN;
	cout << answer << endl;
}

