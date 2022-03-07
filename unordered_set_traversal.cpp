#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
 unordered_set<int> uset({1,2,3,99,45,23,12,89,56,43,32,78});
 cout<<uset.bucket_count()<<endl;
 //bucket numbers 0,1,2,3,4,5,6,7,8,9,10,11,12
 for(auto i:uset)
  cout<<"("<<i<<"-"<<uset.bucket(i)<<")";
 cout<<endl;
 
 for(auto itr=uset.begin();itr!=uset.end();itr++)
  cout<<*itr<<" ";
 cout<<endl;
 
 // for(auto itr=uset.begin();itr!=uset.end();itr++)
 //  if(*itr==78)
 //   *itr=79;
 
 //*** Can not Modify the values as modifying will corrupt the container
 
 for(auto itr=uset.cbegin();itr!=uset.cend();itr++)
  cout<<*itr<<" ";
 cout<<endl;
   
 return 0;
}
