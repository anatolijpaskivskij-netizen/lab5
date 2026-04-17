#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, choice;
    srand(time(NULL));
    while (1) {
        printf("\n--ГОЛОВНЕ МЕНЮ--\n");
        printf("1.Ввести масив з клавіатури(Варіант А)\n");
        printf("2.Заповнити масив випадково [-100;100] (Варіант Б)\n");
        printf("0.Вихід з програми\n");
        printf("Ваш вибір:");
        scanf("%d", &choice);
    if (choice == 0) break;
    if (choice < 1 || choice > 2) {
            printf("Невірний вибір!\n");
            continue;
        }
    printf("Введіть кількість елементів n: ");
    scanf("%d", &n);

    int a[n];
    switch(choice){
        case 1:
            printf("Введіть %d елементи масиву:\n", n);
            for (int i = 0; i < n; i++) {
                 printf("a[%d]=", i);
                 scanf("%d", &a[i]);
    }
    break;
        case 2:
             printf("Згенерований масив: ");
             for (int i = 0; i < n; i++) {
                  a[i] = rand() % 201 - 100;
                  printf("%d ", a[i]);
    }
     printf("\n");
    break;
    }
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    int first = -1, second = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            if (first == -1) first = i;
            else{
                second = i;
                break;
            }
        }
    }
    int sum = 0;
    if (first != -1 && second != -1) {
        for (int i = first + 1; i < second; i++) {
            sum += a[i];
        
    }
    printf("Максимальний елемент: %d\n", max);
    printf("Сума між додатними: %d\n", sum);
    }else{
        printf("Максимальний елемент: %d\n", max);
        printf("Недостатньо додатних елементів\n");
    }
    }    
    printf("Програму завершино.\n");

    return 0;
}