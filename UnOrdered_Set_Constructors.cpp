#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
 unordered_set<int> uset(15); // Default Constructor
 int rn=0;
 if(uset.empty())
  cout<<"Unordered Set is Empty"<<endl;
 else
  cout<<"Unordered Set is not Empty "<<endl;
 
 cout<<"Bucket Size is "<<uset.bucket_count()<<endl;
 
 for(int i=0;i<100;i++)
 {
  rn=rand()%200;
  uset.insert(rn);
  cout<<i<<" Bucket Size is "<<uset.bucket_count()<<endl;
 }
 
 system("clear");
 
 for(auto i:uset)
  cout<<"("<<i<<" "<<uset.bucket(i)<<"),";
 cout<<endl;
 
 unordered_set<int> uset2{1,2,3,4,99,44,32,81,9}; // Initializer list
 cout<<uset2.bucket_count()<<endl;
 for(auto i:uset2)
  cout<<"("<<i<<" "<<uset2.bucket(i)<<"),";
 cout<<endl;
 
 unordered_set<int> uset3(uset2.begin(),next(uset2.begin(),5),5); // Range 
 cout<<uset3.bucket_count()<<endl;
 for(auto i:uset3)
  cout<<"("<<i<<" "<<uset3.bucket(i)<<"),";
 cout<<endl;
 
 for(unordered_set<int>::iterator itr=uset2.begin();itr!=uset2.end();itr++)
  cout<<*itr<<" ";
 cout<<endl;
 
 unordered_set<int> uset4(uset3);
 for(auto i:uset4)
  cout<<"("<<i<<" "<<uset4.bucket(i)<<"),";
 cout<<endl;
 
 for(unordered_set<int>::iterator itr=uset4.begin();itr!=uset4.end();itr++)
  cout<<*itr<<" ";
 cout<<endl;
 
 unordered_set<int> uset5(move(uset4)); // Move Constructor
 for(unordered_set<int>::iterator itr=uset4.begin();itr!=uset4.end();itr++)
  cout<<*itr<<" ";
 cout<<endl;
 
 for(unordered_set<int>::iterator itr=uset5.begin();itr!=uset5.end();itr++)
  cout<<*itr<<" ";
 cout<<endl;
 
 return 0;
}
