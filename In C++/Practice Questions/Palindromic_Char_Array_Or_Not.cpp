//Check whether a char array is Palindromic or not.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of the string: ";
    cin>>n;
    cin.ignore();
    cout<<endl;

    char arr[n+1];
    cout<<"Input your char array: ";
    cin>>arr;
    cin.ignore();
    cout<<endl;

    bool flag = true;
    for(int i=0; i<n; i++){
        if(arr[i] != arr[n-1-i]){
            flag=false;
            break;
        }
    }

    if(flag){
        cout<<arr<<" is palindromic."<<endl;
    }
    else{
        cout<<arr<<" isn't palindromic."<<endl;
    }
    return 0;
}
