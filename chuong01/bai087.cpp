#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int x;
	cout << "nhap x: ";
	cin >> x;
	float S = x;
	float T = x;
	int dau = -1;
	int i = 3;
	while (i <= 2 * n + 1)
	{
		T = T * x * x;
		S = S + dau * T;
		i = i + 2;
		dau = -dau;
	}
	cout << "Gia tri day so la: " << S << endl;
	system("pause");

	return 1;
}