#include <stdio.h>

int main() {
    int score,time;
    char grade;
    scanf("%d",&time);
    for (int i=0;i<time;i++) {
        scanf("%d",&score);
        if (score >= 68) {
            if (score >= 80) {
                grade = 'A';
            }
            else if (score >= 75) {
                grade = 'B';
            }
            else {
                grade = 'C';
            }
        }
        else {
            if (score >= 40) {
                grade = 'D';
            }
            else {
                grade = 'F';
            }
        }
        printf("%d(%c)\n",score,grade);
    }
}