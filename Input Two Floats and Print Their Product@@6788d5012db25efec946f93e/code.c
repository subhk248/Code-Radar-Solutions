#include <stdio.h>
int main(){
    float a;
    float b;
    float product;
    scanf("%f", &a);
    scanf("%f", &b);
    product = a * b;
    printf("Product: %.2f", product);
    return 0;
}