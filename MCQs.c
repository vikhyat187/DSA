    // #include <stdio.h>
    // void reverse(int i);
    // int main()
    // {
    //     reverse(1);
    // }
    // void reverse(int i)
    // {
    //     if (i > 5)
    //         return ;
    //     printf("%d ", i);
    //     return reverse((i++,i));
    // }

    #include<stdio.h>
    // int g(){
    //     printf("hello");
    //     return 1;
    // }
    // int f(){
    //     printf("hi");
    //     return 0;
    // }
    // int main(){
    //   int i=  f()+ g();
    //   printf("%d",i);
    //     return 0;
    // }



//Here the answer is True but its false as the relational operator expects same type operand on both the sides
//Here sizeof returns unsigned long int but -1 is signed int so it is converted to unsigned int 
//which is 0xFFFFFFFF so 4>0xFFFFFFFF which is false.*****
// int main(){
//     if (sizeof(int)>-1)
//         printf("True");
//     else 
//     printf("false");

//     return 0;
// }


// Here the expected answer is true but it is false as C stores float as -> double so 0.1 is a double 
// which is checked with a float value that is 0.1 so float 0.1 is converted to double which has a diff value from the one in 
// 0.1 double with 10 precision digits.
// int main(){
//     float f = 0.1;
//     if (f == 0.1)
//         printf("True");
//     else printf("false");

// }


// Here the working of sizeof should be understood the sizeof is checked at compile time there is nothing sizeof at runtime 
// so at the time of running that whole expression a =sizeof(...) is replaced by a = 4; all inside is not checked at run time

// int main(){
//     int a,b=1,c=1;
//     a=sizeof(c = ++b+1);
//     printf("%d %d %d ",a,b,c);
// }



// SIGSEG is thrown whenever we have illegal access of memory we are reading or writing the part of memory which is not supposed to be read or written
// Here we are not creating a NULL ptr means assigning to mem 0 location and assigning the value 0 to it we are creating a ptr and it is pointing to address 0 trying to assign value to 0 our compiler will not allow that
// int main(){
//     char *p = 0;
     
//     *p = 'A';
//     printf("value at p  and %p",p);
// }


// It will print nothing as the else if for inner if and nothing for outer if so the condition fails
// int main(){
//     int a =1 ,b=3,c=2;
//     if(a>b)
//         if (b>c)
//             printf("a>b and b>c\n");

//     else
//        printf("something else");
//         return 0;
// }


// int main(){
//     extern int i;
//     i=20;
//     printf("%d",i);
//     return 0;
// }
// The error is undefined refernce to i. Since i is an extern variable linker tries to find the 
// declaration of i, but it cannot find it.

// void display(char *string){
//     printf("%s printed",string);
// }
// int main(){
//     char string[] = "Hello world";
//     char *string1 = "Hello world";
//     // char *string1 = {'h','e','l','l','o','\0'};
//     string1[0]='i';//sigsev fault trying to access mem that is not available
//     display(&string1[2]);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int i=2;
//     i=i++ + i;
//     printf("%d",i);
// }

// #include<stdio.h>
// int f1(){printf("Geeks"); return 1;}
// int f2(){printf("ForGeeks"); return 1;}
// int main(){
//     int p=f1()+ f2();
//     return 0;
// }

//****https://www.geeksforgeeks.org/sequence-points-in-c-set-1/ img
// #include <stdio.h>
// int x = 20;
// int f1() { x = x+10; return x;}
// int f2() { x = x-5;  return x;}
// int main()
// {
//   int p = f1() + f2();
//   printf ("p = %d", p);
//   return 0;
// }



  // always initialize static elements by a constant only
  // compile time error
  // #include<stdio.h>
  // int main(){
  //   int x=10;
  //   static int y=x;
  //   if(x ==y){
  //     printf("e");
  //   }
  //   else if (x>y)
  //   printf("greater");
  //   else
  //   printf("less");
  //   return 0;
  // }

// #include<stdio.h>
// int main(){
//   int x =5;
//   int *const ptr = &x;
//   ++(*ptr);
//   int y=4;
//   printf("%d",*ptr);
//   return 0;
// }

//here the values are not swapped, but we may think values are swapped they are just changed in the fn but actual values are not affected.
// #include<stdio.h>
// void mystery(int *ptra,int *ptrb){
//   int *temp;
//   temp = ptra;
//   ptra=ptrb;
//   ptrb = temp;
// }
// int main(){
//   int a=2016,b=0,c=4,d=42;
//   mystery(&a,&b);
//   if (a<c)
//   mystery(&c,&a);
//   mystery(&a,&d);
//   printf("%d\n",a);
// }

