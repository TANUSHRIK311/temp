#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min_price = arr[0];
    int max_diff = 0;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min_price)
        {
            min_price = arr[i];
        }
        else if(arr[i] - min_price > max_diff)
        {
            max_diff = arr[i] - min_price;
        }
    }

    printf("%d", max_diff);
    return 0;
}
