#include <stdio.h>
#include <stdlib.h>

void swap(int *t, int*s);

int main()
{
    int x=1, y=2;
    int *a, *b;

    a = &x;
    b = &y;
    
    printf ("%d  %d\n", x, y);
    swap(a,b);
    printf("%d  %d\n", x, y);
    
    return 0;
}


void swap(int *t, int*s){
    int temp;
    temp = *t;
    *t = *s;
    *s = temp;
}
