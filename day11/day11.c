#include<stdio.h>
struct address{
    char city[30];
    int pincode;
};
struct student{
    int id;
    char name[30];
    struct address addr;
};


int main(){
    struct student s1 = {1, "Pablo", {"Colombia", 1234567}};
    printf("Id is: %d\n Name is: %s,\n City is: %s,\n Pincode is: %d\n", s1.id,s1.name, s1.addr.city, s1.addr.pincode);
}











// // ARRAY OF STRUCT
// #include<stdio.h>
// // intialize the structure
// struct student{
//     int id;
//     char name[30];
//     float marks;
// };
// int main(){
//     // input the data for stud 1
    
//     struct student stud_list1[3] = {
//         {1,"arjun",74.32},
//         {2,"veera",45.73},
//         {3,"se",23.65}
//     };
//     // print the stud_list1
//     printf("\nstud_list1:\n");
//     for(int i=0; i<3; i++){
//         printf("ID: %d\n",stud_list1[i].id);
//         printf("Name: %s\n",stud_list1[i].name);
//         printf("Marks: %.2f\n\n",stud_list1[i].marks);
//     }
//     // read for stud_list2 
//     struct student stud_list2[3];
//     for(int i=0; i<3; i++){
//         printf("Enter ID, Name and Marks for stud_list2[%d]: ",i+1);
//         scanf("%d %s %f",&stud_list2[i].id, stud_list2[i].name, &stud_list2[i].marks);
//     }
//     // print the stud_list2
//     printf("\nstud_list2:\n");
//     for(int i=0; i<3; i++){
//         printf("ID: %d\n",stud_list2[i].id);
//         printf("Name: %s\n",stud_list2[i].name);
//         printf("Marks: %.2f\n\n",stud_list2[i].marks);
//     }
// }