#include <stdio.h>

int main() {
    int sum = 0;
    printf("Enter the user budget : ");
    scanf("%d", &sum);
    char newspaper[6][6] = {"TOI" , "HINDU" , "ET" , "BM" , "HT"};
    int newspaper_price[] = {26,20.5,34,10.5,18};
    for (int i=0;i<5;i++)
    {
        for(int j=(i+1);j<5;j++)
        {
            if((newspaper_price[i] + newspaper_price[j]) <= sum)
            {
                printf("{\"%s\",\"%s\"} " ,newspaper[i] , newspaper[j]);
            }
            
        }
    }

    return 0;
}
