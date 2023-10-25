#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num;
    int reverseNum = 0;
    
    while (num != 0) {
        int remainder = num % 10;
        reverseNum = reverseNum * 10 + remainder;
        num /= 10;
    }
    
    if (originalNum == reverseNum)
        return 1;
    else
        return 0;
}

int main() {
    int largestPalindrome = 0;
    int i = 999, j = 0;
    
    while (i >= 100) {
        for (j = i; j >= 100; j--) {
            int product = i * j;
            
            if (product <= largestPalindrome)
            {
				printf ("i = %d\n", i);
				break;
			}
            
            if (isPalindrome(product) && product > largestPalindrome)
                largestPalindrome = product;
        }
		i--;
	}
    
    printf("The largest palindrome made from the product of two 3-digit numbers is: %d x %d =  %d\n",i, j, largestPalindrome);
    
	
    return 0;
}






