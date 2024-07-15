#include <stdio.h>

// Define an enum for days of the week
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    // Declare variables of enum type
    enum Day today, tomorrow;

    // Assign values to enum variables
    today = MONDAY;
    tomorrow = TUESDAY;

    // Print the values of enum variables
    printf("Today is: %d\n", today);
    printf("Tomorrow is: %d\n", tomorrow);

    // Using switch statement with enum
    switch (today) {
        case SUNDAY:
            printf("It's Sunday!\n");
            break;
        case MONDAY:
            printf("It's Monday!\n");
            break;
        case TUESDAY:
            printf("It's Tuesday!\n");
            break;
        case WEDNESDAY:
            printf("It's Wednesday!\n");
            break;
        case THURSDAY:
            printf("It's Thursday!\n");
            break;
        case FRIDAY:
            printf("It's Friday!\n");
            break;
        case SATURDAY:
            printf("It's Saturday!\n");
            break;
        default:
            printf("Invalid day!\n");
    }

    return 0;
}

