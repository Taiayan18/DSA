#include <iostream>
#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> arr)
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

    return arr;
};

/* DRY RUN

i=1; 1<4 = T ; j=i j= 1 ; 1 > 0 = T && 5 < 14 = T  SWAP = temp = 5 ; [5] = [14] ; [14] = [5];j-- j= 0 0> 0 false ;  i++ { 5,14 ,3,6}
i = 2 ; 2<4 T ;2 > 0 = T && 3 <14 T SWAP = temp = 3 ; [3] = [14] ; [14] = [3] Arr {5,3,14,6} j--
 j = 1 ; 1 > 0 T ; 3 < 5 T ; Temp = 3 ; [3]= [5] ; [5] = [3] arr [3,5,14,6]
arr [3,5,14,6] j-- j=0 0 > 0 False, i++
i= 3 ; 3<4 T ; 3 > 0 T && 6 < 14 T swap = temp = 6 ; [6] = [14]; [14] = [6]   arr [ 3,5,6,14]; j -- j = 2 2> 0 T && 6 < 5 False , i++
i = 4 ; 4 < 4 false 


Final [ 3,5,6,14]
*/

int main()
{
    vector<int> arr = {14, 5, 3, 6};

    vector<int> result = insertionSort(arr);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}