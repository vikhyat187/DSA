#include<stdio.h>
#include<math.h>
// void Reduce(int num){
//     int i=2,j,isPrime;
//     for (;i<num;i++){
//         if (num%i==0){
//             isPrime=1;
//             for (j=2;j<=i/2;j++){
//                 if (i%j==0){
//                     isPrime=0;
//                 }
//             }
//             if (isPrime==1)
//             printf("%d ",i);
//         }
//     }
// }

void Reduce(int n){
    while(n%2==0){
        printf("2 ");
        n=n/2;
    }
    //so now our n is an odd no
    for(int i=3;i<=sqrt(n);i++){
        while(n%i==0){
            printf("%d ",i);
            n=n/i;
        }
    }
    //now check if the n value is 1 dont print it
    if (n>2)
    printf("%d",n);
}

int main(){
    int n;
    scanf("%d",&n);
    Reduce(n);

    return 0;
}
