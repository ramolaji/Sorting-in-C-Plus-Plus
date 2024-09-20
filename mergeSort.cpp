#include<iostream>
using namespace std;

void merge(int *arr, int s,int e)
{
    int mid = s+(e-s)/2;
    int leftLen = mid-s+1;
    int rightLen = e-mid;

    int* left = new int[leftLen];
    int* right = new int[rightLen];

    int k=s;

    for(int i=0;i<leftLen;i++)
    {
        left[i]=arr[k];
        k++;
    }

    k=mid+1;

    for(int i=0;i<rightLen;i++)
    {
        right[i]=arr[k];
        k++;
    }

    int l_index=0;
    int r_index=0;
    int main_index=s;

    while(l_index<leftLen && r_index<rightLen)
    {
        if(left[l_index]<=right[r_index])
        {
            arr[main_index++] = left[l_index++];
        }

        else{
            arr[main_index++] = right[r_index++];
        }
    }

    while(l_index<leftLen)
    {
        arr[main_index++]=left[l_index++];
    }

    while(r_index<rightLen)
    {
        arr[main_index++]=right[r_index++];
    }

    delete[] left;
    delete[] right;
}



void sort(int *arr, int s,int e){
    if(s>=e)return;

    int mid=s+(e-s)/2;

    sort(arr,s,mid);
    sort(arr,mid+1,e);

    merge(arr,s,e);
}

int main()
{
    int arr[]={6,7,3,5,2};
    int n=5;
    int s=0;
    int e=n-1;

    sort(arr,s,e);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;

    return 0;

}