#include <stdio.h>

int main(){

    int a,b,c;

   printf("your first value  :");
    scanf("%d", &a);

    printf("your secound value :");
    scanf("%d" ,&b);

    printf("your third value :");
    scanf("%d" ,&c);

   if (a<b)
   {
    if (a<c)
    {
        printf("first number is minimum :%d",a);
    }else{
        printf("third number is minimum :%d",c);
    }
   }else{
    if (b<c)
    {
        printf("secound number is minimum :%d",b);
    }else{
         printf("third number is minimum :%d",c);
    }
    
   }
   
    
    
    

    

    return 0;
}