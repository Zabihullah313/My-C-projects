#include <stdio.h>
int num;
char char1;
char res;
int main() {
    printf("Enter a char and a number to be shifted");
    scanf("%c %d", &char1, &num);
    res = char1 + num;
    printf("%c",res);
    return 0;
}
