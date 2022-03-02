#include<iostream>
#include<set>

using namespace std;

int main()
{
 set<int> myset{1,2,3,4,5,6,7,8,9,10,11,23,21,34,45};
 for(auto i:myset)
  cout<<i<<" ";
 cout<<endl;
 
 auto nh=myset.extract(4);
 
 for(auto i:myset)
  cout<<i<<" ";
 cout<<endl;
 
 nh.value()=55;
 
 myset.insert(move(nh));
 for(auto i:myset)
  cout<<i<<" ";
 cout<<endl;
 
 nh.value();
 
 nh=myset.extract(next(myset.begin(),5));
 for(auto i:myset)
  cout<<i<<" ";
 cout<<endl;
 
 nh.value()=99;
 
 myset.insert(move(nh));
 for(auto i:myset)
  cout<<i<<" ";
 cout<<endl;
 return 0;
}
