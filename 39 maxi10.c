#include <stdio.h>
  int main() {
    int e[10];
    int i;
    int greatest;
    printf("Enter ten values:");
    for (i = 0; i < 10; i++) {
    scanf("%d", &e[i]);
    }
    greatest = e[0];
    for (i = 0; i < 10; i++) {
if (e[i] > greatest) {
greatest = e[i];
    }
    }
    printf("Greatest of ten numbers is %d", greatest);
    return 0;
  }
