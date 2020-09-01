#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<memory.h>
#include<string.h>

void print_array(int size, int * arr){
   int i;
   for(i = 0 ; i < size; i++){
      printf("%d ", arr[i]);
   }
}

int main(){
   int N;
    int A[100000] = {0};
   int i, j;

   scanf("%d", &N);

   for(i = 0 ; i < N ; i++){
      scanf("%d", &A[i]);
   }

    int temp;
    
    for(i=0;i<N;i++)
    {
        for(j=0;j<(N-i)-1;j++)
        {
            if(A[j]>A[j+1])
            {
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
            }
        }

    }

   print_array(N, A);
   return 0;
}
