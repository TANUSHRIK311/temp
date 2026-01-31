#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr1[n], arr2[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int *p1 = arr1;
    int *p2 = arr2;
    int same = 1;

    for(int i = 0; i < n; i++)
    {
        if(*p1 != *p2)
        {
            same = 0;
            break;
        }
        p1++;
        p2++;
    }

    if(same)
        printf("Yes");
    else
        printf("No");

    return 0;
}
