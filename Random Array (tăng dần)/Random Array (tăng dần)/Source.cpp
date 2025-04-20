#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	int start = 0, j = 0;
	while (j < n)
	{
		for (int i = 0; i < 20 && j < n; i++)
			a[j++] = start;
		start += rand() % 3;
	}
	cout << endl;
	int m = 10;

	ofstream file;
	file.open("RandomArrayTangDan.txt");
	file << n << endl;
	for (auto& i : a) file << i << " ";
	file << endl << m << endl;
	while (m--)
		file << rand() << " ";
	file.close();

	return 0;
}