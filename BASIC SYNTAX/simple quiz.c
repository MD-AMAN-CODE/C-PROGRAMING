/*write a c program to calculate are of a rectangle
using input supiler by user
area of rectangle is lenght*breath
lets goo...*/
//practice set 1..

# include<stdio.h>

int main() {
    // int a= 8;
    // int b= 5;
    int lenght,breath;

    printf("enter lenght\n");
    scanf("%d",&lenght);  //sapose that lenght is 6

       printf("enter breath\n");
    scanf("%d",&breath);  //sapose that breath is 5

    printf("the are of this rectangle is %d",lenght*breath); //then you do all things right so answer is 30

    return 0;
}

// calculate the area of a circle and modify the same program to 
// calculate the volume of a cylender given its radius and heights
// practice sets  2...
// the area of a circle is 

//# include<stdio.h>

// int main() {
//     int r=6; // sapose that radius is 6
//     printf("the area of circle is with radius %d is %f",r,3.14*r*r);
//     return 0;
// }

// volume of a cylender is pi r^2 h

# include<stdio.h>

int main() {
    int r=6; // sapose that radius is 6
    int h=10; // sapose that height is 5
    printf("the volume of cylender is with radius %d and height %d is %f",r,h,3.14*r*r*h);
    return 0;
}