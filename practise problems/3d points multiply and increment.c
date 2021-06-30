#include< iostream >
using namespace std;
class dim
{
    int a,b,c;
    public :
    void get()
    {
        cin>>a>>b>>c;
    }
    void increment(int val)
    {
        a+=val;
        b+=val;
        c+=val;
    }
    void increment(int Int_Input_1,int Int_Input_2)
    {
        a*=Int_Input_1+Int_Input_2;
        b*=Int_Input_1+Int_Input_2;
        c*=Int_Input_1+Int_Input_2;
    }
    void increment(int Int_Input_1,int Int_Input_2,int Int_Input_3)
    {
        a+=Int_Input_1;
        b+=Int_Input_2;
        c+=Int_Input_3;
    }
    void print()
    {
        cout<<a<<endl<<b<<endl<<c<<endl;
    }
};
