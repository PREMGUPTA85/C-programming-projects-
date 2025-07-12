
#include<stdio.h>
int main(){
    int a[100], n, i, no, k;
    printf("Enter range\n ");
    scanf("%d", &n);
    printf("Enter elements to array\n ");
    for(i = 0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter element to be deleted: ");
    scanf("%d", &no);
    for(i = 0; i < n; i++){
        if(a[i] == no){
            for(k = i; k < n - 1; k++){
            a[k] = a[k+1];
            }
        }
    }
    for(i = 0; i < n - 1; i++){
        printf("%d",a[i]);
    }
    return 0;
}