#include <stdio.h>

int main() {
    int choise;
    do{
    printf("\n--ГОЛОВНЕ МЕНЮ--\n");
    printf("1.Запустити обробку масивів\n");
    printf("0.Вийти з програми\n");
    printf("Ваш вибір: ");
    scanf("%d", &choise);
    if (choise == 1){
      int n;    
      do{
         printf("Введіть кількість елементів (n>0):");
          scanf("%d", &n);
          if (n <= 0) {
              printf("Помилка кількість елементів елементів має бути більша за 0");
          }    
      } while (n <= 0);       
         
    int a[n], b[n], c[n];
    
    printf("Введіть елементи масиву a:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    printf("Введіть елементи масиву b:\n");
    for (int i = 0; i < n; i++) {
        printf("b[%d]=", i);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++) {
        c[i] = a[i] - b[i];
    }
    printf("\n--РЕЗУЛЬТАТ АНАЛІЗУ--\n");
    printf("Масив c[i] (різниця a[i] - b[i]):\n");
    printf("Різниця масивів:");
     for (int i = 0; i < n; i++) {
         printf("%d ", c[i]);
     }
    printf("\n");
    
    }else if (choise != 0){
        printf("Невірна команда спробуйте ще разю\n");
    }
    
    }while (choise != 0);
    printf("Програму завершино.");
    return 0;
}