#include<iostream>
#include<set>
using namespace std;

int main()
{
 multiset<int> mset{1,4,5,3,2,4,1,5,6,7,9,4,5,6};
 
 for(auto i:mset)
  cout<<i<<" ";
 cout<<endl;
 
 multiset<int> mset2={3,4,5};
 
 for(auto i:mset2)
  cout<<i<<" ";
 cout<<endl;
 
 //Initializer list
 mset2={1,2,3,4,5,6,7,8,9,10};
 for(auto i:mset2)
  cout<<i<<" ";
 cout<<endl;
 
 // Copy assignmen operator
 mset2=mset;
 for(auto i:mset2)
  cout<<i<<" ";
 cout<<endl;
 
 //move assignment operator
 mset2=move(mset);
 cout<<"After Move"<<endl;
 for(auto i:mset2)
  cout<<i<<" ";
 cout<<endl;
 
 for(auto i:mset)
  cout<<i<<" ";
 cout<<endl;
 return 0;
}
