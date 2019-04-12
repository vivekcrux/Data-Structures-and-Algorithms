#include <bits/stdc++.h>
using namespace std;

int LongestIncreasingSubsequenceLength(std::vector<int>& v) 
{ 
    if (v.size() == 0) 
        return 0; 
  
    std::vector<int> tail(v.size(), 0); 
    int length = 1;
  
    tail[0] = v[0]; 
    for (size_t i = 1; i < v.size(); i++) { 
  
        if (v[i] < tail[0]) 
            tail[0] = v[i]; 
  
        else if (v[i] > tail[length - 1]) 
            tail[length++] = v[i]; 
        else
            tail[upper_bound(tail.begin(),tail.begin()+length, v[i])-tail.begin()] = v[i]; 
    } 
  
    return length; 
}


int main()
{
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++)
  {
      cin>>a[i];
  }
  cout<<LongestIncreasingSubsequenceLength(a);
	return 0;
}
