
/* Find The Only one Small Number in Array With Vector */

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main (){

    vector<int> arr = {3,5,8,4,52,3};

    int min = INT_MAX;
    int minIndex = 0;

    for(int i = 0 ; i < arr.size();i++){
        min = arr[i];
        minIndex = i;
    }

    cout<<min;

    return 0;

}