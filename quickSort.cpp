#include<iostream>
using namespace std;

int partition(int arr[],int s,int e)
{
    int pivot_index=s;
    int pivot = arr[s];

    int count = 0;

    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }

    int right_index = count+s;
    swap(arr[pivot_index],arr[right_index]);
    pivot_index = right_index;

    int i=s;
    int j=e;

    while(i<pivot_index && j>pivot_index)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }

        while(arr[j]>pivot)
        {
            j--;
        }

        if(i<pivot_index && j>pivot_index)
        {
            swap(arr[i],arr[j]);
        }
    }

    return pivot_index;
}

void quickSort(int arr[],int s,int e)
{
    if(s>=e)return;

    int p=partition(arr,s,e);

    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main()
{
    int arr[] = {8,6,30,5,50,1,5,65};
    int n=8;
    int s=0;
    int e=n-1;

    quickSort(arr,s,e);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}