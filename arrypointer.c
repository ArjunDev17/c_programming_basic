//pointer array





// C program to illustrate sizes of
// pointer of array
#include<stdio.h>
 
int main()
{
    int arr[] = { 3, 5, 6, 7, 9 };
    int *p = arr;
    int (*ptr)[5] = &arr;
     
    printf("p = %p, ptr = %p\n", p, ptr);
    printf("*p = %d, *ptr = %p\n", *p, *ptr);
     
    printf("sizeof(p) = %lu, sizeof(*p) = %lu\n",
                          sizeof(p), sizeof(*p));
    printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n",
                        sizeof(ptr), sizeof(*ptr));
    return 0;
}

/*
 puts(fruit[x]);
 return(0);
}
}*/

/*#include<stdio.h>
int main()
{
 char *fruit[] = {
 "watermelon",
 "banana",
 "pear",
 "apple",
 "coconut",
 "grape",
 "blueberry"
 };
 int x;
 for(x=0;x<7;x++)
 putchar( **(fruit+x));
 putchar('n');
 
 return(0);
}*/