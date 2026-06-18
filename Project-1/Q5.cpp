#include <iostream>
#include <vector>
using namespace std;

int main()
{

        vector<int> arr = {12, 7, 4, 15, 10, 3, 8, 9};

    vector<int> even, odd;

    // Separate even and odd numbers
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] % 2 == 0)
            even.push_back(arr[i]);
        else
            odd.push_back(arr[i]);
    }

    // Sort even numbers in ascending order
    for(int i = 0; i < even.size() - 1; i++)
    {
        for(int j = 0; j < even.size() - i - 1; j++)
        {
            if(even[j] > even[j + 1])
            {
                swap(even[j], even[j + 1]);
            }
        }
    }

    // Sort odd numbers in descending order
    for(int i = 0; i < odd.size() - 1; i++)
    {
        for(int j = 0; j < odd.size() - i - 1; j++)
        {
            if(odd[j] < odd[j + 1])
            {
                swap(odd[j], odd[j + 1]);
            }
        }
    }

    // Merge and display
    cout << "Merged Array: ";

    for(int i = 0; i < even.size(); i++)
    {
        cout << even[i] << " ";
    }

    for(int i = 0; i < odd.size(); i++)
    {
        cout << odd[i] << " ";
    }
    
    return 0;
}