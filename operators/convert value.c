/*convet value of
data types with two numbers*/

# include<stdio.h>

int main() {
    int num;
    printf("enter the number: ");
    scanf("%d",&num);
    float k=num;
    printf("the original value is %d\n",num);
    printf("the original value to convet value is %.2f\n",k);
    printf("the second method to convert value is %.2f\n",(float)num);
    return 0;
}