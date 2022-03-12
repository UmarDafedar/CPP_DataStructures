#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

int value=0;
mutex m1,m2;

void DisplayValue()
{
 cout<<"Display Function is called "<<endl;
 cout<<"Display Function is trying to get m1 lock"<<endl;
 m1.lock();
 cout<<"Display Function is trying to get m2 lock"<<endl;
 m2.lock();
 while(value<100)
 {
  cout<<value<<endl;
  this_thread::sleep_for(1s);
 }
 m2.lock();
 cout<<"Display Function is releasig m2 lock"<<endl;
 m1.lock();
 cout<<"Display Function is releasig m1 lock"<<endl;
 
}

void ModifyValue()
{
 cout<<"Modify Function is called "<<endl;
 cout<<"Modify Function is trying to get m1 lock"<<endl;
 m2.lock();
 cout<<"Modify Function is trying to get m2 lock"<<endl;
 m1.lock();
 for(int i=0;i<=100;i++)
 {
  value=i;
  this_thread::sleep_for(1s);
 }
 m1.lock();
 cout<<"Modify Function is releasig m1 lock"<<endl;
 m2.lock();
 cout<<"Modify Function is releasig m2 lock"<<endl;
 
}

int main()
{
 thread t1(ModifyValue),t2(DisplayValue);
 t1.join();t2.join();
 return 0;
}
