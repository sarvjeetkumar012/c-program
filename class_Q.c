/*The binary number system only uses two digits, 0 and 1. Any string that represents a number in the binary number system can be called a binary string. You are required to implement the following function: 
int OperationsBinaryString(char *str);

The function accepts a string 'str' as its argument. The string 'str' consists of binary digits separated with an alphabet as follows: 
•	'A' denotes AND operation 
•	'B' denotes OR operation 
•	'C' denotes XOR operation 
You are required to calculate the result of the string 'str', scanning the string left to right, taking one operation at a time, and return the same. 

Note:
•	No order of priorities of operations is required. 
•	Length of 'str' is odd 
•	If 'str' is NULL or None(in case of python), return -1

Example:

Input: str: ICOCICIAOBI 
Output: 1 
Explanation: 
The alphabet in 'str' when expanded becomes "1 XOR 0 XOR 1 XOR 1 AND 0 OR 1", the result of the expression becomes 1, hence 1 is returned.*/
#include <stdio.h>
#include <string.h>

int BinaryString(char *str) {
    
    if (str == NULL) {
        return -1;
    }

    int n = strlen(str);
    
    
    if (n % 2 == 0) {
        return -1;
    }

    
    int result = str[0] - '0';

    

    for (int i = 1; i < n; i += 2) {
        char operation = str[i];
        int nextoperand = str[i + 1] - '0';

        if (operation == 'A') {
            result = result & nextoperand;
        } else if (operation == 'B') {
            result = result | nextoperand;
        } else if (operation == 'C') {
        
            result = result ^ nextoperand;
        } else {
            
            return -1;
        }
    }
    return result;
}


int main() {
    char str[] = "1C0C1C1A0B1";
    printf("Result: %d\n", BinaryString(str));
    return 0;
}
