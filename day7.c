// //1. REMOVE BLACK SPACES
// #include<string.h>
// #include<stdio.h>
// int main(){
//     char str[200];
//     int read = 0; 
//     int write = 0;
//     fgets(str,sizeof(str),stdin);
//     str[strcspn(str,"\n")] = '\0';
//     for(int read =0; str[read] != '\0'; read++){
//         if(str[read] != ' ' || str[read] != '\t' && str[read+1] != ' '){
//             str[write] = str[read];
//             write++;
//         }

//     }
//     str[write] = '\0';
//     printf("Result: %s\n",str);
// }


// // 2. GETWORD() basically the length of the string. 
// #include<stdio.h>
// #include<string.h>
// void getword(char* str);
// int main(){
//     char str[200];
//     fgets(str,sizeof(str),stdin);
//     getword(str);
//     return 0;
// }

// void getword(char* str){
//     str[strcspn(str,"\n")] = '\0';
//     for(int i=0; i<strlen(str); i++){
//         if(str[i] == ' '){
//             str[i] = '\0';
//             break;
//         } 
//     } printf("You entered %s and its length is %zu\n",str,strlen(str));
// }



// 3. IMPLIMENTING ATOI FUNCTION: Basically string to integer convertor. 
#include<string.h>
#include<stdio.h>
void my_atoi(char* str);
int main(){
    char str[70];
    printf("Enter a neumeric string: ");
    fgets(str,sizeof(str),stdin);
    my_atoi(str);
    return 0;
}
void my_atoi(char* str){
    int sign=1;   
    int i=0;
    int result = 0, answer = 0;

    if(str[i] == '-'){
        sign = -1;
        i++;
    } 
    else if(str[i] == '+'){
        sign = 1;
        i++;
    } 

    if((str[i]=='+' && str[i+1] == '-') || str[i] == '-' && str[i+1] == '+'){
        sign = 0;
    }

    while(str[i] >= '0' && str[i]<='9'){
        result = (result * 10) + (str[i]-'0');
        i++;
    }
    answer = result * sign;
    printf("String to Integer is : %d \n", answer);
}


// 4.  INTEGER TO ASCII FUNCTION:


// #include<stdio.h>
// void my_itoa(int itoa);
// int main(){
//     int itoa;
//     printf("Enter the number: ");
//     scanf("%d",&itoa);
//     my_itoa(itoa);
//     return 0;
// }

// void my_itoa(int itoa){
//     char str[50];
//     int i=0;
//     if(itoa == 0) str[i++] = '0';
//     while(itoa>0){
//         str[i++] = itoa % 10 +'0';
//         itoa /= 10;
//     } str[i] = '\0';
//     for(int j=0, k=i-1; j<k; j++, k--){
//         char temp = str[j];
//         str[j] = str[k];
//         str[k] = temp;
//     }
//     printf("Integer to string is %s\n",str);

// }


// // REVERSE THE STRING USING ITERATIVE METHOD. 
// #include<stdio.h>
// #include<string.h>

// void str_rev(char* str){
//     int start = 0;
//     int end = strlen(str)-1;

//     while(start<end){
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;
//         start++;
//         end--;
//     }
//     printf("Reversed string: %s \n",str);
// }

// int main(){
//     char str[40];
//     printf("Enter the string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = 0;
//     str_rev(str);
// }



// // 6. REVERSE THE STRING USING THE RECURSIVE METHOD. 
// #include<stdio.h>
// #include<string.h>
// void rec_rev(char* str, int, int);
// int main(){
//     char str[50];
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0';
//     rec_rev(str, 0, strlen(str)-1);
//     printf("Reversed string: %s\n",str);
//     return 0;
// }
// void rec_rev(char* str, int start, int end){
//     if (start >= end){
//         return;
//     }
//     char temp = str[start]
//     ;
//     str[start] = str[end];
//     str[end] = temp;
//     rec_rev(str, start+1, end-1);
// }


// // DELIMITERS STRTOK();
// #include<stdio.h>
// #include<string.h>
// char* my_strtok(char* str, char* delim);
// int main(){
//     char str[50], delim[3];
//     printf("Enter the string: ");
//     fgets(str, sizeof(str), stdin);
//     printf("Enter the delimiters: ");
//     fgets(delim, sizeof(delim),stdin);

//     my_strtok(str,delim);
//     return 0;
// }

// char* my_strtok(char* str, char* delim){
//     int pos = 0;
//     int end = strlen(str)-1;
//     int k=0;
//     while(pos<end){
//         if(str[pos] == ';'||':'){
//             str[pos] = '\0';
//             printf("%s\n",str);
//         }pos++; 
//     } 
// }