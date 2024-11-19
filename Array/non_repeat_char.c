#include<stdio.h>
int main()
{
    char s[]="racecar";
   
   printf("string is:%s\n",s);

   int freq[26]={0};
   
   for(int i=0;i<26;i++)
      printf("%d\t",freq[i]);
      printf("\n\n");
   
   for(int i=0;s[i] !='\0';i++)
     {
         freq[s[i]-'a']++;
     }
     
     for(int i=0;i<26;i++)
       {
           printf("%d\t",freq[i]);
       }
       printf("\n");
       
       for(int i=0;s[i]!='\0';i++)
        {
            if(freq[s[i]-'a']==1)
             {
                printf("Non repeated character :%c",s[i]);
             }
        }
       
             printf("\n");       
       return 0;
}
