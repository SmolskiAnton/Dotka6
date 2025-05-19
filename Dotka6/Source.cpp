#include <iostream>
using namespace std;
int calculateSum(int &a, int &b);
int main()
{
	int x = 10, y = 25;
	int res = calculateSum(x, y);
	cout << "x=" <<x<< endl;
	cout << "y=" <<y<< endl;
	cout << "res=" << res<< endl;
	
}
int calculateSum(int &a, int &b)
{
	 a++;
	 b++;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	int k = 10;
	int& f = k;

	return a + b;
}
