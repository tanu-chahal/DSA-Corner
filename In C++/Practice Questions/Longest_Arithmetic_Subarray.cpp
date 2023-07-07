//To find longest continuous arithmetic sub-array from an array : RUNS Perfectly :)
//Question From Google Kickstart Program

#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter the array length: ";
    cin>>n;

    int arr[n];
    int pd, cd, len, ans, j;

    cout<<endl;
    cout<<"Enter array elements: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

    pd = arr[1]-arr[0]; //previous common difference
    ans=2;
    len = 2;

    j=2;
    while(j<n)
    {
      cd = arr[j]-arr[j-1];
      if(pd == cd)
      {
       len++;
      }
      else
      {
          pd = cd;
          len = 2;
      }
      ans = max(len,ans);
      j++;
    }

    cout<<"The length of longest arithmetic sub-array in your array is: "<<ans<<endl;

    return 0;
}
