#include <iostream>
using namespace std;

bool search(int array[], int n, int target)
{
    for (int i = 0; i < n; i++)
        if (array[i] == target)
            return true;
    return false;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    bool found = search(arr, n, target);
    if (found)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}