#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	float S = 0;
	int M = 0;
	int dau = 1;
	int i = 1;
	while (i <= n)
	{
		M = M + i;
		S = S + dau * 1.0 / M;
		i = i + 1;
		dau = -dau;
	}
	cout << "Gia tri day so la: " << S << endl;
	system("pause");

	return 1;
}