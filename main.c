#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE


#include <stdio.h>


void get_numbers(const char* msg, int nums[3]) {
    char answer[256];
    int a, b;

    printf("%s", msg);
    fgets(answer, sizeof(answer), stdin);

    while (sscanf(answer, "%d %d", &a, &b) != 2) {
        printf("Incorrect input. Try again: ");
        fgets(answer, sizeof(answer), stdin);
    }

    nums[0] = a;
    nums[1] = b;
}

int main() {
    const char* msg = "Enter two numbers: ";
    int nums[3];

    get_numbers(msg, nums);

	if (nums[0] % nums[1] == 0) printf("TRUE\n");
	else printf("FALSE\n");
}