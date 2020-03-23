#include<bits/stdc++.h>
using namespace std;
int main()
{      
    map<int,string> mp;
    for(int i=0;i<6;i++)
     {
         string s;
         cout<<"enter the string";
         cin>>s;
         mp.insert(pair<int,string>(i,s));
     }
      map<int,string>::iterator it;
     for(it=mp.begin();it!=mp.end();it++)
         cout<<it->first<<" = "<<it->second<<endl;
     cout<<"lowerbound  first and second"<<mp.lower_bound(0)->first<<" "<<mp.lower_bound(0)->second<<endl;
      cout<<"lowerbound  first and second"<<mp.lower_bound(2)->first<<" "<<mp.lower_bound(2)->second<<endl;
    mp.erase(2);
  cout<<"after"<<endl;
      for(it=mp.begin();it!=mp.end();it++)
         cout<<it->first<<" = "<<it->second<<endl;
    return 0;
}