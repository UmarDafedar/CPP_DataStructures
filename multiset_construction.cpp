#include<iostream>
#include<set>

using namespace std;

int main()
{
 multiset<int> mset={1,2,3,3,3,2,3,2,4,5,6,4,3,5,6,7}; // Initializer list
 
 cout<<"mset ";
 for(auto i:mset)
  cout<<i<<" ";
 cout<<endl;
 
 multiset<int> mset2=mset; // Copy Construtor
 cout<<"mset2 ";
 for(auto i:mset2)
  cout<<i<<" ";
 cout<<endl;
 
 multiset<int> mset3; // default constructor
 if(mset3.empty())
  cout<<"set is empty"<<endl;
 
 mset3=mset2; // Copy Assignment Operator
 cout<<"mset3 ";
 for(auto i:mset3)
  cout<<i<<" ";
 cout<<endl;
 
 multiset<int> mset4(mset.begin(),mset.end());// Construtor with Range as an input
 cout<<"mset4 ";
 for(auto i:mset4)
  cout<<i<<" ";
 cout<<endl;
 
 multiset<int> mset5(move(mset)); // move constructor
 cout<<"mset5 ";
 for(auto i:mset5)
  cout<<i<<" ";
 cout<<endl;
 
 cout<<"mset ";
 for(auto i:mset)
  cout<<i<<" ";
 cout<<endl;
 
 
 
 return 0;
}
