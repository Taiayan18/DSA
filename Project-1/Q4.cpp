#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr = {10, -5, 20, -15, 30, -25, 40};

    int positive  = 0;
    int negitive = 0;


    for(int i  = 0 ; i< arr.size(); i++){
        if(arr[i] > 0){
            positive++;
        }else if( arr[i] < 0){
            negitive++;
        }
    }

    cout<< "Positive Count " << positive << endl;
    cout << "Negitive Count " << negitive << endl;
 
    
    return 0;
}