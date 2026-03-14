#include <stdio.h>

int main()
{
    int a, x;
    int result;

    result = 1;
    
    scanf("%d", &a);

    if (a <= 1){
        result = 0;
    }else{
        for(x = 2; x < a; x++){
            if(a % x ==0){
                result = 0;
                break;
            }
        }
    }
    
    if (result == 0){
        printf("false");
    }
    if (result == 1){
        printf("true");
    }

    return 0;
}
