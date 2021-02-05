#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max_len 50

int main() 
{
char ch;
char word[max_len];
char sen[max_len];

scanf("%c",&ch);
printf("%c\n",ch);
scanf("%s",word);
printf("%s\n",word);
scanf("\n");
scanf("%[^\n]%*c",&sen);
printf("%s\n",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}