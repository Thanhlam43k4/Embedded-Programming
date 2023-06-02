#include<stdio.h>
#include<stdlib.h>


int main()

{
    FILE *f;
    f = fopen("Data.txt","a+");
    char a[50];
    char b[50];
    fgets(a,20,f);
    printf("%s",a);
    fgets(b,20,f);
    printf("%s",b);
    fclose(f);
    
}