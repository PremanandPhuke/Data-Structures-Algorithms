/*
Given an array of size N and you have to tell whether the array is perfect or not.
An array is said to be perfect if it's reverse array matches the original array. If the array is perfect then print "PERFECT" else print "NOT PERFECT".

xample 1:

Input : Arr[] = {1, 2, 3, 2, 1}
Output : PERFECT
Explanation:
Here we can see we have [1, 2, 3, 2, 1] 
if we reverse it we can find [1, 2, 3, 2, 1]
which is the same as before.
So, the answer is PERFECT.

Example 2:

Input : Arr[] = {1, 2, 3, 4, 5}
Output : NOT PERFECT

*/


#include<stdio.h>
#include<conio.h>


int Perfect_elementes(int n, int arr[100]){

    int ans;
    int reverse[100];
    for(int i=0;i<n;i++){
        reverse[(n-1)-i]=arr[i];
    }

    printf("Reversed Array is: ");
    for(int i=0;i<n;i++){
       printf(" %d ", reverse[i]);
    }


    for(int i=0;i<n;i++){
        
        if(reverse[i]=arr[i]){
            ans=0;
        }
        else{
            ans=1;
        }
    }

    if (ans==0)
    {
        /* code */
        printf("\n PERECT \n");
    }
    else{
        printf("\n NOT PERECT \n");

    }
    

}


int main(){

    int n, arr[100];
    printf("Enter no of elements in array...\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Sum of Array elements: \n");
    Perfect_elementes(n, arr);


}