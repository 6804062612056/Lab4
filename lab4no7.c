#include <stdio.h>
int main() {
    int row , column;
    char text;
    scanf("%c %d %d",&text,&column,&row);
    
    for (int i=0;i<row;i++) {
        for (int j=0;j<column;j++) {
            printf("%c",text);
        }
        printf("\n");
    }
}