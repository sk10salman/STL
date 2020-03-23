#include<bits/stdc++.h>
using namespace std;
int main()
{
        vector<vector<int>> v (3,vector<int>(2,0));
        v[0][0]=1;
        v[0][1]=2;
        v[1][0]=3;
        v[1][1]=4;
        v[2][0]=5;
        v[2][1]=6;
        for(int i=0;i<v.size();i++)
           for(int j=0;j<v[i].size();j++)
              cout<<v[i][j]<<" ";
        cout<<endl;

        //using iterator

        vector<vector<int>>::iterator it1;
        vector<int>::iterator it2;
       for(it1=v.begin();it1!=v.end();it1++)
         for(it2=(*it1).begin();it2!=(*it1).end();it2++)
            cout<<*it2<<" ";
        cout<<endl;
        return 0;
}