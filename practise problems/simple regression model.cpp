#include<iostream>
using namespace::std;
int main()
{
    float x[100],y[100],xi=0,yi=0,xsqr=0,ysqr=0,xiyi=0,xbar,ybar,Sxy,Sxx,B1,B0,xplain;
    int n;
    cout<<"enter n(number of pairs) : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"enter x"<<i<<": ";
        cin>>x[i];
        xi+=x[i];
        xsqr += x[i]*x[i];
        cout<<"enter y"<<i<<": ";
        cin>>y[i];
        yi+=y[i];
        ysqr += y[i]*y[i];
        xiyi += x[i]*y[i];
    }
    xbar = xi/n;
    ybar = yi/n;
    Sxy = xiyi - ((1/n)*(xi*yi));
    Sxx = xsqr - ((1/n)*(xi*xi));
    B1 = Sxy/Sxx;
    B0 = ybar - (B1*xbar);

    cout<<"xi="<<xi<<endl<<"yi="<<yi<<endl<<"xsqr="<<xsqr<<endl<<"ysqr="<<ysqr<<endl<<"xiyi="<<xiyi<<endl<<"xbar="<<xbar<<endl<<"ybar="<<ybar<<endl<<"Sxy="<<Sxy<<endl<<"Sxx="<<Sxx<<endl<<"B1="<<B1<<endl<<"B0="<<B0<<endl;
    cout << "Regression Equation is: Yi = "<<B0<<" + "<<B1<<"Xi "<<"+ e"<<endl;
    cout<<endl<<"enter explanatory value: ";
    cin >> xplain;
    cout << "Response value is: "<<B0+(B1*xplain);
    return 0;
}



