// STRINGS
// //1. print strings
// #include<stdio.h>
// void print_string(char* str);df

// int main(){
//     // USE STRING ARRAY
//     char str[100];
//     printf("Enter the string: ");
//     fgets(str,sizeof(str),stdin);
//     print_string(str);//FUNCTION CALL
//     return 0;
// }

// // void print_string(char* str){
// //     printf("%s",str);
// // }

// //FUNCTION DEFINITION
// void print_string(char* str){
//     for(int i=0; str[i]!='\0'; i++){
//         printf("%c",str[i]);
//     }
// }


// // T57 - Check if character is found in a string strchr()
// #include<stdio.h>
// int main(){
//     char str[30];
//     char chr;
//     printf("Enter the String: ");
//     fgets(str, sizeof(str),stdout);
//     scanf("%c",&chr);

//     printf("%c",strchr(str,chr));
// }



// //search if the character is present in a string or not. 

// #include<stdio.h>
// #include<string.h>
// void char_search(char *str, char *char_search){
//     char* ans = strchr(str, char_search);
//     if (ans!= NULL){
//         printf("%c Found",char_search);
//     } else printf("%c Not Found",char_search);
// }

// int main(){
//     char str[100];
//     char ch;
//     fgets(str,sizeof(str),stdin);
//     scanf("%c",&ch);
//     char_search(str, ch);
//     return 0;
// }




// // CHECK IF THE SUBSTRING IS PRESENT IN A STRING OR NOT USING STRING functions
// #include<string.h>
// #include<stdio.h>
// void search_substring(char* str1, char* str2);
// int main(){
//     char str1[40], str2[20];
//     fgets(str1,sizeof(str1),stdin);
//     str1[strcspn(str1,"\n")] = 0;

//     fgets(str2,sizeof(str2),stdin);
//     str2[strcspn(str2,"\n")] = 0;

//     // function call
//     search_substring(str1,str2);
//     return 0;
// }
// // function definition:
// void search_substring(char* str1, char* str2){
//     char* ans = strstr(str1, str2);
//     if(ans!=NULL){
//         printf("%s",ans);
//     } else printf("Substring not found");
// }

// // CALCULATE THE LENGTH OF THE STRING 
// #include<stdio.h>
// #include<string.h>
// int main(){
//     // take the string
//     char str[40];
//     fgets(str,sizeof(str),stdin);
//     str[strcspn(str,"\n")] = 0; //remove \n due to fgets
//     int ans = strlen(str);
//     printf("Length of string is %d\n",ans);
// }



// // PROGRAM TO COPY A STRING
// #include<stdio.h>
// #include<string.h>
// int main(){
//     // create strings
//     char str1[40],str2[40];
//     fgets(str1,sizeof(str1),stdin);
//     strcpy(str2,str1);
//     printf("%s",str2);
// }


// // PROGRAM TO COMPARE TWO STRINGS
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[40],str2[40];
//     fgets(str1,sizeof(str1),stdin);
//     fgets(str2,sizeof(str2),stdin);
//     int ans = strcmp(str1,str2);
//     if(ans==0){
//         printf("Both strings are equal \n");
//     } else{
//         printf("Both strings are not equal \n");
//     }
// }


// // CHECK IF THE STRING IS PALENDROME OR NOT. 
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[40];
//     int flag=0;
//     printf("Enter a string: ");
//     fgets(str,sizeof(str),stdin);
//     str[strcspn(str,"\n")] = 0;
//     int length = strlen(str);
//     for(int i=0; i<length/2; i++){
//         if(str[i]!=str[length-i-1]){
//             flag=1;
//             break;
//         }
//     }
//     if(flag==1){
//         printf("%s is NOT Palendrome\n",str);
//     }else printf("%s is a Palendrome\n",str);
//     return 0;
// }


// // PALENDROME OR NOT USING 2 POINTER TECHNIQUE
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[40];
//     int flag = 0;
//     fgets(str,sizeof(str),stdin);
//     str[strcspn(str,"\n")] = 0;
//     int length = strlen(str);

//     int i=0; 
//     int j=strlen(str)-1;
//     while(i<j){
//         if(str[i] != str[j]){
//             flag = 1;
//             break;
//         }
//         i++;
//         j--;
//     }if(flag==0){
//         printf("%s is a Palendrome.\n",str);
//     } else printf("%s is NOT a Palendrome.\n",str);
// }


// // COMPARE STRING 2 WITH STRING 1 UPTO N CHARACTERS
// #include<string.h>
// #include<stdio.h>
// void cmp_n(char*,char*,int);
// int main(){
//     char str1[40], str2[40];
//     int n;

//     fgets(str1,sizeof(str1),stdin);
//     str1[strcspn(str1,"\n")] = 0;
//     fgets(str2,sizeof(str2),stdin);
//     str2[strcspn(str2, "\n")] = 0;
//     scanf("%d",&n);

//     cmp_n(str2,str1,n);
//     return 0;
// }

// void cmp_n(char* str2, char* str1, int n){
//     int ans = strncmp(str2,str1,n);
//     if(ans == 0){
//         printf("Both are equal\n");
//     }else if(ans > 0){
//         printf("%s is greater than %s",str2,str1);
//     }else if(ans < 0){
//         printf("%s is less than %s",str2,str1);
//     }
// }




// CONCATINATE TWO STRINGS
#include<string.h>
#include<stdio.h>
int main(){
    char str1[40], str2[40];
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")] = 0;
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")] = 0;
    char* ans = strcat(str1,str2);
    printf("%s",ans);
}


