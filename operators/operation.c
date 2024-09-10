/*operations with
two numbers*/

# include<stdio.h>

int main() {
    int first,second;
    printf("plz enter your first number :");
    scanf("%d",&first);
    printf("plz enter your second number :");
    scanf("%d",&second);

    //LETS GO.
    printf("here the operations..\n");
    printf("%d + %d  = %d\n",first,second,first+second);
    printf("%d - %d  = %d\n",first,second,first-second);
    printf("%d / %d  = %d\n",first,second,first/second);
    printf("%d * %d  = %d\n",first,second,first*second);
    printf("%d % %d  = %d\n",first,second,first%second);
    return 0;
}