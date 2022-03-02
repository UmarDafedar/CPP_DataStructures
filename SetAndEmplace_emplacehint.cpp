#include<iostream>
#include<set>

using namespace std;

int main()
{
 set<int> set1={1,2,3,4,5,6,7,8,9,10};
 
 for(auto i:set1)
  cout<<i<<" ";
 cout<<endl;
 
 pair<set<int>::iterator,bool> result;
 result=set1.emplace(21);
 
 for(auto i:set1)
  cout<<i<<" ";
 cout<<endl;
 
 set<int>::iterator itr=set1.emplace_hint(next(set1.begin(),5),44);
 
 for(auto i:set1)
  cout<<i<<" ";
 cout<<endl;
 return 0;
}
