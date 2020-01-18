#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n)
{
    int i,j,item;
    for (i=1;i<n;i++)
    {
        item=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>item)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=item;
    }
}

int main()
{
    int ar[1000],n;
    cout<<"How many integer sorted : ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    insertionsort(ar,n);
    /// Print arr after sorted....
        for (int i=0;i<n;i++)
    cout<<ar[i]<<" ";
    return 0;
}

