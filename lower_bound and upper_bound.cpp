#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/*Implementation of lower_bound function
/*Returns index of the first element in the range [s,e] which 
does not compare less than val.
*/
int lower_bound(int arr[],int s,int e,int val)
{
    if(s<e)
    {
        int mid = (s+e)/2;
        if(arr[mid] == val)
            return mid;
        else if(arr[mid]>val)
        {
            return lower_bound(arr,s,mid,val);
        }
        else
        {
            return lower_bound(arr,mid+1,e,val);
        }
    }
    if(s==e)
    {
        if(arr[s]>=val) return s;
        else    return s+1;
    }
}

/*Implementation of upper_bound function
Returns index of the first element in the range [s,e] which 
compares greater than val.
*/
int upper_bound(int arr[],int s,int e,int val)
{
    if(s<e)
    {
        int mid = (s+e)/2;
        if(arr[mid] == val)
            return mid+1;
        else if(arr[mid]>val)
        {
            return upper_bound(arr,s,mid,val);
        }
        else
        {
            return upper_bound(arr,mid+1,e,val);
        }
    }
    if(s==e)
    {
        return s+1;
    }
}

int main()
{
    int n,k,i,j,a[100001];
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    j = lower_bound(a,0,n-1,1000);
    j = upper_bound(a,0,n-1,5);
    cout<<j<<endl;
    return 0;
}
