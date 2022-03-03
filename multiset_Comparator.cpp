#include<iostream>
#include<set>

using namespace std;

int main()
{
 multiset<int> mset{1,2,3,4,5,5,5,5,5,3,2,2,4,1,2,6,7,8,9,10,11,23,12,12,34,56};
 // Default comparator
 cout<<"Default comparator - std::less_equal<int>"<<endl;
 for(auto i:mset)
  cout<<i<<" ";
 cout<<endl;
 
 multiset<int,std::less<int>> mset2{1,2,3,4,5,5,5,5,5,3,2,2,4,1,2,6,7,8,9,10,11,23,12,12,34,56};
 cout<<"less comparator - std::less<int>"<<endl;
 for(auto i:mset2)
  cout<<i<<" ";
 cout<<endl;
 
 multiset<int,std::greater<int>> mset3{1,2,3,4,5,5,5,5,5,3,2,2,4,1,2,6,7,8,9,10,11,23,12,12,34,56};
 cout<<"less comparator - std::greater<int>"<<endl;
 for(auto i:mset3)
  cout<<i<<" ";
 cout<<endl;
 
 multiset<int,std::greater_equal<int>> mset4{1,2,3,4,5,5,5,5,5,3,2,2,4,1,2,6,7,8,9,10,11,23,12,12,34,56};
 cout<<"less comparator - std::greater_equal<int>"<<endl;
 for(auto i:mset4)
  cout<<i<<" ";
 cout<<endl;
 return 0;
}
