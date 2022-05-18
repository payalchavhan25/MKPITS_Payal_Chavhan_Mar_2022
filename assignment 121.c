#include<stdio.h>
#include<conio.h>
int test();
void main()
{
	int test();
    int arr_size;
    int array1[] = {1, 5, 6, 9, 10, 17};
    arr_size = sizeof(array1)/sizeof(array1[0]);
    printf("%d",test(array1, arr_size));
    int array2[] = {1, 5, 5, 9, 10, 17};
    arr_size = sizeof(array2)/sizeof(array2[0]);
    printf("\n%d",test(array2, arr_size));
    int array3[] = {1, 5, 5, 9, 10, 17, 5, 5};
    arr_size = sizeof(array3)/sizeof(array3[0]);
    printf("\n%d",test(array3, arr_size));
  }    
  int test(int nums[], int arr_size)
         {
            for (int i = 0; i < arr_size - 1; i++)
             {
                if (nums[i] == 5 && nums[i] == nums[i + 1]) return 1;
              }
            return 0;
        }