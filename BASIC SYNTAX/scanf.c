//scan function is used to collect input from user

# include<stdio.h>
int main() {
    int a;
       scanf("%d", &a);
       printf("the value of a is %d",a);
    return 0;
}

// multi int..
# include<stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d + %d = %d",a,b,a+b);
    return 0;
}

// sum of a + b = c..

# include<stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int c = a + b;
    printf("the value of a is %d and the value of b is %d and the sum is %d",a,b,c);
    return 0;
}

// sum of a + b = c with scanf..

# include<stdio.h>

int main() {
    int a = 5;
    int b;
    int c = a+b;
    scanf("%d",&b);
    printf("the value of a is %d and the value of b is %d and the sum is %d",a,b,c);
    return 0;
}

// finding rimender.. 

# include<stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int c = a % b;
    printf("the rimender of a is divided by b is %d",a%b);
    return 0;
}
