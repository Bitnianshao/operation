#define _CRT_SECURE_NO_WARNINGS
#include<direct.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<conio.h>

using namespace std;

char Operator();
void integer();
void Dealfs(int m, int a[][2]);
void playfs(int a[][2], int w, int m);
void Deali(int m, int a[]);
void playi(int a[], int w, int m);

char Operator()
{
	char op;
	int i;
	i = rand() % 4 + 1;
	switch (i)
	{
	case 1: return '+';
	case 2: return '-';
	case 3: return '×';
	case 4: return '/';
	}
}
void integer()
{
	ofstream fout;
	//fout.open("d:\\4.txt");
	fout.open("../BIN/4.txt");
	
	int x, y;
	char op;
	for (int i = 0; i < 1000; i++) {
		x = rand() % 100 + 1;
		y = rand() % 100 + 1;
		op = Operator();
		if (op == '-')
			while (x<y)
			{
				x = rand() % 100 + 1;
				y = rand() % 100 + 1;
			}
		fout << x << op << y << "=" << endl;
	}
	fout.close();
}

void Dealfs(int m, int a[][2])
{
	for (int p = 0; p<m; p++)
	{
		int i = (int)rand() % 10;
		int j = (int)rand() % 10;
		while (j == 0 || i >= j)
		{
			i = (int)rand() % 10;
			j = (int)rand() % 10;
		}
		int x = (int)rand() % 10;
		int y = (int)rand() % 10;
		while (y == 0 || x >= y)
		{
			x = (int)rand() % 10;
			y = (int)rand() % 10;
		}
		int k = (int)rand() % 100 / 25;
		switch (k)
		{
		case 0:
			cout << "(" << i << "/" << j << ")" << "+" << "(" << x << "/" << y << ")" << "=";
			a[p][0] = i*y + x*j;
			a[p][1] = j*y;
			break;
		case 1:
			cout << "(" << i << "/" << j << ")" << "-" << "(" << x << "/" << y << ")" << "=";
			a[p][0] = i*y - x*j;
			a[p][1] = j*y;
			break;
		case 2:
			cout << "(" << i << "/" << j << ")" << "*" << "(" << x << "/" << y << ")" << "=";
			a[p][0] = i*x;
			a[p][1] = j*y;
			break;
		case 3:
			a[p][0] = i*y;
			a[p][1] = j*x;
			cout << "(" << i << "/" << j << ")" << "/" << "(" << x << "/" << y << ")" << "=";
		}

		if (p % 5 == 4)
		{
			cout << endl;
		}
		else
		{
			cout << '\t';
		}
	}

}
void playfs(int a[][2], int w, int m)
{
	if (w == 1)
	{
		for (int q = 0; q<m; q++)
		{
			if (a[q][0] == 0)
				cout << "0" << '\t';
			else
				cout << a[q][0] << "/" << a[q][1] << '\t';
			if (q % 5 == 4)
			{
				cout << endl;
			}
		}
	}
	else
	{
	};
}
void Deali(int m, int a[])
{

	for (int p = 0; p<m; p++)
	{
		int i = (int)rand() % 10;
		int j = (int)rand() % 10;
		int k = (int)rand() % 100 / 25;
		switch (k)
		{
		case 0:
			cout << i << "+" << j << "=";
			a[p] = i + j;
			break;
		case 1:
			cout << i << "-" << j << "=";
			a[p] = i - j;
			break;
		case 2:
			cout << i << "*" << j << "=";
			a[p] = i*j;
			break;
		case 3:
			try
			{
				a[p] = i / j;
				cout << i << "/" << j << "=";
			}
			catch (...)
			{
				p--;
			}


		}

		if (p % 5 == 4)
		{
			cout << endl;
		}
		else
		{
			cout << '\t';
		}
	}
}

void playi(int a[], int w, int m)
{
	if (w == 1)
	{
		for (int q = 0; q<m; q++)
		{
			cout << a[q] << '\t';
			if (q % 5 == 4)
			{
				cout << endl;
			}
		}
	}
	else
	{
	};
}
void main()
{
	int p;
	do
	{
		system("cls");
		int a[1000], b[1000][2];
		int m, n, w;
		
		
		integer();
		cout << "请输入生成的四则运算题个数：";
		cin >> m;
		cout << endl;
		cout << "请输入要生成的四则运算种类(输入1为整数，否则为真分数):";
		cin >> n;
		cout << endl;
		if (n == 1)
		{
			Deali(m, a);
			cout << endl;
		}
		else
		{
			Dealfs(m, b);
			cout << endl;
		}
		cout << "是否输出答案(输入1则输出答案否则不输出答案)" << endl;
		cin >> w;
		if (n == 1)
		{
			playi(a, w, m);
		}
		else
		{
			playfs(b, w, m);
		}
		cout << endl;
		cout << "是否继续生成运算题(输入1则生成否则不生成)" << endl;
		cin >> p;
		cout << endl;
	} while (1 == p);

}