#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<vector<int>>> v(2,vector<vector<int>>(2,vector<int>(2,0)));
    for(int i=0;i<2;i++)
      for(int j=0;j<2;j++)
        for(int k=0;k<2;k++)
           v[i][j][k]=5;
    for(int i=0;i<v.size();i++)
       for(int j=0;j<v[i].size();j++)
          for(int k=0;k<v[i][j].size();k++)
              cout<<v[i][j][k]<<" ";
    cout<<endl;
    return 0;
}
