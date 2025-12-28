#include <stdio.h>

int main() {
    int score;
    char grade;
    scanf("%d",&score);
    while(score!=-1) {
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
        scanf("%d",&score);
    }
}