#include <stdio.h>
int main(){
    char a[50];
    scanf("%[\n]s", &a);
    printf("You entered: %s", a);
    return 0;
}