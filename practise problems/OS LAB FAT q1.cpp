#include<iostream>
using namespace::std;

int gcd(int a,int b) {
   int temp;
   while(b > 0) {
      temp = b;
      b = a % b;
      a = temp;
   }
   return a;
}
int main() {
    int cpt[3], sum=0;
for (int i=0;i<3;i++){
    cout<<"enter capacity of drink "<<i+1<<" ";
    cin>>cpt[i];
    sum+= cpt[i];
    if(cpt[i]<=400){
        cout<<"minimum quantity must be 400 litres";
        break;
    }
}
   int n = 3;
   int r = cpt[0];
   for(int j=1; j<n; j++) {
      r = gcd(r, cpt[j]);

   }
   cout<< "number of containers required = "<<sum/r;
   return 0;
}



