#include<iostream>
#include<set>

using namespace std;

int main()
{
 set<int> myset{1,2,3,4,5,6,7,8,2,1,2,3,3,4,6,7,8,9,10,21}; 
 
 for(auto i:myset)
  cout<<i<<" ";
 cout<<endl;
 
 myset.erase(next(myset.begin(),5));
 for(auto i:myset)
  cout<<i<<" ";
 cout<<endl;
 
 myset.erase(next(myset.begin(),4),myset.end());
 for(auto i:myset)
  cout<<i<<" ";
 cout<<endl;
 
 myset.clear();
 myset={3,4,5,2,3,6,7,8,9,10,22,34,56};
 
 for(auto i:myset)
  cout<<i<<" ";
 cout<<endl;
 
 myset.erase(4);
 
 for(auto i:myset)
  cout<<i<<" ";
 cout<<endl;
 
 return 0;
}
