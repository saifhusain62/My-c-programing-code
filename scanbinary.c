#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);

    int a[size];
    printf("Enter the element of array:");
    for(int i = 0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int item;
    printf("Enter the item you search:");
    scanf("%d",&item);


    int left,middle,right;
   while(left<=right){

    right = size - 1;
    middle=(right+left)/2;

    if(a[middle]==item){

        printf("It is correct value:%d\n",middle);

        return 0;
    }
    else if(a[middle]<item){
        left = right + 1;
    }
    else{
        right = middle - 1;
    }
    printf("item not found\n");
   }
}




