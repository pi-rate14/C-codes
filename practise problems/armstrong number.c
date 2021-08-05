#include<iostream>
using namespace::std;
int main(){
    int num,dig=0,an=0;
    int t_num=num;
    while(t_num){
        t_num = t_num/10;
        dig++;
    }
    while(num){
        unit = num%10;
        an += unit^dig;
        num /= 10;
    }
    if(an==num){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}
