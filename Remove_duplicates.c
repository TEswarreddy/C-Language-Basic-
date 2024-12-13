#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,temp;
    printf("Enter the Size :\t");
    scanf("%d",&size);
    int array[size];
    int result[size];
    int count=0;

    printf("Enter the elements:\t");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    Printf("\n");
    //sorting the elements
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;

            }
        }
    }
    //checking the elements are sorted or not
    for(int i=0;i<size;i++)
    {
        printf("%d\t",array[i]);
    }
    //inserting unique elements in array
    result[0]=array[0];
    int pos=1;
    for(int i=0;i<size;i++)
    {
        if(array[i]!=array[i+1])
        {
            result[pos]=array[i+1];
            pos++;
        }
    }

    //After removes duplicates the unique values are
    for(int i=0;i<pos-1;i++)
    {
        printf("%d\t",result[i]);
    }


    return 0;
}
