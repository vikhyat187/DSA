// void matrixaddition(int A[][100],int B[][100],int C[][100],int row,int col) { 
    
//     int i,j;
//     for (int i=0;i<row;i++){
//         for (int j=0;j<col;j++){
//             C[i][j]= A[i][j]+B[i][j];
//         }
//     }
//   }
#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int x=20;
//     int *p1,*p2;
//     p1=&x;
//     p1=p2;
//     p1+=1.0;
//     // printf("%d  are ",p1-p2);
//     printf("%p",p1);

// }



int addition(int a,int b){
    return a+b;
    
}



int subtraction(int a,int b){
    return a-b;

}

// int main(){
//     int p,q;
//     int (*ptr)(int,int);
//     scanf("%d,%d",&p,&q);
//     ptr =&addition;
//     int res= *ptr(3,5);
//     cout<<res;
// }


int *fn(){
    int a;
    int *ptr= &a ;
    return ptr;
}

int main(){
    int *res =  fn();;
    cout<<*res;

    return 0;
}