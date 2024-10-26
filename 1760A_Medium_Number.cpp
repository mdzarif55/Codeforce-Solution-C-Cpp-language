#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main ()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		
		// Find the second largest without sorting
		if ((a > b && a < c) || (a > c && a < b))
			cout << a << endl;
		else if ((b > a && b < c) || (b > c && b < a))
			cout << b << endl;
		else
			cout << c << endl;
	}
}
