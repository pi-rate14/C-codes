 #include<iostream>
 using namespace::std;
 int numberOfSteps (int num) {
     int i=0,ctr=0;
     while(num!=0)
     {
         if(num%2==0)
         {
             num/=2;
             ctr++;
         }
         else
         {
             num-=1;
             ctr++;
         }
    }
    return ctr;
}
int main()
{
    int n;
    cin>>n;
    n=numberOfSteps(n);
    cout<<n;
}
