#include<iostream>

using namespace std;

int main()
{
    int n,i,j,temp;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<endl;
    int* arr = new int[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    } 

    cout<<"input elements are:";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    cout<<"elements after sorting: ";

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;

    return 0;

}