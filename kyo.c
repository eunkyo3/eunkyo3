#include <stdio.h>
/* int change_val(int *pi)
{
    printf("---- change_val 함수 안에서 ----\n");
    printf("pi 의 값 : %p \n", pi);
    printf("pi 가 가리키는 것의 값 : %d \n", *pi);

    *pi = 3;
}
int main()
{
    int i = 0;

    printf("i의 변수의 주소값 : %x \n", &i);
    printf("호출 이전 i 의 값 : %d \n", i);
    change_val(&i);
    printf("호출 이후 i 의 값 : %d \n", i);

    return 0;
} 

int swap(int *x, int *y);
int main()
{
    int i, j;
    i = 3;
    j = 5;
    
    printf("SWAP 이전 : i : %d, j : %d \n", i, j);
    swap(&i, &j);
    printf("SWAP 이후 : i : %d, j : %d \n", i, j);

    return 0;
}
int swap(int* x, int *y) 
{
    int temp;

    temp = *x;

    *x = *y;
    *y = temp;

    
    return 0;
} */

# define MAX_SIZE 5
int bubble_sort(int* list, int MAX_SIZE)
{
    for(int i = 0; i <= MAX_SIZE - 1; i++)
    {
        for(int j = 0; j <= MAX_SIZE - 1; j++)
        {
            int temp = 0;

            // *(list+i) > *(list+j)
            if(list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = list[temp];
            }
        }
    }
}
int main()
{
    int i;
    int list[5] = {7, 4, 5, 1, 3};

    bubble_sort(&list, MAX_SIZE);

    for(i = 0; i < MAX_SIZE; i++)
    {
        printf("%d\n", list[i]);
    }

    return 0;
}