#include <stdio.h>
#include <assert.h>
#include <string.h>


void deepest_substring(const char str[], char out[]);

int main(){

    const char str1[]="a+(b+(c+(d+e))+f)+g";
    char out1[30];
    deepest_substring(str1,out1);   
    assert(strcmp(out1,"d+e"));

    const char str2[]="((a)+b)+c+(d+e)+f+g";
    char out2[30];
    deepest_substring(str2,out2);   
    assert(strcmp(out2,"a"));

    const char str3[]="(a+b)+c+(d+e)";
    char out3[30];
    deepest_substring(str3,out3);   
    assert(strcmp(out3,"a+b"));
    
    const char str4[]="a+b+c";
    char out4[30];
    deepest_substring(str4,out4);   
    assert(strcmp(out4,"a+b+c"));
    
    const char str5[]="a";
    char out5[30];
    deepest_substring(str5,out5);   
    assert(strcmp(out5,"a"));
    
    const char str6[]="A";
    char out6[30];
    deepest_substring(str6,out6);   
    assert(strcmp(out6,"A"));
    
    const char str7[]="((Z+a)+b+c+e)";
    char out7[30];
    deepest_substring(str7,out7);   
    assert(strcmp(out7,"Z+a"));
    
    const char str8[]="(A+((B+C)+D))";
    char out8[30];
    deepest_substring(str8,out8);   
    assert(strcmp(out8,"B+C"));
    
    const char str9[]="A+B+C";
    char out9[30];
    deepest_substring(str9,out9);   
    assert(strcmp(out9,"A+B+C")); 
    
    
    printf("All cases are passed!\n");
    
}





void deepest_substring(const char str[], char out[]){
    int i=0; 
    int n=0; //length

    
    while(str[i]!=')'){
        i++;
    }
    
    int position=i; //  ')' position
    
    while(str[i]!='('){
        i--;
    }

    
    int temp=i;
    for(i=temp+1; i<position-1; i++){
        out[n]=str[i];
        n++;
    }
}








