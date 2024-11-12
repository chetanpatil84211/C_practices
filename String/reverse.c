#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "Patil"; 
    printf("str is :%s\n",str);

    int n=strlen(str);
    printf("strlen(str):%d\n",n);
    
  
    for (int i = 0; i < n / 2; i++) 
	  {
        int temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
      }
    
   
    printf("new : %s\n", str);
    printf("new strlen(str):%ld\n",strlen(str));

    return 0;
}

