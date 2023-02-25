#include <stdio.h>

int main() {
/* my first program in C */
int i=0,b=0;
/*for ( i = 0; i <= 10; i++)
{
    printf("Hello, World! \n");
    b++;
}*/
int day = 7;

switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
    default:
    printf("NO");
    break;
}
return 0;
}