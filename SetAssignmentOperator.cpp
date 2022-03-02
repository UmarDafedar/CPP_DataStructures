#include<iostream>
#include<set>
#include<string>

using namespace std;

template <typename T>
void Display(set<T> inp)
{
 if(inp.empty())
 {
  cout<<"The set is empty"<<endl;
  return;
 }
 cout<<"Size of set "<<inp.size()<<endl;
 for(auto i:inp)
  cout<<i<<" ";
 cout<<endl;
}


int main()
{
 set<string> str {"Umar","Dafedar","Uzma","Anam","Hurain"};
 Display(str);
 set<string> str2 {"Attitude","Positive","GoodWork","GoodThings","KeepUp"};
 str=str2; //Copy Assignment operator
 Display(str);
 str2={"UUU","VVVV","CCCC","EEEE"}; // Assigning with initializer list
 Display(str2);
 
 str=move(str2); // Move assignment operator
 Display(str);
 Display(str2);
 return 0;
}
