#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main()
{
 multiset<int> mset{1,4,5,3,2,4,1,5,6,7,9,4,5,6};
 multiset<int> mset2{44,55,66,33,22,11,44,33,22};
 
 for(auto i:mset)
  cout<<i<<" ";
 cout<<endl;

 multiset<int>::iterator itr;
 itr=mset.insert(66);
 itr=mset.insert(77);
 itr=mset.insert(mset.end(),88);
 mset.insert(mset2.begin(),mset2.end());
 mset.insert({1,4,101,21,203,45});
 auto nh=mset.extract(5);
 mset2.insert(move(nh));
 
 for(auto i:mset)
  cout<<i<<" ";
 cout<<endl;
 
 for(auto i:mset2)
  cout<<i<<" ";
 cout<<endl;
 
 cout<<"After another extract "<<endl;
 nh=mset.extract(next(mset.begin(),15));
 mset2.insert(move(nh));
 for(auto i:mset)
  cout<<i<<" ";
 cout<<endl;
 
 for(auto i:mset2)
  cout<<i<<" ";
 cout<<endl;
 return 0;
} 
