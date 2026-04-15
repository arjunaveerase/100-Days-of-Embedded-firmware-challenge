// REMOVE CHARACTERS IN S1 CONTAINED INSIDE S2. 
#include<stdio.h>
#include<string.h>
void str_rmv(char* str1, char* str2);
int main(){
    char str1[50];
    char str2[30];
    
    // read 2 strings. 
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1,"\n")]= 0;
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2,"\n")] = 0;
    // function call
    str_rmv(str1,str2);
    return 0;
}

void str_rmv(char* str1, char* str2){
    int k=0;
    for(int i=0; str1[i]!='\0'; i++){
        int found = 0;
        for(int j=0; str2[j]!='\0'; j++){
             if(str1[i] == str2[j]){
                found =1;
                break;
            }
        }
        if (found == 0){
            str1[k] = str1[i];
            k++;
        }
    }
    str1[k] = '\0';
    printf("%s",str1);
}


// IMPLIMENTATION OF STRTOK();
// #include<stdio.h>
// #include<string.h>
// char* my_strtok(char*, char*);
// int main(){
//     // take the 2 string inputs 
//     char str1[50], delim[3], *token;
//     fgets(str1, sizeof(str1), stdin);
//     str1[strcspn(str1, "\n")] = '\0';
//     fgets(delim, sizeof(delim), stdin);
//     delim[strcspn(delim,"\n")] = '\0'; 

//     // function call
//         token = my_strtok(str1, delim);
//         printf("%s ",token);
//     return 0;
    
// }

// char* my_strtok(char* str1, char* delim){
//     char* start = str1;
//     for(int i=0; str1[i]!='\0'; i++){
//         for(int j=0; delim[j] != '\0'; j++){
//             if(str1[i] == delim[j]){
//                 str1[i] = '\0';
//                 return start;
//             }
//         }
//     } 
// }



// // corrected code. 
// #include <stdio.h>
// #include <string.h>

// char *my_strtok(char *, char *);

// int main()
// {
//     char str1[50], delim[20], *token;

//     fgets(str1, sizeof(str1), stdin);
//     str1[strcspn(str1, "\n")] = '\0';

//     fgets(delim, sizeof(delim), stdin);
//     delim[strcspn(delim, "\n")] = '\0';

//     token = my_strtok(str1, delim);
//     if (token != NULL)
//         printf("%s\n", token);

//     token = my_strtok(NULL, delim);
//     if (token != NULL)
//         printf("%s\n", token);

//     token = my_strtok(NULL, delim);
//     if (token != NULL)
//         printf("%s\n", token);

//     return 0;
// }

// char *my_strtok(char *str1, char *delim)
// {
//     static char *input = NULL;
//     char *token_start;

//     if (str1 != NULL)
//         input = str1;

//     if (input == NULL || *input == '\0')
//         return NULL;

//     token_start = input;

//     while (*input != '\0') {
//         for (int j = 0; delim[j] != '\0'; j++) {
//             if (*input == delim[j]) {
//                 *input = '\0';
//                 input++;
//                 return token_start;
//             }
//         }
//         input++;
//     }

//     if (*token_start == '\0')
//         return NULL;

//     return token_start;
// }