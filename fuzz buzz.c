#include <stdio.h>

int main() {
    // Write C code here
    int number;

    printf("Enter number: ");
    scanf("%d",&number);
    if (number%3==0){
        printf("Fuzz\n");}
        else{
        printf("Not a multiple of three\n");
    }
    if(number%5==0){
        printf("buzz\n");} 
        else{ printf("not a multiple of five\n");}
        
    if(number%7==0){
        printf("fuzz buzz\n");}
        else{
            printf("Not a multiple of seven\n");}
        
    

    return 0;
}