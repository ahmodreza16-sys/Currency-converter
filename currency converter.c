#include<stdio.h>

int main(){

float taka;

printf("Enter BDT: ");
scanf("%f", &taka);

printf("USD = %.2f\n", taka /122.0);

return 0;
}
