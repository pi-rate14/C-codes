#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct bank{
    char name[50];
    int actN;
    float bal;
};

struct mall{
    char name[50];
    int nItems;
    char itemName[10][50];
    float cost[10];
};

void main(){
    int n,m,i,j;
    int bankCtr = -1;
    int mallCtr = -1;

    scanf("%d",&n);
    struct bank bCust[n];
    for(i=0; i<n; i++){
        scanf("%s", bCust[i].name);
        if(strcmp(bCust[i].name,"Sherley") == 0){
            bankCtr = i;
        }
        scanf("%d", &bCust[i].actN);
        scanf("%f", &bCust[i].bal);
    }

    scanf("%d",&m);
    struct mall mCust[m];
    for(i=0; i<m; i++){
        scanf("%s", mCust[i].name);
        if(strcmp(mCust[i].name,"Sherley") == 0){
            mallCtr = i;
        }
        scanf("%d", &mCust[i].nItems);
        for(j=0;j<mCust[i].nItems;j++){
            scanf("%s", mCust[i].itemName[j]);
            scanf("%f", &mCust[i].cost[j]);
            if(i == mallCtr){
                printf("%s\n", mCust[i].itemName[j]);
                bCust[bankCtr].bal -= mCust[i].cost[j];
            }
        }
    }

    printf("%.2f", bCust[bankCtr].bal);
    cout<<fixed<<setprecision(2)<<bCustomer[ShirleyBIndex].balance<<" "<<endl;

