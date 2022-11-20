/**
  * Gray code in binary means only one bit will change in successive order.
  * 1th gray code: 0, 1 (0, 1)
  * 2th gray code: 00, 01, 11, 10 (0, 1, 3, 2)
  * 3th gray code: 000, 001, 011, 010, 110, 111, 101, 100 (0, 1, 3, 2, 6, 7, 5, 4)
  */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int s = pow(2, n), i;
    int* res = (int*) calloc(s, sizeof(int));

    for (i = 1; i < s; i++)
        res[i] = i ^ (i >> 1);

    for (i = 0; i < s; i++)
        printf("%d ", res[i]);
    
    return 0;
}

// class Solution {
// public:
//     vector<int> grayCode(int n) {
//         if (n == 0)
//             return {0};
//         vector<int> curr;
//         vector<int> prev = grayCode(n - 1);
//         for (int i = prev.size() - 1; i >= 0; i--) {
//             int value = (1 << (n - 1) | prev[i]);
//             curr.push_back(value);
//         }
//         curr.insert(curr.begin(), prev.begin(), prev.end());
//         return curr;
//     }
// };