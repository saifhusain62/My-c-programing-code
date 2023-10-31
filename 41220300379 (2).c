#include<stdio.h>

int is_prime(int h){

if(h<=1){

    return 0;

}
if(h<=3){
    return 1;

}
if(h%2 == 0 || h%3 == 0){
    return 0;

}
}



int main()
{
    int num;

    printf("Enter the number:\n");
    scanf("%d",&num);


    if(is_prime(num)){

        printf("%d is a prime\n ",num);
    }
    else{

        printf("%d is not a prime \n",num);
    }
}
