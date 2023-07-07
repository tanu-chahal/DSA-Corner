//To get the length of largest word in a char array
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
    cin.getline(arr,n);
    cin.ignore();

    int currLen=0, maxLen=0, i=0, currSt=0, maxSt=0;
    while(true){
        if(arr[i]==' '|| arr[i]=='\0'){
            if(currLen>maxLen){
                maxLen = currLen;
                maxSt=currSt;
            }
            currLen =0;
            currSt = i+1;
        }
        else
            currLen++;

       if(arr[i]=='\0')
            break;

        i++;
    }

    cout<<"Length of largest word in your array is: "<<maxLen<<endl;
    cout<<"And the word is: ";
    for(i=0; i<maxLen; i++){
        cout<<arr[i+maxSt];
    }
    cout<<endl;
    return 0;
}
