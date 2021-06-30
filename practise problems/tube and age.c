#include<stdio.h>
#include<string.h>

struct players{
    char name[50];
    int age,size;
};

void main(){
    int n,i;
    char p[50];
    int pindex;
    scanf("%d",&n);
    struct players player[n];

    for(i=0;i<n;i++){
        scanf("%s",player[i].name);
        scanf("%d",&player[i].age);
        scanf("%d",&player[i].size);
    }
    scanf("%s",p);

    for(i=0;i<n;i++){
        if(strcmp(player[i].name,p) == 0){
            pindex = i;
            break;
        }
    }

    for(i=0;i<n;i++){
        if((player[i].age < player[pindex].age) && (player[i].size < player[pindex].size)){
            printf("%s\n",player[i].name);
        }
    }
}
