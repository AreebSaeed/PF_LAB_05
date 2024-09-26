#include <stdio.h>

int main() {
    int attendance;
    float assignmentScore, examScore, finalGrade;

    printf("Enter attendance percentage (0-100): ");
    scanf("%d", &attendance);
    printf("Enter assignment score (0-100): ");
    scanf("%f", &assignmentScore);
    printf("Enter exam score (0-100): ");
    scanf("%f", &examScore);

    if (attendance >= 75) {
        if (assignmentScore >= 50) {
            if (examScore >= 50) {
                finalGrade = (assignmentScore * 0.4) + (examScore * 0.6);
                printf("Final Grade: %.2f\n", finalGrade);
                if (finalGrade >= 60) {
                    printf("Result: Pass\n");
                } else {
                    printf("Result: Fail\n");
                }
            } else {
                printf("Result: Fail (Exam score too low)\n");
            }
        } else {
            printf("Result: Fail (Assignment score too low)\n");
        }
    } else {
        printf("Result: Fail (Attendance too low)\n");
    }

    return 0;
}

