#include <stdio.h>
int main() {
    int column;
    char text;
    scanf("%c %d",&text,&column);
    
    for (int i=0;i<column;i++) {
        printf("%c",text);
    }
}