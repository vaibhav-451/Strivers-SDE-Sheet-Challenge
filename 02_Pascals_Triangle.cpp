#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<long long int> forOne;
  forOne.push_back(1);
  vector<vector<long long int>> ans;
  ans.push_back(forOne);
  if(n==1)
    return ans;

  for(int i = 0 ; i<n-1 ; i++)
  {
    vector<long long int> temp;
    temp.push_back(1);
    for(int k = 0 ; k<ans[i].size()-1 ; k++)
    {
      temp.push_back(ans[i][k]+ans[i][k+1]);
    }
    temp.push_back(1);
    ans.push_back(temp);
  }
  return ans;
}
