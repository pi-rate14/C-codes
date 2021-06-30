#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char str[20],ch,ach;
    int freq[26],ctr,len;
    for (ctr=0;ctr<26;ctr++)
    {
        freq[ctr]=0;
        scanf("%[^\n]s",str);
        len = strlen(str);
    }
    for(ctr=0;ctr<len;ctr++)
    {
        ch = str[ctr];
        if(isalpha(ch))
        {
            ch = tolower(ch);
            freq[ch-'a']++;
        }
    }
    ach = 'a';
    for(ctr=0;ctr<26;ctr++)
    {
        printf("%c\t%d\n",ach+ctr,freq[ctr]);
    }
}
