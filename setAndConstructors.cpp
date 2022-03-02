#include<iostream>
#include<set>

using namespace std;

template <typename T>
void DisplaySet(set<T> inpset)
{
 cout<<"Size of set "<<inpset.size()<<endl;
 if(inpset.empty())
  cout<<"set is empty"<<endl;
 for(auto i:inpset)
  cout<<i<<" ";
 cout<<endl;
 
}

int main()
{
 set<int> set1;// Default constructor
 set1.insert(4);
 DisplaySet(set1);
 
 set<char> charset={65,66,67,68,19,30,40,97}; // Initializer list
 DisplaySet(charset);
 
 set<char> charset2(move(charset)); //move constructor
 DisplaySet(charset);
 DisplaySet(charset2);
 
 set<char> charset3({66,67,68,59,20,32,43,56,56,8,90,100,21,22,31});
 DisplaySet(charset3);
 set<char> charset4(charset3);// Copy Constructor
 DisplaySet(charset4);

 set<char> charset5(charset4.begin(),next(charset4.begin(),7)); // Range as input parameter
 DisplaySet(charset5); 
 return 0;
}
