#include<iostream>
using namespace std;
int main()
{
	float S = 1;
	float e = 1;
	int i = 3;
	while (e >= pow(10, -6))
	{
		e = 1.0 / i;
		S = S + e;
		i = i + 2;
	}
	cout << "Gia tri day so la: " << S << endl;
	system("pause");
	return 1;
}