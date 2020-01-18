#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int mid,int r);
void mergesort(int arr[],int l,int r);
int main()
{
//	freopen("input.text","r",stdin);
//	freopen("output.text","w",stdout);

	int ar[1000],n;
    cout<<"How namy elements on this array : ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
    	cin>>ar[i];
    }
    mergesort(ar,0,n-1);

    for (int i=0;i<n;i++)
    	cout<<" "<<ar[i];
    cout<<endl;
    return 0;
}

void mergesort(int arr[],int l,int r)
{
	if (l < r)
	{
		int mid=l+(r-l)/2;

	    mergesort(arr,l,mid);
	    mergesort(arr,mid+1,r);

	    merge(arr,l,mid,r);

	}
}

void merge(int arr[],int l,int mid,int r)
{
    int i,j,k;
    int n1=mid -l+1;
    int n2=r-mid;
    int le[n1],ri[n2];

    for(i=0;i<n1;i++)
    {
        le[i]=arr[l+i];
    }
    for(j=0;j<n2;j++)
    {
        ri[j]=arr[mid+1+j];
    }
    i=0;
    j=0;
    k=l;

    while(i < n1 && j < n2)
    {
       if (le[i] <= ri[j])
       {
            arr[k]=le[i];
            i++;
       }
       else
       {
            arr[k]=ri[j];
            j++;
       }
       k++;
    }

    while(i<n1)
    {
        arr[k]=le[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k]=ri[j];
        j++;
        k++;
    }
}
