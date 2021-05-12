// void matrixaddition(int A[][100],int B[][100],int C[][100],int row,int col) { 
    
//     int i,j;
//     for (int i=0;i<row;i++){
//         for (int j=0;j<col;j++){
//             C[i][j]= A[i][j]+B[i][j];
//         }
//     }
//   }
#include<string.h>
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

// int main(){
//     int *res =  fn();;
//     cout<<*res;

//     return 0;
// }


// int main(){
//     int a[]={12,45,67,21};
//     for (int i=0;i<4;i++)
//     printf("%d %d %d %d\n",a[i],*(a+i),*(i+a),i[a]);

//     return 0;
// }

// int main(){
//     char *str;
//     printf("Enter the string");
//     scanf("%s",&str);
//     char *temp=str;
//     if (!strcmp(strrev(str),temp))
//     printf("The strings are equal");
// }

// int checkstr(char *str,char *temp){
//     int j=0;
//     for (int i=strlen(str);i>=0;i--){
//         if (str[i]!=temp[j++]){
//         return 0;
//         break;
            
//         }
//     }
//     return 1;
// }
// int main(){
//     char *str;
//     printf("Enter the string");
//     scanf("%s",&str);
//     char *temp=str;

//     printf("%d",checkstr(str,temp));
//     if (checkstr)
//     return 0;
// }


#include<ctype.h>
int main(){
    char *str;
    gets(str);
    char ch;
    int dcount=0, ucount=0, lcount=0, acount=0, scount=0, special_count=0;
    for (int i=0;i<strlen(str);i++){
        ch = str[i];
        
    }
}