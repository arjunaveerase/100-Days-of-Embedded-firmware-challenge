// // Pass structure to a function - pass by value
// #include<stdio.h>
// struct book{
//     int id;
//     char author[20];
//     char book_name[30];
//     int year;

// };
// void print_struct(struct book bx){
//     printf("\nId: %d \nAuthor: %s\nBook Name: %s \nYear: %d\n",bx.id, bx.author,bx.book_name, bx.year);
// }
// int main(){
//     struct book b1={1,"Jane","Pride and Prejudice",1813};
//     print_struct(b1);
//     struct book b2={2,"George","Animal Farm",1945};
//     print_struct(b2);
//     struct book b3={3,"Tagore","Gitanjali",1910 };
//     print_struct(b3);
//     return 0;
// }



// // PASS BY REFERENCE - STRUCT TO FUNCTION 
// #include<stdio.h>
// struct team{
//     int id;
//     char name[20];
//     char time[6];
//     float marks;
// };
// void print_struct(struct team* tx){
//     printf("\n\nID: %d \nName: %s\nTime: %s\nMarks: %.2f",tx->id, tx->name, tx->time, tx->marks);
// }

// int main(){
//     struct team t1 = {1, "Arjun", "2PM", 75.8}; 
//     print_struct(&t1);
//     struct team t2 = {2, "Madhu", "3PM", 72.5};
//     print_struct(&t2);
//     struct team t3 = {3, "Mani", "4PM", 82.1}; 
//     print_struct(&t3);
    
// }









// ACCEPT INFORMATION AND PRINT A NEAT TABULAR DATA
#include<stdio.h>
struct student{
    int id;
    char name[20];
    float phy;
    float chem;
    float math;
};
int main(){
    int n;
    float phyTot=0.0, phyAvg=0.0, chemTot=0.0, chemAvg=0.0, mathTot=0.0,mathAvg=0.0;
    float phyRank=0.0, chemRank = 0.0, mathRank = 0.0;
    int phyTopIdx=0, chemTopIdx=0, mathTopIdx=0;
    printf("Enter the number of students: ");
    scanf("%d",&n);

    struct student s[n];
    for(int i=0; i<n; i++){
        printf("Enter Name: ");
        scanf("%s",s[i].name);
        printf("Enter PCM marks:");
        scanf("%f %f %f",&s[i].phy, &s[i].chem, &s[i].math);
    }
    printf("-------------------------------------------------\n");
    printf("%-3s %-15s %-10s %-10s %-10s\n","No.","Name","Physics", "Chemistry","Maths");
    printf("-------------------------------------------------\n");
    for(int j=0; j<n; j++){
        s[j].id = j+1;
        phyTot = phyTot + s[j].phy;
        chemTot = chemTot + s[j].chem;
        mathTot = mathTot + s[j].math;
            if(s[j].phy >=phyRank){phyRank = s[j].phy; phyTopIdx = j;}
            if(s[j].chem >=chemRank){chemRank = s[j].chem; chemTopIdx = j;}
            if(s[j].math >=mathRank){mathRank = s[j].math; mathTopIdx = j;}
            
        printf("%-3d %-15s %-10.2f %-10.2f %-10.2f",s[j].id,s[j].name, s[j].phy, s[j].chem, s[j].math);
    } 
    phyAvg = phyTot/n;
    chemAvg = chemTot/n;
    mathAvg = mathTot/n;
    printf("-------------------------------------------------\n");
    printf("%-19s %-10.2f %-10.2f %-10.2f\n","     TOTAL",phyTot,chemTot, mathTot);
    printf("%-19s %-10.2f %-10.2f %-10.2f\n\n","     Average",phyAvg,chemAvg, mathAvg);
    // print THE TOPPER
    printf("Topper in Physics is: %s\n",s[phyTopIdx].name);
    printf("Topper in Chemistry is : %s\n",s[chemTopIdx].name);
    printf("Topper in Maths is : %s\n",s[mathTopIdx].name);
}


#include <stdio.h>

struct Status {
    unsigned int power : 1;
    unsigned int mode  : 2;
    unsigned int error : 1;
};

int main() {
    struct Status s = {1, 2, 0};

    printf("power = %u\n", s.power);
    printf("mode  = %u\n", s.mode);
    printf("error = %u\n", s.error);

    return 0;
}
