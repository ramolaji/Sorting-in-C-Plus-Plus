#include<iostream>
using namespace std;

int main()
{
    int arr[] = {3,4,1,2,5,4,6};
    int n=7;

    for(int i=0;i<n;i++)
    {
        int mini = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini=j;
            }
        }
        if(mini!=i)

        {
            swap(arr[mini],arr[i]);
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}