#include<iostream>
#include<string>
using namespace std;
int countLetter(int n, string arr[], char letter );
main()
{
    int n;
    cout<<"Enter how many words you want to enter: ";
    cin>>n;
    string arr[n];
    
    for( int i=0; i<n; i++ )
    {
        cout<<"Enter word "<< i+1 <<": ";
        cin>>arr[i];

    }
    char letter;
    cout<<"Enter the word you want to count: ";
    cin>> letter;
   
    int result = countLetter( n, arr, letter );
    cout<<letter<<" shows up "<<result<<" in the data.";
}
int countLetter(int n, string arr[], char letter )
{
    int count=0;
    for(int i=0;i<n;i++)
    
  { 
        string word=arr[i];
     for(int j=0; j<word.length(); j++)
    {
        if(letter == word[j])
        {
            count = count + 1;
        }
    }}
    return count;
}