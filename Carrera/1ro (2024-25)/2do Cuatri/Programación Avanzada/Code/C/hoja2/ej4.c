#include<stdio.h>
#include<ctype.h>

int main(int argc, char const *argv[])
{
    char c;

    printf("Dame una letra: ");
    scanf("%c", &c);

    if (c >= 65 && c <= 90) printf("Es mayúscula\n");
    else printf("Es minúscula\n");
    
    return 0;
}
