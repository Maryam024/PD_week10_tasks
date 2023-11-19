#include <iostream>
#include <string>
using namespace std;
int progressDay(int arr[], int n);
main()
{
    int n;
    cout << "Enter the number of Saturdays: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter miles run for Saturday " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Total progress days: " << progressDay(arr, n);
}
int progressDay(int arr[], int n)
{
    int count = 0;
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j + 1] > arr[j])
        {
            count = count + 1;
        }
    }
    return count;
}