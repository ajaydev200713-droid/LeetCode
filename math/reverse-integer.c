// int reverse(int x){
//     int rev=0;
//     int sign =1;
//     if(x<0)
//     {
//         sign=-1;
//         x=-x;
//     }
//     while(x!=0)
//     {
//         int rem=x%10;
//        rev=(rev*10)+rem;
//         x=x/10;
//     }
//     return rev*sign;
// }
#include <limits.h>

int reverse(int x) {
    int rev = 0;

    while (x != 0) {
        int rem = x % 10;
        x /= 10;

        // Check for overflow BEFORE multiplying
        if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
            return 0;

        rev = rev * 10 + rem;
    }

    return rev;
}