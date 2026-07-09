#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void BubblesortASC(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << " Bubble Sort Ascending  Order : ";

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void BubbleSortDSEC(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << endl
         << " Bubble Sort Descending Order : ";

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSortASC(vector<int> &arr)
{

    for (int i = 1; i < arr.size(); i++)
    {
        int j = i;

        while (j > 0 && arr[j] < arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    cout << endl
         << "insertionSort Ascending Order : ";

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
};

void insertionSortDSEC(vector<int> arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int j = i;
        while (j >  0 && arr[j] > arr[j - 1])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    cout << endl
         << "insertionSort Descending Order : ";

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}


void selectionSortASC(vector <int>&arr){
    for (int j = 0 ; j < arr.size() ; j ++){
        int min = INT_MAX;
        int minindex = 0;

        for(int i = j ; i < arr.size(); i++){
            if(arr[j] < min){
                min = arr[i];
                minindex = i;
            }

        }

        int temp = arr[j];
        arr[j] = arr[minindex];
        arr[minindex] = temp;
    }


    cout << endl << "Selection Sort ascending Order : ";

    for(int i = 0 ; i< arr.size(); i++){
        cout << arr[i] << " ";
    }


    cout << endl << " Selection Sort Dscending Order : ";

    for(int i = arr.size()-1 ; i >= 0 ; i--){
        cout << arr[i] << " ";
    }
}
int main()
{

    vector<int> arr = {50, 30, 20, 10, 40};

    BubblesortASC(arr);
    BubbleSortDSEC(arr);
    insertionSortASC(arr);
    insertionSortDSEC(arr);
    selectionSortASC(arr);
    return 0;
}