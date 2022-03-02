#include<iostream>
#include<set>

using namespace std;

int main()
{
 set<int> MySet{1,2,3,4,5,6,7,8,9,0,10,22,12,12,34,56};
 
 if(MySet.empty())
  return 0;
 
 cout<<"Size of set "<<MySet.size()<<endl;
 cout<<"max size supported for set "<<MySet.max_size()<<endl;
 
 for(auto i:MySet)
  cout<<i<<" ";
 cout<<endl;
 
 for(set<int>::iterator itr=MySet.begin();itr!=MySet.end();itr++)
  cout<<*itr<<" ";
 cout<<endl;
 
 for(set<int>::const_iterator citr=MySet.cbegin();citr!=MySet.cend();citr++)
  cout<<*citr<<" ";
 cout<<endl;
 
 for(set<int>::reverse_iterator ritr=MySet.rbegin();ritr!=MySet.rend();ritr++)
  cout<<*ritr<<" ";
 cout<<endl;
 
 for(set<int>::const_reverse_iterator critr=MySet.crbegin();critr!=MySet.crend();critr++)
  cout<<*critr<<" ";
 cout<<endl;
 
 return 0;
}
