// // CHECK IF PANGRAM OR NOT 
// #include<stdio.h>
// #include<string.h>
// int main(){
//     // take the string
//     char str[50];        
//     int pangram = 1;

//     int alpha[26] = {0};
//     fgets(str, strlen(str), stdin);
//     str[strcspn(str,"\n")] = '\0';

//     for(int i=0; i<sizeof(str); i++){
//         char ch = str[i];
//         if(ch>='A'&& ch<='Z'){
//             ch = ch-'A'+'a';
//         }
//         if(ch >= 'a' && ch <= 'z'){
//             alpha[ch-'a'-1] = 1;
//         }
//         for(int i=0; i<26; i++){
//             if (alpha[i] == 0){ 
//                 pangram = 0; 
//                 break;
//             }
//         }
//         if(pangram){
//             printf("The entered string is a pangram");
//         } else 
//             printf("The entered string is NOT a pangram");
//     return 0;
//     }
// }



// // CHECK IF INPUT STRING IS PANGRAM OR NOT
// // 1. pangram contains all the letters of the alphabets. 
// // 2. if it doesnt contain, it is not a pangram. 
// // 3. to find the same, we will iteratively 
//     // a. take the string element
//     // b. convert it into sutable index number
//     // c. mark the array of 26 elements with 1. 
// // 4. finally, check if the array elements is filled with ones or not. 
//     // if yes, it is pangram. 
//     // else it is not. 
// // need str[], arr[26], 

// #include<stdio.h>
// #include<string.h>
// int main(){
//     // 1. take the input in the string. 
//     char str[100];
//     fgets(str, sizeof(str),stdin);
//     str[strcspn(str, "\n")] = 0;

//     // 2. create another array which shall hold the 26 alphabets filled with 0s. 
//     int arr[26] = {0};
    
//     // 3. iterate throught the string and find the  
//     for(int i=0; str[i]!='\0'; i++){
//         // 3a. convert the CAPS >> small letters
//         if(str[i] >= 'A' && str[i] <= 'Z'){
//             str[i] = str[i]+ 'a' - 'A';
//         }
//         // 3b. mark the array index as 1 for all the 
//         if(str[i]>= 'a' && str[i]<= 'z'){
//             arr[str[i]-'a'] = 1; 
//         }
//     }
//     // 4. check if the arr is having 1s all over or not and print accordingly. 
//     int pangram = 1;
//     for(int i=0; i<26; i++){
//         if(arr[i] != 1){
//             pangram = 0;
//             break;
//         }
//     }
//     if (pangram){
//         printf("Entered string is a pangram \n");
//     } else printf("Entered string is not a pangram \n");

// }





// // CHECK IF THE STRING IS PANGRAM OR NOT
// // 1. take the input of the string. 
// // 2. convert the upper characters to lower characters. 
// // 3. for every string in the str, iteratively see if this was covered or not. 
// // 4. if covered, mark it as the string. 
// #include<stdio.h>
// #include<string.h>
// int main(){
//     int arr[26] = {0}; //initially store all as 0s. 
//     char str[100];
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = 0;

//     // 2. conv UPPER CHAR to lower chars and
//     //  also conv the character to index and 
//     // also store 1 for every index found. 
//     for(int i=0; str[i]!='\0'; i++){
//         char ch = str[i];
//         if(ch>='A' && ch<='Z'){
//             ch = ch + ('A' - 'a');
//         }
//         if (ch>='a' && ch<='z'){
//             arr[ch - 'a'] = 1;
//         }
//     }
//     // check if the same is pangram or not by checking of array elements to be filled with 1s. 
//     int pangram = 1;
//     for(int i=0; i<26; i++){
//         if(arr[i] != 1){
//             pangram = 0;
//             break;
//         }
//     }
//     if(pangram){
//         printf("Entered string is a pangram. \n");
//     } else printf("Entered string is not a pangram. \n");
// }



// PRINT ALL THE POSSIBLIE PERMUTATION OF THE string elements
// WKT PRINTING ALL THE POSSIBLE PERMUTATIONS IS BASICALLY DOING SWAPPING RECURSIVELY. 
#include<stdio.h>
#include<string.h>
void permutation(char* str, int l, int r);
void swap(char* x, char* y);

void swap(char* x, char* y){
    char temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    // 1.take the inputs
    char str[10];
    fgets(str, sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';
    int size = strlen(str);
    // call the functions
    permutation(str, 0,size);
    return 0;
}

void permutation(char* str, int l, int r){
    // we will recursively perform swapping. Hence, need base case. 
    if(l==r){
        printf("%s, ",str);
    }else{
        for(int i=l; i<r; i++){
            swap((str+l), (str+i));
            permutation(str, l+1, r);
            swap((str+l),(str+i));
        }

    }
}

