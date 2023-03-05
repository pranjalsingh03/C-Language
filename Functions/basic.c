#include <stdio.h>

// Function declarations
int add(int x, int y);
int subtract(int x, int y);
void print_result(int result);

// Main function
int main()
{
    int x = 10;
    int y = 5;
    
    // Function calls
    int sum = add(x, y);
    int difference = subtract(x, y);
    
    // Print results
    print_result(sum);
    print_result(difference);
    
    return 0;
}

// Function definitions
int add(int x, int y)
{
    int result = x + y;
    return result;
}

int subtract(int x, int y)
{
    int result = x - y;
    return result;
}

void print_result(int result)
{
    printf("Result: %d\n", result);
}