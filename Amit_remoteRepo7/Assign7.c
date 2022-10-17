#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x;

    printf("Enter a value: ");
    scanf("%d",&x);

    printf("Before calling edit x = %d \n",x);

    editx(&x);

        return 0;
}

int editx(int *x){
    ++(*x);
    printf("After calling edit x = %d \n",*x);
}
