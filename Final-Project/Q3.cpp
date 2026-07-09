#include <iostream>
#include <vector>
using namespace std;


void reverseFunction(vector<int>&arr){

     
    for(int i = 0; i< arr.size()/2; i++){
        int temp = arr[i];
        arr[i] = arr[arr.size() -1 -i];
         arr[arr.size() -1 -i] = temp;
    } 

    cout << "Reverse Array : " ;

     for (int i = 0 ; i< arr.size(); i++){
        cout << arr[i] << " " ;
     }
}

     
void palindrome(vector<int> &arr)
{
   bool ispalindrome = true;

   for(int i = 0 ; i < arr.size() / 2 ; i++){
    if(arr[i] != arr[arr.size() -1 -i]){
        ispalindrome = false;
        break;

    }
   }

   if(ispalindrome){
        cout << endl << "Array Is Palidrome " << endl;

    }else{
        cout << endl << "Array is Not palidrome";
    }
}


void Leader (vector<int>&arr){

   for (int i = 0 ; i< arr.size() ; i++){

   bool isleader = true ;

     for(int j = i +1; j < arr.size() ; j++){
        if(arr[j] > arr[i]){
            isleader = false ;
            break;
        }
     }

     

      if(isleader){
        cout << "Leader : " << arr[i] ;

      }


       
   }
cout << endl;
  
}
int main()
{
    vector<int> arr = {10,20,30,40,50,60,70,80};
     Leader(arr);
    reverseFunction(arr);
    palindrome(arr);
   
    
    return 0;
}

//2 , 5,  4,  9,  10,  15,  25,  3
// 5   4,  9,  10,  15,  25,  3
// 5 9 10 15 25 3
// 5 10 15 25 3
// 5 25 3
// 5 25

