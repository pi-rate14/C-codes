void mismatchDimension::error_Msg() const{
 cout<<"Dimension of matrices do not match"<<endl;
}
template<class T> void matrix<T>::get(){
int i, j;
cin>>row>>col;
for(i=0; i<row; i++)
{
for(j=0; j<col; j++)
{
cin>>ele[i][j];
}
}
}
template<class T> bool matrix<T>::check_Sparse()
{
int i=0, j, c=0;
int t=row*col;
for(; i<row; i++)
{
for(j=0; j<col; j++)
{
if(ele[i][j]==0)
c++;
}
}
if(c>t/2)
return true;
else
return false;
}
template<class T> matrix<T> matrix<T>::add(matrix<T> &a){
int i, j;
if(row!=a.row || col!=a.col)
throw mismatchDimension();
else
for(i=0; i<row; i++)
{
for(j=0; j<col; j++)
{
a.ele[i][j]+=ele[i][j];
}
}
return a;
}
template<class T> void matrix<T>::print(){
int i=0, j;
for(; i<row; i++)
{
for(j=0; j<col; j++)
{
cout<<ele[i][j]<<endl;
}
}
}
