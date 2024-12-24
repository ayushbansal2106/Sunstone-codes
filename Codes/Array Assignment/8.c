/*  Write a program in C to count the frequency of each element of an array.
    Test Data :
    Input the number of elements to be stored in the array :3
    Input 3 elements in the array :
    element - 0 : 25
    element - 1 : 12
    element - 2 : 43
    Expected Output :
    The frequency of all elements of an array :
    25 occurs 1 times
    12 occurs 1 times
    43 occurs 1 times
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
    int arr[n];
    printf("Input %d number of elements in the array :\n",n);
    for(int i=0;i<n;i++)
    {
        printf("Element - %d ",i);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = arr[n - 1];
                n--;
                j--;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }
    return 0;
}