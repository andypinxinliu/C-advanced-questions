#include <stdio.h>

struct word{
    int number;
    char *name;
};

struct word list[10] = {{0, "zero"},
                        {1, "one"},
                        {2, "two"}, 
                        {3, "three"},
                        {4, "four"},
                        {5, "five"},
                        {6, "six"},
                        {7, "seven"},
                        {8, "eight"},
                        {9, "nine"}};

int main(){
    
    char num[100];
    scanf("%s" , num);
    int sum = 0;
    for(int i = 0; num[i]!= NULL; i++){
        sum = sum + num[i]-'0';
    }
    struct word out[100];
    int len2 = 0;
    if (sum == 0){
        out[len2].number = 0;
        out[len2].name = list[0].name;
        len2++;  
    }
    while(sum != 0){
        out[len2].number = sum % 10;
        out[len2].name = list[out[len2].number].name;
        sum = sum / 10;
        len2++;
    }
    for(int i = len2-1; i > 0; i--){
        printf("%s ",out[i].name);
    }
    printf("%s", out[0].name);
    
}