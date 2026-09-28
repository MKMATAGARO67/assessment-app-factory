#include <iostream>
using namespace std;

int main()
{
    int myArr[5] = {1, 2, 3, 4, 5};
    int target;

    cout << "Enter the number to search: ";
    cin >> target;

    int low = 0;
    int high = 4;
    bool found = false;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (target == myArr[mid])
        {
            cout << "Found at index " << mid << endl;
            found = true;
            break;
        }
        else if (target > myArr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (!found)
    {
        cout << "Target not in array" << endl;
    }

    return 0;
}
