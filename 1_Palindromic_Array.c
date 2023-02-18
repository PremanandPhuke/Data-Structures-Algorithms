/*
Given a Integer array A[] of n elements.
Your task is to complete the function PalinArray. Which will return 1 
if all the elements of the Array are palindrome otherwise it will return 0


Input:
5
111 222 333 444 555

Output:
0

Explanation:
A[0] = 111 //which is a palindrome number.
A[1] = 222 //which is a palindrome number.
A[2] = 333 //which is a palindrome number.
A[3] = 444 //which is a palindrome number.
A[4] = 555 //which is a palindrome number.
As all numbers are palindrome so This will return 0.


*/



#include <stdio.h>
#include <conio.h>

int palindrome(int n, int arr[100])
{
    int value;

    for (int i = 0; i < n; i++)
    {
        int x = arr[i];
        int reminder, reversal = 0;

        while (x != 0)
        {

            reminder = x % 10;
            reversal = reversal * 10 + reminder;
            x = x / 10;
        }

        if (reversal == arr[i])
        {
            value=0;
        }
        else
        {
            value=1;
        }
    }

    return value;
}
int main()
{

    int n, arr[100];
    printf("Enter no o elements in array...\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d \n", i);
        scanf("%d", &arr[i]);
    }

    printf("Array elements: \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    int ans= palindrome(n, arr);
    printf("\n %d", ans);
}
