#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%s", ("True" if a < 0 || b < 0 else "False"));
    return 0;
} 