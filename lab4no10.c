#include <stdio.h>

int main() {
    int score , keep[5] = {0};
    char grade;
    scanf("%d",&score);
    while(score!=-1) {
        if (score >= 68) {
            if (score >= 80) {
                grade = 'A';
                keep[0]++;
            }
            else if (score >= 75) {
                grade = 'B';
                keep[1]++;
            }
            else {
                grade = 'C';
                keep[2]++;
            }
        }
        else {
            if (score >= 40) {
                grade = 'D';
                keep[3]++;
            }
            else {
                grade = 'F';
                keep[4]++;
            }
        }
        printf("%d(%c)\n",score,grade);
        scanf("%d",&score);
    }
    printf("A(%d)\n",keep[0]);
    printf("B(%d)\n",keep[1]);
    printf("C(%d)\n",keep[2]);
    printf("D(%d)\n",keep[3]);
    printf("F(%d)\n",keep[4]);
}