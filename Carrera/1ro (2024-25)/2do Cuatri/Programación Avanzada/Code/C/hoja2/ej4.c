#include<stdio.h>

int main(int argc, char const *argv[])
{
    char c;

    printf("Dame una letra: ");
    scanf("%c", &c);

    if (c >= 65 && c <= 90) printf("Es mayúscula\n");
    else if (c >= 97 && c <= 122) printf("Es minúscula\n");
    else printf("No es una letra\n");
    
    return 0;
}
