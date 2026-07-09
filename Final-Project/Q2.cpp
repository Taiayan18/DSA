#include <iostream>
#include <vector>
using namespace std;

void insert(vector<int> &arr)
{

    int index = 1;
    int value = 4;

    arr.insert(arr.begin() + index, value);
    cout << "Inserted Array : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
};

void deletearr (vector<int> &arr)
{
    int index = 0;
    arr.erase(arr.begin() + index);
    cout << endl
         << "Delete Array : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
};


void rotate(vector<int> &arr)
{
    int k = 2;               // Rotate by 2 positions
    int n = arr.size();

    k = k % n;

    vector<int> temp(n);

    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }

    arr = temp;

    cout << endl
         << "Rotated Array : ";

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    vector<int> arr = {2, 6, 8, 10};
    insert(arr);
    deletearr(arr);
    rotate(arr);
    return 0;
}