#include<iostream>
#include<set>
#include<functional>

using namespace std;

int main()
{
 set<int> set1{1,7,2,3,5,6,8,3,8,8,3,5,6};
 
 cout<<"set1 :";
 for(auto i:set1)
  cout<<i<<" ";
 cout<<endl;
 
 set<int,std::greater<>> set2{1,7,2,3,5,6,8,3,8,8,3,5,6};
 
 cout<<"set2 :";
 for(auto i:set2)
  cout<<i<<" ";
 cout<<endl;
 
 set<int,std::greater<int>> set3{1,7,2,3,5,6,8,3,8,8,3,5,6};
 
 cout<<"set3 :";
 for(auto i:set3)
  cout<<i<<" ";
 cout<<endl;
 
 set<int,std::greater_equal<int>> set4{1,7,2,3,5,6,8,3,8,8,3,5,6,9};
 
 cout<<"set4 :"; // we can have duplicates in set using greater_equal or less_equal
 for(auto i:set4)
  cout<<i<<" ";
 cout<<endl;

 set<int,std::less_equal<int>> set5{1,1,2,2,1,1,1,1,1,1,1,1,1,2,2,2};
 
 cout<<"set5 :"; // we can have duplicates in set using greater_equal or less_equal
 for(auto i:set5)
  cout<<i<<" ";
 cout<<endl;
 return 0;
}
