#include <iostream>
#include <vector>
using namespace std;

void function(vector<int> &arr)
{

    int possitive = 0;
    int odd = 0;
    int even = 0;
    int negitive = 0;
    int sum = 0;
    double avg = 0;
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            possitive++;
        }

        if (arr[i] < 0)
        {
            negitive++;
        }

        if (arr[i] % 2 != 0)
        {
            odd++;
        }
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        if (arr[0] < arr.size())
        {
            sum += arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
        avg = (double)sum / arr.size();
    }

    cout << "possitive Value : " << possitive << endl;
    cout << "Negitive Value : " << negitive << endl;
    cout << "Odd Value : " << odd << endl;
    cout << "Even Number : " << even << endl;
    cout << "Sum Of Value " << sum << endl;
    cout << "Avarage Of Sum : " << avg << endl;
    cout << "Max Number : " << max << endl;
    cout << "Min Number : " << min << endl;
    
};

int main()
{

    vector<int> arr = {1, 2, 5, 7, 8, -3, -1, 0};

    function(arr);

    return 0;
}