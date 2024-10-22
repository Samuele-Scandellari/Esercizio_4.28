#include <stdio.h>
int main(void) {
    int i,n;
    int nmassimo=0;
    for(i=0;i<10;i++) {
        printf("inserire un numero: ");
        scanf("%d",&n);
        if(n>nmassimo) {
            nmassimo=n;
        }
    }
    printf("il numero massimo e': %d\n", nmassimo);
    return 0;
}