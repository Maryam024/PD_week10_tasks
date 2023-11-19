#include<iostream>
using namespace std;

int function(int n, string arr[]);

main()
{
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    string arr[n];

    cout<<"Enter the elements of the array ('left' or 'right' ): "<<endl;

    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Number of full Rotations: "<<function(n,arr);
}

int function(int n, string arr[])
{
    for (int i=0; i<n; i++)
    {
        int sum=0;
        while ( arr[i] == "right" )
        {
            sum=sum+90;
        }
        while ( arr[i] == "left" )
        {
            sum= sum - 90;
        }
        int count =0;
        while (sum == 360 )
        {
            count++;
        }
        return count;

    }
}