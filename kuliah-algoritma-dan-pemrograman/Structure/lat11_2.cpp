#include<iostream>
#include<stdio.h>

using namespace std;

struct S1
{
char *s;
 int i ;
struct S1 *slp;
};

main( )
{
 static struct S1 a [ ]= {
  { "abcdef", 1, a+1 },
  { " ghijkl", 2, a+2},
  { " mnopqr", 3, a}
 };
 
 struct S1 *p = a;

 int i;
 printf("a[0].s = %s p->= %s a[2].slp->s=%s\n", a[0].s, p->s, a[2].slp->s);

 for (i=0; i<3; i++)
 {
  printf("—a[i].i = %d ", --a[i].i);
  printf("++a[i].s = %c\n ", ++a[i].s);
 }
}