// #include<stdio.h>
// int main(){
//   int var;
//   void *ptr = &var;
//   *ptr = 5;//here error occurs void *ptr;
//   printf("var = %d and Ptr =%d",var,*ptr);
//   return 0;
// }

// #include<stdio.h>
// int main(){
//   int a= 300;
//   char *b = (char *)&a;
//   *++b=2;
//   printf("%d",a);
//   return 0;
// }

// #include<stdio.h>
// int main(){
//   int a[10][20][30]={0};
//   a[5][2][1]=2;
//   printf("%d",*(*(*(a+5)+2)+1));
//   return 0;
// }

// #include<stdio.h>
// int main(){
//   int a[][3]={1,2,3,4,5,6};
//   int (*ptr)[3] =a;
//   printf("%d %d ",(*ptr)[1],(*ptr)[2]);
//   ++ptr;
//   printf("%d %d ",(*ptr)[1],(*ptr)[2]);
//   return 0;
// }

// Always result of logical operator is 0 or 1
// if first has non zero value then second is not evaluated
// #include<stdio.h>
// int main(){
//   printf("%d",(11111111||00000010));
//   printf("%d\n",(10000000||00000000));
//   printf("%x",-1<<4);
// }
// The operands of logical-AND and logical-OR expressions are evaluated from left to right. If the value of the first operand is sufficient to determine the result of the operation, the second operand is not evaluated. This is called "short-circuit evaluation." There is a sequence point after the first operand. See Sequence Points for more information

// #include<stdio.h>
// int main(){
//   char string[]="Hello world";
//   display(string);
// }
// void display(char * string){
//   printf("%s",string);
// }
// compiler assumes implicit type as int but when it finds string it throws an error

// #include<stdio.h>
// int main(){
//   int c =--2;
//   printf("%d",c);//here many will think the output as 1 but its wrong as -- cannot be applied on constant only var allowed.
//   // So its evaluated as -*- = plus 
// }

// #include<stdio.h>
// int main(){
//   int a[2][2][2] = {{10,2,3,4},{5,6,7,8}};//declared a 3d array but its typecasted to 2d based on no of values.
//   int *p,*q;
//   p=&a[2][2][2];
//   *q= ***a;
//   printf("%d-- %d" ,*p,*q);
//   return 0;
// }

// #include<stdio.h>
// int main(){
//   struct xx{
//     int x=3;
//     char name[]="hello";
//   };
//   struct xx *s;
//   printf("%d",s->x);
//   printf("%d",s->name);
// }
// You cannot initialize a structure variables

// #include<stdio.h>
// int main(){
//   printf("\nhello");
//   printf("\bllohgr");
//   printf("\rro"); //output as rollllohgr
// }

// #include<stdio.h>
// #define i 340
// int main(){
//   // int i=5;
//   #define i 343
//   printf("%d %d %d %d %d ",i++,i--,++i,--i,i);//error as it is just replaced by value 343 so the incre and decre cannot be applied to constants
// }

// #include<stdio.h>
// #define clrscr() 100
// int main(){
//   clrscr();//it is treated as 100 it is excecutable but no result to be printed
//   printf("%d",clrscr());
// }

// #include<stdio.h>
// int main(){
//   int a;
//   printf("%p",main);
//   printf("%p",scanf("%d",&a));
// }

// #include<stdio.h>
// int main(){
//   clrscr();
// }
// clrscr();

// #include<stdio.h>
// int main(){
//   char far *farther,*farthest;
//   printf("%d %d",sizeof(farther),sizeof(farthest));
// }

// #include<stdio.h>
// int main(){
//   int i=400,j=300;
//   printf("%d %d");
//   //works in DOS only
// printf takes the values of the first two assignments of the program. Any number of
// printf's may be given. All of them take only the first two values. If more number of
// assignments given in the program,then printf will take garbage values.
// }

// #include<stdio.h>
// int main(){
//   char *p;
//   p="hello";
//   printf("%c\n",*&*p);
// }

// #include<stdio.h>
// int main(){
//   int i =1;
//   while(i<=5){
//     printf("%d",i);
//     if (i>2)
//       goto here;
//     i++;
    
//   }
// }
// void fun(){
//   here:
//   printf("pp");
// }

