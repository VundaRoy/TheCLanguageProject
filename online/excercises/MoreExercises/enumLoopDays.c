#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    DAY_COUNT // This will be 7 (or the total number of days)
};
  
int main() {
    for (enum Day day = SUNDAY; day < DAY_COUNT; day++) {
        printf("Day value: %d\n", day);
    }
    return 0;
}
