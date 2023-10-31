#include<stdio.h>
int main()
{
    int arr[]={12,2,3,5,6};
    int i , j , size = 5;
    for(i = 0;i < size-1; i ++){
        for(j = 0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }
    printf("After sorting :\n");
    for(i = 0;i < size;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
