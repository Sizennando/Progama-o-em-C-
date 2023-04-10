#include <stdio.h>

int main()
{
  
  int celsius , fahrenheit;
printf("Digite a temperatura de hoje: ");
scanf("%d", &celsius);
fahrenheit = 9 * celsius / 5 + 32;
printf("Hoje está fazendo %d graus Fahrenheit!\n", fahrenheit);
return 0;
}