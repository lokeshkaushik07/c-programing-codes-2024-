#include <stdio.h>
#include <string.h>

/*there are also many more uses of stren that are known as string libraries.*/

int main(){

    char string1[] = "Lokesh";
    char string2[] = "Kaushik";

    strset(string2 , '!');

    printf("%s",string2);
    
    return 0;
}