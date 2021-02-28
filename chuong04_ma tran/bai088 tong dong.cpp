﻿#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
float Kt(float[][50], int, int);
void XuLy(float[][50], int, int);
int main()
{
	float a[20][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	XuLy(a, m, n);
	return 1;
}
void Nhap(float a[][50], int& m, int& n)
{
	cout << "Nhap so dong m = ";
	cin >> m;
	cout << "\nNhap so cot n = ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() * 1.0 / RAND_MAX * 200 - 100;
			/*	cout << setw(7) << "a[" << i << "]" << "[" << j << "] = ";
				cin >> a[i][j];*/
		}
	}
	cout << endl;
}
void Xuat(float a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << "a[" << i << "][" << j << "] = " << fixed << setprecision(2) << a[i][j];
		}
	}
	cout << endl;
}
float Kt(float a[][50], int k, int n)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s += a[k][j];
	return s;
}
void XuLy(float a[][50], int m, int n)
{
	float lc = Kt(a, 0, n);
	int dong = 0;
	for (int i = 0; i < m; i++)
	{
		float s = Kt(a, i, n);
		cout << "\nDong " << i << " co tong :" << s;
		if (s > lc)
		{
			lc = s;
			dong = i;
		}
	}
	cout << "\n\nTong dong lon nhat trong ma tran la " << lc << " tuong ung voi dong " << dong << endl;
}