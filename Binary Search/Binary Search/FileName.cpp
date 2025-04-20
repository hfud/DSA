#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;
int main()
{
	clock_t start, end;
	start = clock();
	int n, m;
	ifstream ifile;
	ifile.open("C:\\Users\\ADMIN\\Documents\\C++\\CTDL & GT\\Random Array (tăng dần)\\Random Array (tăng dần)\\RandomArrayTangDan.txt68");
	ifile >> n;
	vector<int> a(n);
	for (auto &i : a) ifile >> i;
	ifile >> m;
	while (m--)
	{
		int x; ifile >> x;

		auto vt = upper_bound(a.begin(), a.end(), x);
		if (vt == a.begin()) cout << -1;
		else if (vt != a.end())
		{
			if (*(vt - 1) == x) cout << (vt - a.begin() - 1);
			else cout << -1;
		}
		else if (vt == a.end())
		{
			if (a[a.size() - 1] == x) cout << (a.size() - 1);
			else cout << -1;
		}
		cout << endl;
	}
	ifile.close();

	end = clock();
	double time_taken = double(end - start) / CLOCKS_PER_SEC;
	cout << endl << "Thoi gian thuc hien: " << time_taken << "s" << endl;
	return 0;
}