#include <stdio.h>

int main()
{
    int a,b;
    char x;
    int result;

    scanf("%d %d %c", &a, &b, &x);
    
    if (x == '+') {
        result = a + b;
        printf("%d",result);
    }else if (x =='-')
    {
        result = a - b;
        printf("%d",result);
    }else if (x == '*')
    {
        result = a * b;
        printf("%d",result);
    }else if (x == '/')
    {
        result = a / b;
        printf("%d",result);
    }

    return 0;
}

