#include <stdio.h>
#include <math.h>

int main() {
  int sum = 0; // переменная для хранения результата
  float n = 1; // переменная для определения количества разбиений отрезка
  float h; // переменная шаг интегрирования
  double E = 1.0; // переменная Е - точность вычисления

  while (sum != 1) { // цикл будет выполняться, пока переменная сум не станет равна единице
    printf("Введите E: ");
    sum = scanf("%lf", &E);
  }

  float a;
  sum = 0;

  while (sum != 1) { 
    printf("Введите a: ");
    sum = scanf("%f", &a);
  }

  float b;
  sum = 0;

  while (sum != 1) {
    printf("Введите b: ");
    sum = scanf("%f", &b);
  }

  double integralNow = E; // нынешнее значение интеграла
  double integralBefore = 0; // предыдущее значение интеграла
  float x = b; // текущая точка интегрирования
  float x0 = a; // начальная т интегрирования

  while (fabs(integralNow - integralBefore) > E) {
    integralBefore = integralNow;
    double s = 0.0;
    h = (b - a) / n;
    for (int i = 0; i < n; i++) { // проходим по всем отрезкам
      double si = h * log(a + h * (i + 0.5)); // площадь i 
      s += si; // тут и в следующей строке я добавляю переменным актуальные значения
      x0 = x;
      x += h;
    }
    integralNow = s;
    n *= 2;
  }
  printf("%lf + %lf", integralNow, integralBefore);
  return 0;
}