#include<iostream>
#include<string>
using namespace std;
main()
{
    int noBoxes, n;
    cout<<"No. of boxes: ";
    cin>>noBoxes;
    n = noBoxes*3;
    int arr[n];
    
    cout<<"Enter the dimensions of the boxes (length, width, height): "<<endl;
    for( int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
 int sum=0;
 for ( int i=0; i<n; i=i+3 )
  {
    int m = arr[i] * arr[i+1] * arr[i+2];
    sum = sum + m;
  }   
  cout<<"Total volume of all boxes: "<<sum;
}