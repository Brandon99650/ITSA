#include <stdio.h>

int main(void) {
    int num = 0;
    int Total = 0, member = 0, gift = 0;
    scanf("%d", &num);

    for(num;num>0;num--) {
        
        scanf("%d%d%d", &Total, &member, &gift);

        int A[gift];
        for (int i = 0; i < gift; i++) {
            A[i] = 0;
            scanf("%d", &A[i]);
        }

        for (int i = 0; i < gift; i++) {
            for (int j = 0; j < gift; j++) {
                if (A[i] < A[j]) {
                    int temp = 0;
                    temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                }
            }
        }
        int count= 0;
        for (int i = 0; i < member; i++) {
            count += A[i];
        }
        //printf("%d\n", k);
        if(count>Total){
            printf("Impossible\n") ;
        }
        else{
            printf("%d\n", count);
        }
    }
    return 0;
}
