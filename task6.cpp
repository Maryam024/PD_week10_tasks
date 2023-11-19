#include<iostream>
#include<string>
using namespace std;
string reverseWords(string words);
main()
{
    string words;
    cout<<"Enter a string: ";
    getline(cin,words);
   

    reverseWords(words);
}
string reverseWords(string words)
{
    string res = " ";
    string rev = " ";
     int n = words.length();
       
    for (int i =0 ; i <= n-1; i++)
     {
        res += words[i];
        if ( words[i] == ' ')
        {
            rev = res + rev;
            res = " "; 
        }
     }    
        if ( res != " ")
        {
            rev = res + rev;
        }
     cout<<rev;
}

 