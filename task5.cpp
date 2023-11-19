#include<iostream>
#include<string>
using namespace std;
main()
{
    cout<<"Enter the weigth of 10 packages: "<<endl;
    
    int arr[10];

    for(int i=0; i<10; i++)
    {
        cout<<"Enter weight of Package "<<i+1<<endl;
        cin>>arr[i];
    }

    for(int i=0; i<10; i++)
    {
      int minimum = arr[i];
      for(int j=i+1; j<10; j++)
      {
        if(arr[j] < minimum)
        {
            int temp=minimum;
            minimum = arr[j];
            arr[j]=temp;
        }
      }
      arr[i]=minimum;
    }
    
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<endl;
    }
}