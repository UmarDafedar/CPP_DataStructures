#include<iostream>
#include<set>
#include<functional> // greater, less, greater_equal,less_equal 
using namespace std;

int main()
{
 // by default, set uses std::less<int> functor as a comparator
 set<int> MySet{1,3,4,5,6,1,2,5,3,6,9,0,10};
 set<int> MySet2;
 
 cout<<MySet.size()<<endl;
 for(auto i:MySet)
  cout<<i<<" ";
 cout<<endl;
 
 //set<int,std::greater<int>> MySet2=MySet;
 //Since the comparator function is different 
 // MySet if of type set<int,std::less<int>>
 // and MySet2 if of type set<int,std::greater<int>> and are not equal and it fails
 
 set<char> MyCharSet({65,66,68,90,54,22,33});
 
 for(auto j:MyCharSet)
  cout<<j<<" ";
 cout<<endl;
 
 //MySet=MyCharSet; // Default assignment operator is provided by the compiler
 // MySet and MyCharSet are not same
 
 MySet2=MySet;
 for(auto i:MySet2)
  cout<<i<<" ";
 cout<<endl;
 
 
  
 return 0;
}
