/////////////////////////////////////// 
//             Cpp homework 5        //    
//              made by Lurk         //     
//              gedit + gcc          //      
/////////////////////////////////////// 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdarg.h>
#include <cstdarg>

extern void bitinvert_6_ext(int (&a)[10]);

////////////////////part 1////////////////////
void bitinvert (int (&a)[10]) {
int i;
  for (i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
  a[i] = a[i] xor 1;
  }
}
////////////////////part 2////////////////////
void fillarray (int (&a)[8]) {
int i, k;
  for (i = 0, k = 1; i < sizeof(a)/sizeof(a[0]); i++, k+= 3) {
  a[i] = k;
  }
}
////////////////////part 3////////////////////
bool compare(int (&a)[10]) {
int suml = 0, sumr = 0, i;
bool ans = 0;
  for (i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
    sumr = sumr + a[i];
  }
  for (i = 0; i < (sizeof(a)/sizeof(a[0]) - 1); i++) {
    suml = suml + a[i];
    sumr = sumr - a[i];
    if (suml == sumr) {
    ans = 1; break;
    }
  }
return ans;
}
////////////////////part 4////////////////////
void circle (int (&a)[10], int b) {
int i,j, temp;
if (b >= 0) {
  for (i = 0; i < b; i++) {
  temp = a[0];
    for (j = 0; j < (sizeof(a)/sizeof(a[0])); j++) {
     a[j] = a[j + 1];
    }
  a[9] = temp; 
  }
}
else {
  for (i = 0; i < -b; i++) {
  temp = a[9];
    for (j = 9; j > 0; j--) {
     a[j] = a[j - 1];
    }
  a[0] = temp;
  }
}
}
////////////////////part 5////////////////////
void bitinvert_var (int count, ...) {
int i;
int a[count];
va_list lst;
va_start(lst, count);
for (i = 0; i < count; i++) {
  printf("%d ", va_arg(lst, int) xor 1);
}     
va_end(lst);  
}
////////////////////part 6////////////////////
namespace hw5 {
void bitinvert_6 (int (&a)[10]) {
int i;
  for (i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
  a[i] = a[i] xor 1;
  } 
}
}
//////////////////////////////////////////////
int main () {
int i;
//////////////////////////////////////////////
printf("\nPart 1\n");
int a[10] = {1,1,1,0,1,1,0,1,0,0};
  for (i=0; i < sizeof(a)/sizeof(a[0]); i++) {
    printf("%d ", a[i]);
  }
printf("\n");
bitinvert(a);
  for (i=0; i < sizeof(a)/sizeof(a[0]); i++) {
    printf("%d ", a[i]);
  }
printf("\n");
//////////////////////////////////////////////
printf("\nPart 2\n");
int b[8];
fillarray(b);
  for (i=0; i < sizeof(b)/sizeof(b[0]); i++) {
    printf("%d ", b[i]);
  }
printf("\n");
//////////////////////////////////////////////
printf("\nPart 3\n");
int c[10] = {1,2,3,4,5,6,7,9,9,10};
bool ans;
ans = compare(c);
printf("\nans = %d\n", ans);
//////////////////////////////////////////////
printf("\nPart 4\n");
int d[10] = {1,2,3,4,5,6,7,8,9,10};
int x = -3;
  for (i=0; i < sizeof(d)/sizeof(d[0]); i++) {
    printf("%d ", d[i]);
  }
printf("\n");  
circle(d, x);
  for (i=0; i < sizeof(d)/sizeof(d[0]); i++) {
    printf("%d ", d[i]);
  }
printf("\n");
//////////////////////////////////////////////
printf("\nPart 5\n");
printf("1 1 1 0 1 1 0 1 0 0 1 0\n");
bitinvert_var(12,1,1,1,0,1,1,0,1,0,0,1,0);
printf("\n");
//////////////////////////////////////////////
printf("\nPart 6\n");
int e[10] = {1,1,1,0,1,1,0,1,0,0};
  for (i=0; i < sizeof(e)/sizeof(e[0]); i++) {
    printf("%d ", e[i]);
  }
printf("\n");
hw5::bitinvert_6(e);
  for (i=0; i < sizeof(e)/sizeof(e[0]); i++) {
    printf("%d ", e[i]);
  }
printf("\n");

bitinvert_6_ext(e);
  for (i=0; i < sizeof(e)/sizeof(e[0]); i++) {
    printf("%d ", e[i]);
  }
printf("\n");
//////////////////////////////////////////////
return 0;
};
