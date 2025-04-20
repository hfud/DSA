#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
void quick_sort(vector<int>& a, int left, int right) 
{
    if (left >= right) 
        return;
    int pivot = a[(left + right) / 2];
    int i = left, j = right;
    while (i <= j) 
    {
        while (a[i] < pivot) 
            i++;
        while (a[j] > pivot) 
            j--;
        if (i <= j) 
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    quick_sort(a, left, j);
    quick_sort(a, i, right);
}
int main() 
{
    clock_t start, end;
    ifstream file("C:\\Users\\ADMIN\\Documents\\C++\\CTDL & GT\\Random Array\\Random Array\\Texta.txt");
    int n;
    file >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        file >> a[i];
    file.close();
    start = clock();
    quick_sort(a, 0, n - 1);
    end = clock();
    //Xuat
    /*cout << "Quick Sort: " << endl;
    for (int i = 0; i < n; i++) 
        cout << a[i] << " ";*/
    cout << endl;
    double time_taken = double(end - start) / CLOCKS_PER_SEC;
    cout << endl << "Thoi gian thuc hien: " << time_taken << "s" << endl;
    return 0;
}
