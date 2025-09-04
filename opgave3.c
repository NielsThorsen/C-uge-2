#include <stdio.h>
#include <stdlib.h>

int i;  
int n;
int result;
int o_result;
int oo_result;

int main (void) {
    scanf("%d", &n);

o_result = 1;
oo_result = 1;
i = 0;

printf("0 1 1 ");


while (i<n){       
result = o_result + oo_result;

printf("%d ", result);

oo_result = o_result;
o_result = result;


i++;
}

return 0;

}