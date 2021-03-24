#include<bits/stdc++.h>
using namespace std;
void timetowords(int hour,int min){
    char nums[][64]={"zero","one","two","three","four","five","six","seven","eight","nine","ten",
    "eleven","tweleve","thirteen","fourteen","fifeteen","sixteen","seventeen","eighteen",
    "nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five"
    ,"twenty six","twenty seven","twenty eight","twenty nine"};

    if (min==0){
        printf("%s o' clock\n",nums[hour]);
    }

    else if (min==1){
        printf("one minutes past %s\n",nums[hour]);
    }
    else if (min==59){
        printf("one minutes past %s\n",nums[(hour%12)+1]);
    }

    else if (min==15){
        printf("quater past %s\n",nums[hour]);
    }

    else if (min==30){
        printf("half past %s\n",nums[hour]);
    }

    else if (min == 45){
        printf("quater to %s\n", nums[(hour%12) +1]);
    }
    else if (min <=30){
        printf("%s minutes past %s\n",nums[min],nums[hour]);
    }
    else {
        printf("%s minutes to %s\n",nums[60-min],nums[(hour%12)+1]);
    }
}

int main(){
    timetowords(5,39);
    timetowords(6,00);
    timetowords(6,10);
    timetowords(6,12);
    timetowords(6,15);
    timetowords(6,20);
    timetowords(6,30);
    timetowords(6,45);
    timetowords(6,59);
    
    return 0;
}