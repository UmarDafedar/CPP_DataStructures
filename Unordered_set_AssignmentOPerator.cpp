#include<iostream>
#include<unordered_set>

using namespace std;

void Log(string str)
{
 cout<<str<<" :";
}

int main()
{
 unordered_set<int> uset({1,9,99,0,11,24,32,18,7,5});
 
 Log("uset");
 for(auto i:uset)
  cout<<i<<" ";
 cout<<endl;
 
 Log("uset");
 for(auto itr=uset.begin();itr!=uset.end();itr++)
  cout<<*itr<<" ";
 cout<<endl;
 
 unordered_set<int> uset2;
 uset2=uset; // Copy Assignment Operator
 Log("uset2");
 for(auto itr=uset2.begin();itr!=uset2.end();itr++)
  cout<<*itr<<" ";
 cout<<endl;
 
 unordered_set<int> uset3;
 uset3=move(uset2); // Move Assignment Operator
 Log("uset2");
 for(auto itr=uset2.begin();itr!=uset2.end();itr++)
  cout<<*itr<<" ";
 cout<<endl;
 
 Log("uset3");
 for(auto itr=uset3.begin();itr!=uset3.end();itr++)
  cout<<*itr<<" ";
 cout<<endl;
 
 uset2={18,22,31,78,91,23,21}; // Initializer List
 Log("uset2");
 for(auto itr=uset2.begin();itr!=uset2.end();itr++)
  cout<<*itr<<" ";
 cout<<endl;
 
 return 0;
}
