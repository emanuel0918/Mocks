#include<stdio.h>
#include<stdlib.h>

int main(){    
    int n1;
    scanf("%d",&n1);
    int i;
    int A_backup;
    int * A=(int*)malloc(n1*sizeof(int));
    for(i=0;i<n1;i++){
     scanf("%d",&A_backup);
     A[i]=A_backup; 
    }
    int * B=(int*)malloc(n1*sizeof(int));
    int add1;
    //int i;
    add1=A[0];
    for(i = 1; i < n1; i++){
        if(A[i] < add1){
            add1 = A[i];
        }
        B[i]=A[i]-add1;
    }
    
    int maximum_profit = 0;
    
    for(i=1; i < n1; i++){
        if(B[i] > maximum_profit){
            maximum_profit = B[i];
        }
    }
    printf("%d\n",maximum_profit);
 return 0;   
}
