#include<stdio.h>

int LSearch(int A[], int key, int size)
{
    for(int i=0; i<size; i++)
    {
        if(key==A[i])
        return i;
    }
    return -1;
}

int main()
{
    int i, size,key, A[50];
    printf("Size of an array");
    scanf("%d", &size);
    printf("Enter an array\n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the key which u want to search");
    scanf("%d", &key);
    //int result=LSearch(A, key, size);
    printf("%d", LSearch(A, key, size));
    return 0;
}