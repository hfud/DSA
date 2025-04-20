#include <iostream>
#include <random>
#include <vector>
#include <fstream>
#include <time.h>
using namespace std;
int main()
{
	clock_t start, end;
	random_device r;
	default_random_engine e1(r());
	uniform_int_distribution<int> uniform_dist(-1e9, 1e9);
	cout << "Nhap so phan tu cua mang: ";
	int n;
	cin >> n;
	vector<int> a(n);
	start = clock();
	//doc file
	ofstream file;	
	file.open("Texta.txt");
	file << n << endl;
	for (auto& i : a)
		file << uniform_dist(e1) << ' ';
	file.close();
	//time
	end = clock();
	double time_taken = double(end - start) / CLOCKS_PER_SEC;
	cout << endl << "Thoi gian thuc hien: " << time_taken << "s" << endl;
	return 0;
}
