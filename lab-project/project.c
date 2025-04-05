#include <stdio.h>

void welcome() {
    printf("* * * Welcome to the grade calculator program. * * *\n");
}

void gradeCalculation(int score) {
    if (score >= 80 && score <= 100) {
        printf("A+\n");
    } else if (score >= 70 && score <= 79) {
        printf("A\n");
    } else if (score >= 60 && score <= 69) {
        printf("A-\n");
    } else if (score >= 50 && score <= 59) {
        printf("B\n");
    } else if (score >= 40 && score <= 49) {
        printf("C\n");
    } else if (score >= 33 && score <= 39) {
        printf("D\n");
    } else if (score >= 0 && score <= 32) {
        printf("F\n");
    } else {
        printf("Error\n");
    }
}
float grade(int score) {
    if (score >= 80 && score <= 100) {
        return 5.0;
    } else if (score >= 70 && score <= 79) {
        return 4.0;
    } else if (score >= 60 && score <= 69) {
        return 3.5;
    } else if (score >= 50 && score <= 59) {
        return 3.0;
    } else if (score >= 40 && score <= 49) {
        return 2.0;
    } else if (score >= 33 && score <= 39) {
        return 1.0;
    } else if (score >= 0 && score <= 32) {
        return 0.0;
    } else {
        return 0.0;
    }
}

void result(float score) {
    if (score == 5.0) {
        printf("A+\n");
    } else if (score>=4.0 && score<=4.9) {
        printf("A\n");
    } else if (score>= 3.5 && score<=3.9) {
        printf("A-\n");
    } else if (score >= 3.0 && score<=3.4) {
        printf("B\n");
    } else if (score >= 2.0 && score<=2.9) {
        printf("C\n");
    } else if (score >= 1.0 && score<=1.9) {
        printf("D\n");
    } else if (score == 0.0) {
        printf("F\n");
    } else {
        printf("Error\n");
    }
}


int main() {
    int n;
    char name[100];
   
    welcome();
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter %dth subject number from(1-100): ", i + 1);
        scanf("%d", &arr[i]);
    }
    float grad[n];
    for (int i = 0; i < n; i++) {
        printf("In %dth subject your grade is: ", i + 1);
        gradeCalculation(arr[i]);
        grad[i] = grade(arr[i]);
    }
    float sub_av = 0;
    for (int i = 0; i < n; i++) {
        sub_av += grad[i];
    }
    float tot_grade = sub_av / n;
    printf("Your grade is: %.1f\n", tot_grade);
    printf("%s Your result is: ", name);
    result(tot_grade);
    printf("******* Thanks for using our System *******");
    return 0;
}
