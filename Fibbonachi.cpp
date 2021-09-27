#include <iostream>
using namespace std;
int main() 
{
	int n = 0;
	int m = 1;
	int z = 0;
	int x = 0;
	cout << "Enter a number:\n ";
	cin >> x;
	cout << n << " "<<m<<" ";
	for (int i = 2; i <= x; i++)
	{
		z = n+m;
		cout << z<<" ";
		n = m;
		m = z;
	}
}
