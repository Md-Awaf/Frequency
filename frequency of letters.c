#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() {
  
    char s[4300];
    int len,i,a=0,cap[26],sam[26],num[10],j;
    printf("Enter the String:\n");
    scanf("%s",s);
    //Frequency of Uppper Case Letters
    for(i=0;i<26;i++)
    {
        for(j=0;s[j]!='\0';j++)
        {
            
            if(s[j]=='A'+i)
            {  
                  a++;
            }

        }
        cap[i]=a;
        a=0;
    }
    //Frequency of Lower Case Letters
    for(i=0;i<26;i++)
    {
        for(j=0;s[j]!='\0';j++)
        {
            
            if(s[j]=='a'+i)
            {  
                  a++;
            }
        }
        sam[i]=a;
        a=0;
    }
    //Frequency of Numbers
    for(i=0;i<10;i++)
    {
        for(j=0;s[j]!='\0';j++)
        {
            
            if(s[j]=='0'+i)
            {  
                a++;
            }
        }
        num[i]=a;
        a=0;
    }

    for(i=0;i<26;i++)
        printf("%c-%d  ",'A'+i,cap[i]);

    printf("\n");

    for(i=0;i<26;i++)
        printf("%c-%d  ",'a'+i,sam[i]);

    printf("\n");

    for(i=0;i<10;i++)
        printf("%c-%d  ",'0'+i,num[i]);

    printf("\n");

    int sum=0;
    
    for(i=0;i<26;i++)
        sum=sum+cap[i];
    for(i=0;i<26;i++)
        sum=sum+sam[i];
    for(i=0;i<10;i++)
        sum=sum+num[i];
    printf("Number of characters:%d",strlen(s));
    return 0;
}
