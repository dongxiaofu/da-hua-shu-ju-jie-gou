#include <stdio.h>

int main() {

    char str[100];
    int i;

    printf("Enter a value :");
    char c;
    scanf("%s %d", str, &i);
    printf("\nYou entered: %s %d \n", str, i);
    for (int i = 0; i < 4; i++) {
        printf("Enter a value again:");
        char c;
        scanf("%c",&c);
//        char a,b;
//        scanf("%c%c", &a,&b);
//        printf("You entered char: %c\n", a);
    }


    printf("\n");
    return 0;
}