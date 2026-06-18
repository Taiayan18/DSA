#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{

    vector<int> arr = {10,50,30,50,20,60};

    int largest = INT_MIN;
    int secound_largest = INT_MIN;


    for(int i = 0 ; i < arr.size(); i++){
        if(arr[i] > largest){
            secound_largest = largest;
            largest = arr[i];
        }else if(arr[i] > secound_largest && arr[i] != largest ){
            secound_largest = arr[i];
        }
    }


    cout << "Largest Element : " << largest << endl;


    if(secound_largest != INT_MIN)
        cout << "Secound Largest Element : " << secound_largest << endl;
    else
        cout << "Secound Largest Element Not Found " << endl;
    



    return 0;
}