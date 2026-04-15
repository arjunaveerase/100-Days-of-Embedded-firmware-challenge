// // The formatted receipt:
// // 1. take the inputs for ID, price, category as inputs.
// // 2. format the outputs usign %05d and %-.2f etc
// // 3. display on terminal output
// #include<stdio.h>
// struct input{
//     int ID;
//     float price;
//     char size;
// };
// int main(){
//     int num;
//     printf("Enter the number of rows:");
//     scanf("%d",&num);

//     struct input sku[num];
//     for(int i=0; i<num; i++){
//         printf("Enter the ID\n");
//         scanf ("%d",&sku[i].ID);
//         printf("Enter the price\n");
//         scanf("%f", &sku[i].price);
//         printf("Enter the size\n");
//         scanf(" %c",&sku[i].size);
//     }
    
//     printf("%-5s %-8s %-8s\n","ID","Price", "Category");
//     for(int i=0; i<num; i++){
//         printf("%-5d %-.2f %8c\n", sku[i].ID, sku[i].price, sku[i].size);
//     }
// }







// // WRITE A FUNCTON EMULATING WORD COUNT FUNCTION OF C. 
// // Basically to find # of characters, lines and words. 
// #include<stdio.h>
// int main(){
//     int ch;
//     int noch = 0;
//     int word_count=0;
//     int line_count=0;
//     int char_count=0;
//     FILE* fp = fopen("example.txt","r");
//     if(fp == NULL){
//         printf("Error: couldn't open the specified file. \n");
//     }
//     while((ch = fgetc(fp))!=EOF){
//         printf("%c",ch);
//         char_count++;
//         if(ch == '\n'){
//             line_count++;
//         }
//         if(ch == ' ' || ch == '\n' || ch == '\t' ){
//             noch = 1;
//         }if(noch == 1){
//             word_count++;
//             noch = 0;
//         }
//     }
//     fclose(fp);
    
//     printf("\n\n");
//     printf("# of characters: %d\n",char_count);
//     printf("# of words: %d\n",word_count);
//     printf("# of lines: %d\n",line_count);
//     return 0;

// }









// FILE COPY AND CASE CONVERSION OF A GIVEN FILE. 
// 1. point and read a file till EOF
// 2. 
// #include<stdio.h>
// int main(){

// }




// FORMAT FILTER 
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i=0;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    while(str[i]!= '\0'){
        if(str[i]>='0' && str[i]<='9'){
            putchar(str[i]);
        }
        i++;

    }
    return 0;
}


// // PERSISTANT STRUCTUED DATA STORAGE -- to be done. 
// #include<stdio.h>
// int main(){
//     char str[100];
//     int fp = fopen("database.txt",'a+');
//     fgets(str, sizeof(str), stdin);
//     fputs(str, fp);
// }