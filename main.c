#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


void get_numbers(const char* msg, int nums[2]) {
    char answer[256];

    printf("%s", msg);
    fgets(answer, sizeof(answer), stdin);

    while (sscanf(answer, "%d %d", &nums[0], &nums[1]) != 2) {
        printf("Incorrect input. Try again: ");
        fgets(answer, sizeof(answer), stdin);
    }
}

int main() {
    const char* msg = "Enter two numbers: ";
    int nums[2];

    get_numbers(msg, nums);

	if (nums[0] % nums[1] == 0) printf("TRUE\n");
	else printf("FALSE\n");
}