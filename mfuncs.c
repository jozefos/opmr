//this line is causing a conflict in the conflict branch
<<<<<<< HEAD
//this line is also causing a conflict in the master branch
=======
//this is the second line causing issues in the conflict branch
>>>>>>> conflict

#include <stdio.h>

int add(int a, int b) {
  return a+b;
}

int sub(int a, int b) {
  return a-b;
}

int div(int a, int b) {
  return a/b;
}

int mul(int a, int b) {
  return a*b;
}

int max5(int a, int b, int c, int d, int e) {
  if (a > b && a > c && a > d && a > e)
    return a;
  else if (b > a && b > c && b > d && b > e)
    return b;
  else if (c > a && c > b && c > d && c > e)
    return c;
  else if (d > a && d > b && d > c && d > e)
    return d;
  else
    return e;
}

int min5(int a, int b, int c, int d, int e) {
  if (a < b && a < c && a < d && a < e)
    return a;
  else if (b < a && b < c && b < d && b < e)
    return b;
  else if (c < a && c < b && c < d && c < e)
    return c;
  else if (d < a && d < b && d < c && d < e)
    return d;
  else
    return e;
}

int main {
  printf("enter 5 ints: ");
  scanf(" %i %i %i %i %i",&a,&b,&c,&d,&e);
  printf("max is %i\n",max(a,b,c,d,e));
  printf("min is %i\n",min(a,b,c,d,e));
}
