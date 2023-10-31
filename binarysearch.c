#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,56,67,78,};
    int item = 5;
    int left,right,middle;
    left = 0;
    right = 7;
    while(left<=right){

    middle=(right+left)/2;
    if(a[middle] == item ){
        printf("Item found at this item:%d\n",middle);
return 0;
    }
    else if(a[middle]<item){
        left = middle + 1;
    }
    else{
            right = middle -1;

    }

    }
    printf("item not found");




}

