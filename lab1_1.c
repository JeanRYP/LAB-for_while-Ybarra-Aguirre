#include<stdio.h>

int main(){
    int n;
    
    printf("Ingrese #n: ");scanf("%d", &n);
    printf("%d",n);

    while(n>=10){
        int suma=0;
        int temp= n;

        while(temp>0){
            suma += temp%10;
            temp = temp/10;
        }

        n=suma;
        printf(" --> %d",n);
    }

    printf("\nRaiz digital: %d\n",n);
    return 0;
}