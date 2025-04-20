#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
void insertionSort(std::vector<int>& vec)
{
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        auto const insertion_point = upper_bound(vec.begin(), it, *it);
        rotate(insertion_point, it, it + 1);
    }
}
/*void insertionSort(vector<int>& arr, int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}*/
int main()
{
    clock_t start, end;
    ifstream file("C:\\Users\\ADMIN\\Documents\\C++\\CTDL & GT\\Random Array\\Random Array\\Texta.txt");
    int n;
    file >> n;
    vector<int> a;
    a.resize(n);
    for (int i = 0; i < n; i++) 
        file >> a[i];
    file.close();
    start = clock();
    insertionSort(a);
    end = clock();
    cout << "Insertion Sort: " << endl;
    for (int i = 0; i < n; i++) 
        cout << a[i] << ' ';
    cout << endl;
    double time_taken = double(end - start) / CLOCKS_PER_SEC;
    cout << endl << "Thoi gian thuc hien: " << time_taken << "s" << endl;
    return 0;
}
