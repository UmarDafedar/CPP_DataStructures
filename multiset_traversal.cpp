 #include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
 multiset<int> mset{1,4,5,3,2,4,1,5,6,7,9,4,5,6};
 
 for(auto i:mset)
  cout<<i<<" ";
 cout<<endl;
 
 for(multiset<int>::iterator itr=mset.begin();itr!=mset.end();itr++)
  cout<<*itr<<" ";
 cout<<endl;
 
 for(multiset<int>::const_iterator citr=mset.cbegin();citr!=mset.cend();citr++)
  cout<<*citr<<" ";
 cout<<endl;
 
 for(multiset<int>::const_reverse_iterator critr=mset.crbegin();critr!=mset.crend();critr++)
  cout<<*critr<<" ";
 cout<<endl;
 
 for(multiset<int>::reverse_iterator ritr=mset.rbegin();ritr!=mset.rend();ritr++)
  cout<<*ritr<<" ";
 cout<<endl;
 
 return 0;
}
