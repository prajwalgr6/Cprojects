#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void convert(char *);
int main() {

    char a[10];
    printf("enter the number\n");
    scanf("%s",a);
    convert(a);
    return 0;
}

void convert(char *num) {
    int length = strlen(num);

    if (length == 0) {
        fprintf(stderr, "empty string");
        return;
    }
    if (length > 4) {
        fprintf(stderr, "length more than 4 is not supported");
        return;
    }

    char *single_digit[] = { "zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
    char *tens_place[] = {"", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tens_multiple[] = {"", "", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};
    char *tens_power[] = {"hundred", "thousand"};

    printf("%s: ", num);


    if (length == 1) {
        printf("%s", single_digit[*num - '0']);
        return;
    }

    while (*num != '\0') {

        if (length >= 3) {
            if (*num -'0' != 0) {
                printf("%s ", single_digit[*num - '0']);
                printf("%s ", tens_power[length-3]);
            }
            --length;
        }
        else {

            if (*num == '1') {
                int sum = *num - '0' + *(num + 1)- '0';
                printf("%s", tens_place[sum]);
                return;
            }

            else if (*num == '2' && *(num + 1) == '0') {
                printf("twenty");
                return;
            }
            else {
                int i = *num - '0';
                printf("%s ", i? tens_multiple[i]: "");
                ++num;
                if (*num != '0')
                    printf("%s ", single_digit[*num - '0']);
            }
        }
        ++num;
    }
}
