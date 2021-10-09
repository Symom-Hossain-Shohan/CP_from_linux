#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main()
{
    char st[100];
    char word1[100],word2[105];
    gets(st);
    
    scanf("%s %s",word1,word2);
    int n=strlen(st);
    char tmp[100];
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(st[i]==' ' )
        {
            tmp[j]='\0';
            if(strcmp(word1,tmp)==0) printf("%s ",word2);
            else printf("%s ",tmp);
            memset(tmp,'\0',sizeof(tmp));
            j=0;
        }
        else 
        {
            tmp[j]=st[i];
            j++;
        }
    }
    if(strcmp(tmp,word1)==0) printf("%s\n",word2);
    else printf("%s\n",tmp);

}