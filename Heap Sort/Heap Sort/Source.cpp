#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
void heapify(vector<int>& a, int n, int i) 
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && a[l] > a[largest])
        largest = l;
    if (r < n && a[r] > a[largest])
        largest = r;
    if (largest != i) 
    {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}
void heapsort(vector<int>& a, int n) 
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);
    for (int i = n - 1; i >= 0; i--) 
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}
int main() 
{
    clock_t start, end;
    ifstream file("C:\\Users\\ADMIN\\Documents\\C++\\CTDL & GT\\Random Array\\Random Array\\Texta.txt");
    int n;
    file >> n;
    vector<int> a(n);
    for (auto& i : a) file >> i;
    file.close();
    
    start = clock();
    heapsort(a, n);
    end = clock();
    cout << "Heap Sort: " << endl;
    for (auto i : a) cout << i << " ";
    cout << endl;
    double time_taken = double(end - start) / CLOCKS_PER_SEC;
    cout << endl << "Thoi gian thuc hien: " << time_taken << "s" << endl;
    return 0;
}
