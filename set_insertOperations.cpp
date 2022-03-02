#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main()
{
 set<string> MySet{"BeStrong","GoodWork","PositiveAttitude","GoodThings","Success"}; 
 set<string> MySet2{"UK","London","Canada"};
 if(MySet.empty())
  cout<<"My Set is empty "<<endl;
 
 for(auto i:MySet)
  cout<<i<<" ";
 cout<<endl;
 
 // std::pair<iterator,bool> insert( const value_type& value );
 pair<set<string>::iterator,bool> result=MySet.insert("StayStrong");
 if(result.second)
  cout<<"Inserted- "<<*result.first<<endl;
 else
  cout<<"Failed to Insert"<<endl;
  
 result=MySet.insert("StayStrong");
 if(result.second)
  cout<<"Inserted"<<endl;
 else
  cout<<"Failed to Insert- "<<*result.first<<endl;
 
 for(auto i:MySet)
  cout<<i<<" ";
 cout<<endl;
 
 // void insert( std::initializer_list<value_type> ilist );
 MySet.insert({"BeStrong","BePatient","GoodWork","PositiveAttitude","GoodThings","Success"});
  for(auto i:MySet)
  cout<<i<<" ";
 cout<<endl;
 
 // iterator insert( iterator hint, const value_type& value );
 set<string>::iterator itr =MySet.insert(MySet.end(),"TrustAllah");
 for(auto i:MySet)
  cout<<i<<" ";
 cout<<endl;
  
 //template< class InputIt > void insert( InputIt first, InputIt last );
 MySet.insert(MySet2.begin(),MySet2.end());
 for(auto i:MySet)
  cout<<i<<" ";
 cout<<endl;
 
 set<string> MySet3{"Onsite","Opportunity"};
 
 MySet.insert(move(*MySet3.begin()));
 
 for(auto i:MySet)
  cout<<i<<" ";
 cout<<endl;
 
 for(auto i:MySet3)
  cout<<i<<" ";
 cout<<endl;
 
 
 
 // // for(auto i:MySet)
 // //  cout<<i<<" ";
 // // cout<<endl;
 
 // vector<set<string>> VectorOfStringSet;
 // VectorOfStringSet.push_back(MySet);
 // VectorOfStringSet.push_back(MySet);
 
 // set<string> str;
 
 // for(vector<set<string>>::iterator itr=VectorOfStringSet.begin();itr!=VectorOfStringSet.end();itr++)
 // {
 //  str=*itr;
 //  for(auto i:str)
 //   cout<<i<<" ";
 //  cout<<endl;
 // }
 
 
 return 0;
}
