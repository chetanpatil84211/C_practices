#include<stdio.h>
#include<string.h>
char *upper(char *str1);
void lower(char *small);
void digit(char *digit);
void change(char *change);
void change_small(char *change_small);

int main()
{
     
     char str[]="NikHIl PaTIl_777";
     printf("str is :%s\n",str);
     char *ptr=upper(str);
     printf("Main  Print %s\n",ptr);
    
    lower(str);
    digit(str);
    change(str);
    printf("main str : %s\n",str);
    change_small(str);
    printf("mian str : %s\n",str);
    
printf("Length is change or not : %ld\n",strlen(str));
printf("Size of Byte change or Not : %ld\n",sizeof(str));
   
    return 0;
}

char *upper(char *str1)
  { 
     static  char big[20];
      int j=0,i;
      for( i=0;str1[i]!='\0';i++)
       {
            if(str1[i]>='A' && str1[i]<='Z')
             {
               big[j]=str1[i];
                j++;
             }
       }
       big[j]='\0';
      printf("Upper case  is %s\n",big);
      return big;
  }
  void lower(char *small)
  {  char  str2[20];int j=0;
      for(int i=0;small[i] !='\0';i++)
       {
           if(small[i]>='a' && small[i]<='z')
           {
             str2[j]=small[i]; 
             j++;
           }
       }
       str2[j]='\0';
       printf("lower  case is %s\n",str2);
  }
  
void digit(char *digit)
 {
     char di[20];
     int j=0;
     for(int i=0;digit[i]!='\0';i++)
     {
         if(digit[i]>='0' &&digit[i]<='9')
         {
             di[j]=digit[i];
             j++;
         }
     }
     di[j]='\0';
     printf("Digit is %s\n",di);
     printf("memory in Byte size %ld\n",sizeof(di));
     printf("Lenght is %ld\n",strlen(di));
     
     
  }
  void change(char *change)
  {
      for(int i=0;change[i] !='\0';i++)
       {
         if(change[i]>='a' && change[i]<='z')
          {
              change[i]=change[i]-32;
          }
       }
       printf("Change is function %s\n",change);
  }
  void change_small(char *change_small)
     {
         for(int i=0;change_small[i] !='\0';i++)
         {
            if(change_small[i]>='A' && change_small[i]<='Z')
             {
                 change_small[i]=change_small[i]+32;
             }
         }
         printf("Change_small fun : %s\n",change_small);
     }
  
/*
str is :NikHIl PaTIl_777
Upper case  is NHIPTI
Main  Print NHIPTI
lower  case is iklal
Digit is 777
memory in Byte size 20
Lenght is 3
Change is function NIKHIL PATIL_777
main str : NIKHIL PATIL_777
Change_small fun : nikhil patil_777
mian str : nikhil patil_777
Length is change or not : 16
Size of Byte change or Not : 17
*/
