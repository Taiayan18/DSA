#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector <int> arr = {25,10,40,5,30};

    // Ascendning Order
    for(int i = 0 ; i < arr.size()-1;i++){
        for(int j = 0 ; j < arr.size() -i -1; j++){
            if(arr[j] > arr[j +1]){
                swap (arr[j] , arr[j+1]);
            }
        }
    } 


    cout << "Ascending Order:  ";
    for (int i = 0; i < arr.size(); i++ ){
        cout << arr[i] << " ";

    }


    cout << endl;



       //Desceding Order
    for(int i = 0; i < arr.size() - 1; i++){
        for(int j =  0; j < arr.size() - i - 1; j++){
            if(arr[j] < arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Descending Order: ";
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}