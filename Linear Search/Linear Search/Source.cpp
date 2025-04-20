#include <iostream>
#include <ctime>
#include <fstream>
#include <vector>
using namespace std;
#define ll long long
int main()
{
	ofstream fo("RunTimeLinear.txt");
	fstream fi("RandomArrayTangDan.txt");
	clock_t start = clock();
	srand(time(NULL));
	ll n, m;
	fi >> n;
	vector<ll> a(n);
	for (ll i = 0; i < n; i++)
	{
		fi >> a[i];
	}
	fi >> m;
	ll x;
	for (ll i = 0; i < m; i++)
	{
		fi >> x;
		ll pos = -1;
		for (ll j = n - 1; j >= 0; j--)
		{
			if (a[j] == x)
			{
				pos = j;
				break;
			}
		}
		fo << pos << endl;
	}
	clock_t end = clock();
	double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
	cout << time_spent;
	return 0;
}