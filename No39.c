#include<stdio.h>
void bubble_sort(int array[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}
int main(){
    int N,count;
    int A[4];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d%d%d",&A[0],&A[1],&A[2]);
        bubble_sort(A,3);
        A[3]=A[0]+A[1]+A[2];
        if(A[0]>=60){
            printf("P\n");
            continue;
        }
        if(A[3]>=220&&A[1]>=60){
            printf("P\n");
            continue;
        }
        if(A[3]<220&&A[1]>=60){
            printf("M\n");
            continue;
        }
        if(A[2]>=80){
            printf("M\n");
            continue;
        }
        printf("F\n");

    }
    return 0;
}