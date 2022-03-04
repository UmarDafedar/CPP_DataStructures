#include<iostream>
#include<map>
#include<functional>

using namespace std;

int main()
{
 map<int,string>::iterator itr;
 pair<map<int,string>::iterator,bool> result;
 
 map<int,string> mp; // Default constructor
 map<int,string> children = {{8,"Aasiya"},{9,"Anam"},{10,"AbdulKhaliq"},{11,"Ainaz"},{12,"Hurain"}};
 
 result=mp.insert(make_pair(1,"Manzoor"));
 result=mp.insert({2,"Umar"});
 mp.insert({{3,"Mohammad"},{4,"Afzal"},{5,"Arshad"},{6,"Jameela"},{7,"MohammadAli"}});
 mp.insert(children.begin(),children.end());
 itr=mp.insert(mp.end(),make_pair(13,"Heena"));
 mp.insert({{14,"UzmaTahseen"},{15,"Fareeda"},{16,"Anjum"}});
 
 
 for(auto i:mp)
  cout<<i.first<<" "<<i.second<<endl;
 
 cout<<mp[1]<<endl; // T& operator[](key& k);
 cout<<mp.at(12)<<endl; // T& at(key& k); out_of_range exception and bound check
 
 cout<<"Size of mp "<<mp.size()<<endl;
 
 if(mp.empty())
  cout<<"map is empty"<<endl;
 else
  cout<<"map is not empty"<<endl;
 
 cout<<"Max size of mp "<<mp.max_size()<<endl;
 
 cout<<"Forward Iterator "<<endl;
 for(map<int,string>::iterator itr1=mp.begin();itr1!=mp.end();itr1++)
  cout<<itr1->first<<" "<<itr1->second<<endl;
 
 cout<<"Const Forward Iterator "<<endl;
 for(map<int,string>::const_iterator citr=mp.cbegin();citr!=mp.cend();citr++)
  cout<<citr->first<<" "<<citr->second<<endl;
  
 cout<<"Reverse Iterator "<<endl;
 for(map<int,string>::reverse_iterator ritr=mp.rbegin();ritr!=mp.rend();ritr++)
  cout<<ritr->first<<" "<<ritr->second<<endl;
  
 cout<<"Const Reverse Iterator "<<endl;
 for(map<int,string>::const_reverse_iterator critr=mp.crbegin();critr!=mp.crend();critr++)
  cout<<critr->first<<" "<<critr->second<<endl;
 
 mp.insert_or_assign(17,"Dafe");
 for(auto i:mp)
  cout<<i.first<<" "<<i.second<<endl;
 
 mp.insert_or_assign(17,"Dafedar");
 result=mp.emplace(20,"Bidi");
 result=mp.emplace(make_pair(20,"Beedi"));
 mp.emplace_hint(mp.find(17),make_pair(18,"Khanapur"));
 for(auto i:mp)
  cout<<i.first<<" "<<i.second<<endl;
 system("clear");
 itr=mp.emplace_hint(mp.find(17),make_pair(18,"Khanapur"));
 if(result.second)
  cout<<"Inserted "<<endl;
 else
  cout<<"Not inserted"<<endl;
 for(auto i:mp)
  cout<<i.first<<" "<<i.second<<endl;
  
 result=mp.try_emplace(19,"Adi");
 itr=mp.try_emplace(mp.end(),21,"Belgaum");
 
 system("clear");
 
 //mp.clear();
 for(auto i:mp)
  cout<<i.first<<" "<<i.second<<endl;
  
 for(map<int,string>::iterator mitr=mp.begin();mitr!=mp.end();mitr++)
  if(mitr->first%2==0)
   mp.erase(mitr);
  
 for(auto& i:mp)
  cout<<i.first<<"-"<<i.second<<endl;

 
 for(map<int,string>::iterator mitr=mp.begin();mitr!=mp.end();mitr++)
  if(mitr->first%5==0)
   mp.erase(mitr->first);
 
 for(auto& i:mp)
  cout<<i.first<<"-"<<i.second<<endl;
 
 system("clear");
 mp.insert(children.begin(),children.end());
 for(auto& i:mp)
  cout<<i.first<<"-"<<i.second<<endl;
  
 mp.erase(mp.begin(),next(mp.begin(),4));
 
 for(auto& i:mp)
  cout<<i.first<<"-"<<i.second<<endl;
 return 0;
} 
