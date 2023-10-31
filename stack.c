#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

int push(int x){
if(top<CAPACITY -1){
        top = top+1;
        stack[top]= x;
        printf("Succesfully added %d\n",x);

}
else{
    printf("this element have no space\n ");
}

}
int pop(){
    if(top>=0){
        int val = stack[top];
        top = top -1;
        return val;
    }
    printf("The value is empty");


return -1;
}
int peek(){
    if(top>=0){
        return stack[top];
    }
    printf("Exception from peek");



return -1;
}
int main()
{
    printf("implementary my code is c\n");
    push(10);
    push(20);
    push(30);
    printf("The pop item is%d\n",pop());
    push(40);
    printf("the number is%d\n",peek());

}
