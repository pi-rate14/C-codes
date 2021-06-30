void travel::get()
{
cin>>num_Of_Cities;
for(int i=0;i<num_Of_Cities;i++)
 {int x;
 string temp1;
 cin>>temp1>>x;
 for(int j=0;j<x;j++)
 {string temp;
 cin>>temp;
 city_Connection[temp1].push_back(temp);
 }
 }
cin>>source>>destn;
}
void travel::find_Route()
{
route.push_back(source);
while(route.back()!=destn)
{
 bool flag=true;
 vector<string> store=city_Connection[route.back()];
 sort(store.begin(),store.end());
 if(find(store.begin(),store.end(),destn)!=store.end())
 {route.push_back(destn);break;}
 for(int i=0;i<store.size();i++)
 if (find(route.begin(),route.end(),store[i])==route.end())
 {route.push_back(store[i]);flag=false;break;}
}
}
void travel::print_Route()
{
for(int i=0;i<route.size();i++)
 cout<<route[i]<<endl;
}
