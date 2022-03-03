#include<iostream>
#include<set>
#include<iterator>

using namespace std;

void Log(string inp)
{
 cout<<inp<<" ";
}

int main()
{
 multiset<int> mset{1,4,5,3,2,4,1,5,6,7,9,4,5,6};
 
 for(auto i:mset)
  cout<<i<<" ";
 cout<<endl;
 
 //bool empty();
 if(mset.empty())
  Log("multiset is empty");
 else
  Log("multiset is not empty");
 cout<<endl;
 
 Log("size of multiset");
 Log(to_string(mset.size()));
 cout<<endl;
 
 cout<<"Maximum size of multiset "<<mset.max_size()<<endl;

 
 
 return 0;
}
