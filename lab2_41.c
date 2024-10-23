#include <stdio.h>
#include<math.h>

int main() {
    double E;
    double sum = 0;
    double previSum = 0;
    double term = 1;
    int i = 1; 
    
    printf("Введите точность E: ");
    scanf("%lf, &E");
//дальше вычисление суммы ряда
    while (fabs(sum - previSum) > E) {
        previSum = sum;
        term /= i; 
        sum += term;
        i++;
  }

  printf("Сумма ряда: %lf\n", sum);

  return 0;
}