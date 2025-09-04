#include <stdio.h>
#include <stdlib.h>

int n;
int i;
int result;

int main(void) {

scanf("%d",&n);
if(n<0) {
    abort();
}

i = 0;
while (i<n)
{
 if(result*result <= n && n < (result+1) * (result+1)) {
    printf("the answer is %d\n", result);
    abort();
 }
 else {
    result++;
    i++;
 }
}
}