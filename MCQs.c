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
