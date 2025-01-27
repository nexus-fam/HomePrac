#include <stdio.h>
#include <string.h>

int maxScore(char *s) {
    int left_zeros = 0;
    int right_ones = 0;
    int max_score = 0;

    // Calculate the total number of '1's in the string
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '1') {
            right_ones++;
        }
    }

    // Traverse the string, calculating the score at each split
    for (int i = 0; s[i + 1] != '\0'; i++) { // Ensure the right substring is not empty
        if (s[i] == '0') {
            left_zeros++;
        } else {
            right_ones--;
        }

        int current_score = left_zeros + right_ones;
        if (current_score > max_score) {
            max_score = current_score;
        }
    }

    return max_score;
}

int main() {
    char s[] = "011101"; // Example input
    int result = maxScore(s);
    printf("Maximum Score: %d\n", result);
    return 0;
}
