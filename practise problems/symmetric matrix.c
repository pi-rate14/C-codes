#include<iostream>
#include<vector>
using namespace std;
int main()
{
int num;
cin>>num;
vector<vector<int> > matrix(num,vector<int>(num,0));
int i;
int j;
int flag=1;
vector<int> column;
for(j=0;j<num;j++)
{
column.clear();
int temp;
for(i=0;i<num;i++)
{cin>>temp;
matrix[j][i]=temp;
column.push_back(temp);
}
matrix.push_back(column);
}
for(i=0;i<num;i++)
{
for(j=0;j<num;j++)
{
if(matrix[i][j]!=matrix[j][i] && flag==1)
{
cout<<"Not symmetric";
flag=0;
break;
}
}
}
if(flag==1)
cout<<"Symmetric";
return 0;
}
