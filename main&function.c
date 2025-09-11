#include <stdio.h>

int add(int x, int y) {
    return x+y;
}

int main(void) {
int a,b,c;
    printf("første tal");
    scanf("%d", &a);
    printf("Andet tal");
    scanf("%d", &b);
c=add(a,b);
printf("Dette er svaret %d", c);

return 0;

}