#include<stdio.h>

int main(){
    char name[1];
    gets(name);
    int age;
    scanf("%d",&age);
    printf("My Name is %s and my age is %d",name,age);
}