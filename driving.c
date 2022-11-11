#include<stdio.h>
int main(){
     int age;
     int vippass = 0;
    vippass = 1;
     printf("Enter your age\n");
     scanf(" %d", &age);
     if(age>=90){
         printf("You cant drive\n");
     }
     else{
         printf("You can drive\n");
     }     

     if((age==45) || vippass==1);
     {
        printf("Renew you License\n");
     }
    
     
return 0;
}