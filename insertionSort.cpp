#include<iostream>
using namespace std;

int main()
{
    int arr[] = {3,4,1,2,5,4,6};
    int n=7;

    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j;
        for( j=i-1;j>=0;j--)
        {
            if(arr[j]<temp)
            {
                break;
            }
            arr[j+1]=arr[j];
        }

        arr[j+1]=temp;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;


}