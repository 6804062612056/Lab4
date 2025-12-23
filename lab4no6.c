#include <stdio.h>
int main() {
    int time;
    char text;
    scanf("%c %d",&text,&time);
    
    for (int i=0;i<time;i++) {
        for (int j=0;j<time;j++) {
            printf("%c",text);
        }
        printf("\n");
    }
}