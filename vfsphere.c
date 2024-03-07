#include<stdio.h>
int main(){
    float v, r;
    
    printf("enter the numbers");
    scanf("%f", &r);
    v = 4 * 3.14 * r*r*r/3;
    printf("here is the radius %f", v);


    return 0;
}