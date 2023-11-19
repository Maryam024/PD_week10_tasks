#include<iostream>
#include<string>
using namespace std;
bool function(int n, int element[]);
main()
{
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int element[n];

 cout<<"Can be arranged: "<<function(n, element);

}

bool function(int n, int element[])
{
    
  cout<<"Enter the element of the array: "<<endl;

    for ( int i=0; i<n; i++ )
    {
      cin>>element[i];
    }
  
  for( int i=0; i<n; i++ )
  {
    int min = element[i];

 for ( int j=i+1; j<n; j++ )
 {
    if(element[j] < min)
        {
            int temp=min;
            min = element[j];
            element[j]=temp;
        }
 }
      element[i]=min;
  }

  for (int i=0; i<n; i++)
  {
    if (element[i] == element[i+1]-1)
    {
        
    }
     return true;
  }
  return false;
}