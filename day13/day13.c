// // SWAP A NIBBLE USING STRUCTURE BIT FIELDS. 
// #include<stdio.h>
// struct nibble{
//     unsigned int upper : 1;
//     unsigned int lower : 1;
// };
// int main(){
//     struct nibble n1 = {1,0};
//     printf("Before Swapping:\nUpper: %d\nLower: %d\n",n1.upper, n1.lower);
//     unsigned int temp = n1.upper;
//     n1.upper = n1.lower;
//     n1.lower = temp;

//     printf("\nAfter Swapping:\nUpper: %d\nLower: %d\n",n1.upper, n1.lower);
//     return 0;
// }





// // SWAP A NIBBLE USING STRUCTURE BITFIELDS. 
// #include<stdio.h>
// struct bitdata{
//     unsigned char low : 4;
//     unsigned char high : 4;
// };
// union swap {
//     struct bitdata fields;
//     unsigned char raw;
// };

// int main(){
//     union swap data;
//     data.raw = 0xCA;
//     printf("Before swapping:\n Raw: 0x%x\n High nibble: 0x%x\n Low nibble: 0x%x\n",data.raw, data.fields.high, data.fields.low);
//     unsigned char temp = data.fields.low;
//     data.fields.low = data.fields.high;
//     data.fields.high = temp;
//     printf("After swapping:\n Raw: 0x%x\n High nibble: 0x%x\n Low nibble: 0x%x\n",data.raw, data.fields.high, data.fields.low);
//     return 0;
// }






// // SWAP A NIBBLE USING STRUCTURE BITFIELDS.
// #include<stdio.h>
// struct bitdata{
//     unsigned char lower : 4;
//     unsigned char upper : 4;
// };
// union swap{
//     struct bitdata fields;
//     unsigned char raw;
// };
// int main(){ 
//     union swap data;
//     data.raw = 0xAF;
//     printf("Before swapping:\n Raw: 0x%x\n High nibble: 0x%x\n Low nibble: 0x%x\n",data.raw, data.fields.upper, data.fields.lower);
//     unsigned char temp = data.fields.lower;
//     data.fields.lower = data.fields.upper;
//     data.fields.upper = temp;
//     printf("After swapping:\n Raw: 0x%x\n High nibble: 0x%x\n Low nibble: 0x%x\n",data.raw, data.fields.upper, data.fields.lower);

// }




// IMPLIMENTAITON OF STUDENT RECORD USING ARRAY OF STRUCTURES WITH GRADES
#include<stdio.h>
struct student{
    int roll;
    char name[20];
    float kannada, english, hindi ,maths, science, social;
};

int main(){
    int n=0; 
    printf("Enter number of students: ");
    scanf("%d",&n);
    struct student s[n];
    printf("Please enter student details in this format: \nName,\nMarks in Kannada, English, Hindi, Maths,\nScience, Social Studies\n");
    for(int i=0; i<n; i++){
        printf("Enter student-%d details\n",i+1);
        scanf("%19s %f %f %f %f %f %f",s[i].name, &s[i].kannada, &s[i].english, &s[i].hindi , &s[i].maths, &s[i].science, &s[i].social);
    }
    printf("--------------------------------------------------------------------------------------\n");
    printf("%-4s %-12s %-7s %-7s %-7s %-7s %-7s %-7s %-7s %-7s %-5s\n","Roll","Name","Kannada", "English","Hindi","Maths","Science","Social", "Total", "Average", "Grade");
    printf("--------------------------------------------------------------------------------------\n");

    for(int i=0; i<n; i++){
        int roll=i+1;
        float total = s[i].kannada + s[i].english + s[i].hindi + s[i].maths + s[i].science + s[i].social;
        float avg = total / 6.0;
        int  bucket = avg / 10;
        char grade;
        switch (bucket){
            case 10: 
            case 9: grade = 'S'; break;
            case 8: grade = 'A'; break;
            case 7: grade = 'B'; break;
            case 6: grade = 'C'; break;
            case 5: grade = 'D'; break;
            case 4: grade = 'E'; break;
            default : grade = 'F'; break;
        }
        printf("%-4d %-12s %-7.2f %-7.2f %-7.2f %-7.2f %-7.2f %-7.2f %-7.2f %-7.2f %-5c\n",roll,s[i].name,s[i].kannada, s[i].english, s[i].hindi,  s[i].maths, s[i].science, s[i].social,total, avg, grade);
    }
    printf("--------------------------------------------------------------------------------------\n");
}