// // WRITE A PROGRAM TO FIND THE OCCOURANCES OF CHARACTER 'C' USING ftell()
// // 1. open a file, put content in a file
// // 2. read char by char and if c is found, do count++ and ftell(fp);
// // 3. close the file

// #include<stdio.h>
// int main(){
//     FILE* fp; // open the file
//     char ch; // char by char oprn. 
//     char c1;
//     int count = 0;
//     fp = fopen("example.txt", "r");
//     // fp pointing to NULL?
//     if(fp == NULL){
//         printf("File open failed");
//         return 1;
//     }
//     scanf("%c",&c1);

//     while((ch = fgetc(fp))!= EOF){
//         if(ch == c1){
//             count++;
//             ftell(fp);
//         }
//     }
//     fclose(fp);
//     printf("There are totally %d number of %c\n",count, c1);
// }





// // PRACTICE, FIND THE OCCOURANCE OF THE CHARACTERS IN A FILE. 
// // 1. open the file and checkout the nuber of times a characters is appearing. 
// #include<stdio.h>
// int main(){
//     char ch;
//     char c1;
//     int count=0;
//     FILE* fp;
//     fp = fopen("example.txt","r");
//     if(fp == NULL){
//         printf("Unable to open the file");
//         return 1;
//     }
//     printf("Enter the character to search: ");
//     scanf("%c",&c1);
//     while((ch = fgetc(fp))!= EOF){
//         if(ch == c1){
//             count++;
//         }
//     }
//     fclose(fp);
//     printf("there are totally %d number of %c found in the given text file.\n", count,c1);
// }





// // PASS THE CONTENT FROM KEYBOARD TO A FILE
// #include<stdio.h>
// int main(){
//     FILE* fp;
//     char ch;
//     fp = fopen("newtext.txt","w");// open file in write mode
//     if(fp == NULL){ // check if file is opening or not. 
//         perror("Error in opening file");
//         return 1;
//     }
//     // copy text put inside the file
//     while((ch = getchar())!=EOF){
//         fputc(ch, fp);
//     }
//     fclose(fp);
//     printf("the file contains: %c",fp);
// }




// // PRACTICE PASSING THE CONTENT FOR A FILE THROUGH KEYBOARD. 
// #include<stdio.h>
// int main(){
//     FILE* fp;
//     char ch;
//     // open and point to a file. 
//     fp = fopen("text.txt","w");
//     // check if there is any error. 
//     if(fp == NULL){
//         perror("Error in opening the file");
//         return 1;
//     }
//     printf("Enter the content to be passed into the file: \n");
//     while((ch = getchar()) != EOF){
//         fputc(ch,fp);
//     }
//     fclose(fp);
//     fp = fopen("text.txt","r");
//     if(fp == NULL){
//         printf("Error opening the file\n");
//     }
//     printf("\nThe entered file contains:\n");
//     while((ch = fgetc(fp))!= EOF){
//         printf("%c",ch);    
//     }

// }




// // ACCEPT THE DATA AND STORE IT IN A BINARY FILE. 
// #include<stdio.h>
// struct products{
//     int id;
//     char brand[20];
//     int date;
//     int month;
//     int year;
// };
// int main(){
//     // open the file
//     FILE* fp;
//     int size;
//     char ch;
//     fp = fopen("data.dat","w");
//     struct products dp;
//     printf("Enter number of datapoints: ");
//     scanf("%d",&size);
//     printf("\nEnter the details below:\n");
//     for(int i=0; i<size; i++){
//         printf("Enter ID and Brand name: ");
//         scanf("%d %s", &dp.id, dp.brand);
//         printf("Enter the date, month, year in format DD MM YYYY: ");
//         scanf("%d %d %d",&dp.date, &dp.month, &dp.year);
//         fwrite(&dp, sizeof(dp), 1, fp);

//     }fclose(fp);

//     fp = fopen("data.dat","r");
//     printf("%-2s %10s %5s %5s %5s\n","ID", "Brand", "Date", "Month", "Year");
//     while(fread(&dp,sizeof(dp),1,fp)){
//         printf("%-2d -%10s %-5d %-5d %-5d\n",dp.id, dp.brand, dp.date, dp.month, dp.year);
//     } fclose(fp);
//     return 0;
// }




