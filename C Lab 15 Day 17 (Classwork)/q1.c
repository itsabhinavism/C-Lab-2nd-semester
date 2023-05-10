#include<stdio.h>
int main(){
    char str[ ]="Adil";
    int i;
    for(i=0;str[i]!='\0';i++)
    {
    printf("Character = %c\t",str[i]);
     printf("Address = %u\n",str[i]);
    }
    
}