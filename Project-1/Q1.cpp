#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector <int> arr = {10,20,30,40,50,50,40,20};
    vector <int> unique;


    for( int i = 0 ; i< arr.size(); i++){
        bool duplicate = false;

        for(int j = 0; j < unique.size(); j++){
             if(arr[i] == unique[j]){
                duplicate = true;
                break;
             }
        }

        if(!duplicate){
            unique.push_back(arr[i]);
        }
    }


    cout<<  "unique Element : ";

    for(int i = 0 ; i< unique.size();i++){
        cout<< unique[i] << " ";
    }
    return 0;
}