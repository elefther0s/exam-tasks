#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream file("E:\\Downloads\\27-B.txt", ios_base::in);
	int a0[3];
	int a1[3];
	int a2[3];
	int N, x;
	file >> N;
	for (int i = 0; i < 3; i++)
	{
		a0[i] = 0;
		a1[i] = 0;
		a2[i] = 0;
	}
	while (file >> x)
	{
		if (x % 3 == 0)
		{
			if (x > a0[0])
			{
				a0[2] = a0[1];
				a0[1] = a0[0];
				a0[0] = x;
			}
			else if (x > a0[1])
			{
				a0[2] = a0[1];
				a0[1] = x;
			}
			else if (x > a0[2])
			{
				a0[2] = x;
			}
		}
		if (x % 3 == 1)
		{
			if (x > a1[0])
			{
				a1[2] = a1[1];
				a1[1] = a1[0];
				a1[0] = x;
			}
			else if (x > a1[1])
			{
				a1[2] = a1[1];
				a1[1] = x;
			}
			else if (x > a1[2])
			{
				a1[2] = x;
			}
		}
		if (x % 3 == 2)
		{
			if (x > a2[0])
			{
				a2[2] = a2[1];
				a2[1] = a2[0];
				a2[0] = x;
			}
			else if (x > a2[1])
			{
				a2[2] = a2[1];
				a2[1] = x;
			}
			else if (x > a2[2])
			{
				a2[2] = x;
			}
		}
	}
	int sum0 = 0, sum1 = 0, sum2 = 0;
	for (int i = 0; i < 3; i++)
	{
		sum0 += a0[i];
		sum1 += a1[i];
		sum2 += a2[i];
	}
	int ans = a0[0] + a1[0] + a2[0];
	ans = max(max(sum0, sum1), max(sum2, ans));
	cout << ans << endl;
}