#include<stdio.h>

int calcular_pasos(long long n){
    int pasos =0;
    while(n>1){
        if (n%2 == 0){
            n = n/ 2;
        }else{
            n= 3*n+1;
        }
        pasos++;
    }
    return pasos;
}

int main(){
    int mejor_n=1;
    int max_semilla=0;

    for(int i=1;i<=10000;i++){
        int pasos = calcular_pasos(i);
      if (pasos > max_semilla) {
            max_semilla = pasos;
            mejor_n = i;
      }
    }

    printf("n = %d, semilla = %d",mejor_n,max_semilla);
    return 0;
}