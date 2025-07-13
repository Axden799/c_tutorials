#include <stdio.h>
#include <stdlib.h>

int main() {

    int luckyNumbers[] = {7, 79, 97, 76, 96, 69};
    luckyNumbers[1] = 999;
    printf("%d\n", luckyNumbers[1]);

    int nums[5];
    nums[3] = 12;
    printf("%d\n", nums[3]);

    // position 0 not initialized, should return -2 or junk data
    // instead, this also returns 0.
    // this is compiler specific, any values not initialized in the array may be initialized to 0.
    // Not guaranteed to be 0.
    printf("%d\n", nums[0]);

    // should be out of bounds error.
    // instead, this returns 0 (compiler specific)?
    // this 81 has C check memory location 81, which has not been set to anything.
    // C has no bounds checking!!!! So it does not see this as an error. Instead, it will grab whatever is in location 81.
    // in this case, it was initialized to 0. This is not guaranteed. Undefined behavior.
    printf("%d", nums[81]);

    return 0;
}