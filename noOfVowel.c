#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int n=strlen(s);
    int vowel=0,consonant=0;
    for(int i=0;i<n;i++)
    {
        char c=tolower(s[i]);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') vowel++;
        else consonant++;
    }
    printf("Number of vowel is %d\n",vowel);
    printf("Number of consonant is %d\n",consonant);
}