#include<iostream>
#include<math.h>
using namespace::std;
int main(){
    int num,dig=0,an=0,unit=0;
    cin>>num;
    int t_num=num;
    while(t_num){
        t_num = t_num/10;
        dig++;
    }
    while(num){
        unit = num%10;
        cout<<"unit: "<<unit<<endl;
        an += pow(unit,dig);
        num /= 10;
    }
    cout<<an;
    if(an==num){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
