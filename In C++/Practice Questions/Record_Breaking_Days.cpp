//To get the number of record breaking days from a list number of visitors on N days
//Question from Google

//Condition for A Record Breaker Day
//Number of visitors on the day > Number of visitors from each previous day
//Number of visitors on the day > Number of visitors on the following day

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the array length: ";
    cin>>n;
    cout<<endl;

    if(n<2)
    {
        cout<<"Array length can't be smaller than 2"<<endl;
        return 0;
    }

    int arr[n+1];
    cout<<"Enter array elements: ";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    arr[n] = -1; //for last element

    int record = 0;
    int largest = arr[0];

    cout<<"Indexes of record breakers: ";
    for(int i=0; i<n; i++)
    {
        if(i==0 && arr[i]>arr[i+1])
        {
                record++;
                cout<<i<<" ";
        }
        else
        {
            if(arr[i]>largest && arr[i]>arr[i+1])
            {
                record++;
                cout<<i<<" ";
            }
             largest = max(arr[i],largest);
        }
    }
    cout<<endl;

    cout<<"Number of record breaking days in your data are: "<<record<<endl;
    return 0;
}
