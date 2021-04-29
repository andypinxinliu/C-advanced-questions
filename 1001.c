// Calculate a+b and output the sum in standard format -- that is, the digits must be separated into groups of three by commas (unless there are less than four digits).

// Input Specification:
// Each input file contains one test case. Each case contains a pair of integers a and b where −10^6 ≤a,b≤10^6. The numbers are separated by a space.

// Output Specification:
// For each test case, you should output the sum of a and b in one line. The sum must be written in the standard format.

// Sample Input:
// -1000000 9
// Sample Output:
// -999,991


#include <stdio.h>

int main(){
    int a, b, len;
    int num[10];
    scanf("%d %d", &a, &b);
    int sum = a+b;
    if (sum < 0){
        printf("-");
        sum = -sum;
    }
    
    len=0;
    if (sum == 0){
        num[len] = 0;
        len++;
    }
    else{
        while(sum != 0){
            num[len++]=sum%10;
            sum /= 10;
        } 
    }
    for(int i=len-1; i>=0; i--){
        printf("%d", num[i]);
        if(i>0 && i%3==0)   printf(",");
    } 
}
