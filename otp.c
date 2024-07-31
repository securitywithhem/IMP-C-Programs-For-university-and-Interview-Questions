#include <stdio.h>
#include <math.h>

// Function to calculate the number of OTPs for Case-1
long long calculate_case1(int n) {
    return (long long) pow(10, n);
}

// Function to calculate the number of OTPs for Case-2
long long calculate_case2(int n) {
    return (long long) 9 * pow(9, n-1);
}

// Function to calculate the number of OTPs for Case-3
long long calculate_case3(int n) {
    // Calculate the number of ways to choose 3 digits to repeat
    long long ways_to_choose = (long long) pow(10, 3);

    // Calculate the number of ways to arrange the remaining digits
    long long ways_to_arrange = (long long) pow(7, n-3);

    // Calculate the total number of OTPs
    return ways_to_choose * ways_to_arrange;
}

// Function to print all possible OTPs for Case-1 with n = 3
void print_otps_case1(int n) {
    int i, j, k;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (j == i) continue;
            for (k = 0; k < 10; k++) {
                if (k == i || k == j) continue;
                printf("%d%d%d\n", i, j, k);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the value of n (3 <= n <= 8): ");
    scanf("%d", &n);

    printf("Case-1: No repetition, Zero allowed in leading position: %lld\n", calculate_case1(n));
    printf("Case-2: No repetition, Zero not allowed in leading position: %lld\n", calculate_case2(n));
    printf("Case-3: 2-3 repetition, Zero allowed in leading position: %lld\n", calculate_case3(n));

    if (n == 3) {
        printf("All possible OTPs for Case-1 with n = 3:\n");
        print_otps_case1(n);
    }

    return 0;
}