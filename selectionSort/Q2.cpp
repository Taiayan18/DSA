
/*Find The Sorted Arry With Vector And SelectionSort Method*/
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector <int> selectionSort(vector<int>& arr){
    for(int j = 0 ; j< arr.size();j++){
        int min = INT_MAX;
        int minIndex = 0;

        for(int i = j ; i< arr.size();i++){
           if(arr[i] < min){
            min = arr[i];
            minIndex = i;

           }
        }
        int temp = arr[j];
        arr[j] = arr[minIndex];
        arr[minIndex] = temp;
    }
    return arr;
};

int main()
{
    vector <int> arr = {33,18,7,17,45,10,1};
    vector<int> result = selectionSort(arr);
    for (int i = 0 ; i< result.size();i++){
        cout<< result[i] << " ";
    }
    
    return 0;
}

/* Dry Run 

i = 0 ; 0 < 6 T ; arr[i] 33 < 22140242 T ; min = 33 ; 
*/