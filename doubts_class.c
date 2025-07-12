// left to right ans shuold be 30 so why 2 ans not 30 
#include <stdio.h>
int main () { 
    double b = 5 % 3 & 4 + 5 * 6 ;  
    printf("%lf", b);
} 

// put che() and putch() how works 

// wap to print the fibnaucii series till 100
#include <stdio.h>
int main () {
    int a = 0, b = 1,n, fib = 0;
    printf("please enter the range: ");
    scanf("%d", &n);
    for (int i = 1; i<= n; i++){
        printf("%d\n", fib);
        a = b;
        b = fib; // 0 1 1 how 2nd ones' printed 
        fib = a + b;
    }
    return 0;

}