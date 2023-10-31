#include<stdio.h>
#include<conio.h>
int main()
{
    int NumberTerm;
    printf("Enter your lucas serios Number :");
    scanf("%d",&NumberTerm);

    int first=2;
    int second=1;
    printf("Lucas serious up to term %d\n",NumberTerm);
    printf("%d%d ",first,second);

    for(int i=3;i<=NumberTerm;i++)
    {
        int next = first + second;
        printf("%d",next);
        first = second;
        second = next;
    }
    printf("\n");
}
