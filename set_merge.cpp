#include<iostream>
#include<set>

using namespace std;

int main()
{
 set<int> p{1,2,3,4,5},q{5,4,7,8,9,10};
 cout<<"p :";
 for(auto i:p)
  cout<<i<<" ";
 cout<<endl;
 
 cout<<"q :";
 for(auto i:q)
  cout<<i<<" ";
 cout<<endl;
 
 p.merge(q);
 
 cout<<"p :";
 for(auto i:p)
  cout<<i<<" ";
 cout<<endl;
 
 cout<<"q :";
 for(auto i:q)
  cout<<i<<" ";
 cout<<endl;
 
 return 0;
}
