 #include<iostream>
 #include<string.h>
 using namespace:: std;
 void defangIPaddr(string address) {
        int i=0,j=0;
        int len = address.size();
        string temp="                      ";

        while(i!=(len+6))
        {
            if(address[j]!='.')
            {
                temp[j]=address[i];
                j++;
            }
            else
            {
                temp[j]='[';
                temp[j+1]='.';
                temp[j+2]=']';
                j+=3;
            }
            i++;
        }
        cout<<temp;
    }
int main()
{
    string ip;
    ip = "1.1.1.1";
    defangIPaddr(ip);
}
