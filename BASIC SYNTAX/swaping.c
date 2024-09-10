//SWAPING TWO NUMBER

# include<stdio.h>

int main() {
    int first,second,temp;
    printf("plz enter your first number: ");
    scanf("%d",&first);
    printf("plz enter your second number: ");
    scanf("%d",&second);

    //SWAPING METHOD..
    temp = first;
    first = second;
    second = temp;

    printf("the value of first %d \nand second is %d",first,second);

    return 0;
}