#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n)
{
    int i,j,index,temp;
    for(i=0;i<n-1;i++)
    {
        index=i;
        for (j=i+1;j<n;j++)
        {
            if (arr[j]<arr[index])
            {
                index=j;
            }
        }
        if (index!=i)
        {
            temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;
        }
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

    selectionsort(ar,n);
    /// Print arr after sorted....
        for (int i=0;i<n;i++)
    cout<<ar[i]<<" ";
    return 0;
}
