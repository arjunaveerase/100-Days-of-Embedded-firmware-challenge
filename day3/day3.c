/*#include <stdio.h>

long long factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;
    return num * factorial(num - 1);
}

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Factorial of %d is %lld\n", num, factorial(num));
    return 0;
}
*/
/*
//find N TO THE POWER M VALUE USING RECURSSION
#include<stdio.h>
int npowm(int n,int m);
int main(){
    int n, m;
    printf("Enter the N and M values: ");
    scanf("%d %d",&n, &m);
    int answer = npowm(n,m);
    printf("Answer is : %d",answer);
    return 1;
}

int npowm(int n,int m){
    if(m==0){
        return 1;
    }n=n*npowm(n,m-1);
    return n;


}
*/

// //fibonacci series.
// #include<stdio.h>
// int fib(int n){
//     //base case:
//     if (n==0) return 0;
//     if (n==1) return 1;
//     //core logic:
//     else return fib(n-1) + fib(n-2);
// }
// int main(){
//     int n;
//     printf("Enter the limit: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         printf("%d ",fib(i));//call function
//     }
//     return 1;
// }






// // sum of digits 
// #include<stdio.h>
// int sumOfDigit(int n){
//     if(n==0) return 0;
//     //recursively find the last digit
//     return (n%10) + sumOfDigit(n/10);
// }

// int main(){
//     int n;
//     printf("Enter the Numbers: ");
//     scanf("%d",&n);
//     printf("%d",sumOfDigit(n));
//     return 0; 
// }



// // NEGATIVE FIBOBACCI NUMBERS USING RECURSSION
// #include<stdio.h>
// int nfib(int n){
//     if (n<0){
//         int val = nfib(-n);
//         if (n%2==0){
//             return -val;
//         }else return val;
//     }
//     if (n==0) return 0;
//     if (n==1) return 1;
//     return nfib(n-1) + nfib(n-2);
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=-n; i<=n; i++){
//         printf("%d ", nfib(i));
 
//     }
// }






// WRITE A PROGRAM TO FIND THE SUM OF SEQUENCE OF N USING RECURSSION
#include<stdio.h>
int sumOfSequence(int num){
    int ans = 0;
    //base case:
    if(num == 0) return 0;
    //recursion:
    ans = ans + sumOfSequence(num-1);
}
int main(){
    int num;
    printf("Enter the value of n : ");
    scanf("%d",&num);
    printf("%d",sumOfSequence(num));
    return 0;
}











