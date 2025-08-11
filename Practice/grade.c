#include <stdio.h>

int main() {
    float marks[7], total = 0, avg, gpa;
    int i;

    printf("Enter marks for 7 subjects (0-100):\n");

    for (i = 0; i < 7; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    avg = total / 7; 

    if (avg >= 80 && avg <= 100) gpa = 4.0;
    else if (avg >= 75) gpa = 3.75;
    else if (avg >= 70) gpa = 3.5;
    else if (avg >= 65) gpa = 3.25;
    else if (avg >= 60) gpa = 3.0;
    else if (avg >= 55) gpa = 2.75;
    else if (avg >= 50) gpa = 2.5;
    else if (avg >= 45) gpa = 2.25;
    else if (avg >= 40) gpa = 2.0;
    else gpa = 0.0;

    printf("\nTotal Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", avg);
    printf("Final GPA: %.2f\n", gpa);

    return 0;
}
