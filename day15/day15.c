// // PRINT THE NUMBER OF THE BITS
// #include<stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     for(int i=31; i>=0; i--){
//         int bit = (num>>i) & 1;
//         printf("%d",bit);
//     }

// }

// // perform right & left shifts
// #include<stdio.h>
// int main(){
//     int num, shifts;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     printf("Enter the shifts: ");
//     scanf("%d",&shifts);
//     int rs = num>>shifts;
//     int ls = num<<shifts;
//     printf("After %d >> %d, we get: %d\n",num,shifts, rs);
//     printf("After %d << %d, we get: %d\n",num, shifts, ls);

// }




// PRACTICE SIGNED AND UNSIGNED RIGHT SHIFT
#include<stdio.h>
int main(){
    unsigned int usd;
    int sd;
    int shift;
    printf("Enter the unsigned number: ");
    scanf("%d",&usd);
    printf("Enter the signed number: ");
    scanf("%d",&sd);
    printf("Enter the shifts to perform: ");
    scanf("%d",&shift);
    int bit = usd >> shift;
    printf("\nAfter performing the unsigned right shifts: %d\n",bit);
    bit = sd >> shift;
    printf("After performing the signed right shifts: %d\n\n",bit);
    bit = sd >> shift;

}



// // SET CLEAR GET N BITS FORM LSB
// #include<stdio.h>
// int main(){
//     unsigned int num;
//     int n;
//     printf("Enter the number in hexadecimal: ");
//     scanf("%x",&num);
//     printf("Enter number of bits in decimal: ");
//     scanf("%d",&n);
       
//     unsigned int mask = (1 << n) - 1;
//     unsigned int setbit = num | mask;
//     unsigned int clearbit = num &~(mask);
//     unsigned int getbit = num & mask;

//     printf("After setting %d bits from LSB: %x\n",n,setbit);
//     printf("After clearing %d bits from LSB: %x\n",n,clearbit);
//     printf("After getting %d bits from LSB: %x\n", n, getbit);
// }









// // SET, CLEAR, GET N BITS FROM LSB. 
// #include<stdio.h>
// int main(){
//     unsigned int num;
//     int n;
//     // accept the hexadecimal inputs. 
//     printf("Enter the Hexadecimal number : ");
//     scanf("%x",&num);
//     printf("Enter the number of bits n: ");
//     scanf("%d",&n);
//     // perform the set, clear, get n bits from lsb operation
//     unsigned int mask = (1 << n) - 1;
//     unsigned int setbit = num | mask;
//     unsigned int clearbit = num & ~(mask);
//     unsigned int getnbit = num & mask;

//     printf("After setting %d bits in decimal: %x\n",n, setbit);
//     printf("After clearing %d bits in decimal: %x\n",n, clearbit);
//     printf("After getting %d bits in decimal: %x\n", n, getnbit);

// }




// // SET, CLEAR, GET N BITS FROM THE GIVEN POSITION:
// #include<stdio.h>
// int main(){
//     unsigned int num;
//     int n, pos;
//     printf("Enter the hexadecimal number: ");
//     scanf("%x",&num);
//     printf("Enter the n number of bits: ");
//     scanf("%d",&n);
//     printf("Enter postion: ");
//     scanf("%d",&pos);
//     int mask = ((1<<n)-1) << (pos-n+1);
//     unsigned int setbit = num | (mask);
//     unsigned int clearbit = num &~(mask);
//     unsigned int getbit= num>>(pos-n+1) & (1<<n)-1;

//     printf("After setting %d bits from position %d is: %x\n",n, pos, setbit);
//     printf("After clearing %d bits from position %d is %x\n",n,pos, clearbit);
//     printf("After getting %d bits from position %d is %x\n",n,pos,getbit);
        

// }



// // COUNT THE NUMBER OF SETBITS IN A GIVEN NUMBER. 
// #include<stdio.h>
// int main(){
//     unsigned int num=0;
//     int count = 0;
//     printf("Enter the hexadecimal input: ");
//     scanf("%x",&num);
//     while(num){
//         if(num & 1) count++;
//         num = num>>1;
//     }
//     printf("There are totally %d number of setbits", count);
// }



// // COUNT THE NUMBER OF SETBITS  IN A GIVEN NUMBER. - USING MASK MODEL
// #include<stdio.h>
// int main(){
//     unsigned int num=0;
//     unsigned int mask = 1;
//     int count = 0;
//     printf("Enter the hexadecimal input: ");
//     scanf("%x",&num);
//     while(mask){
//         if(num & mask) count++;
//         mask = mask << 1;
//     }
//     printf("There are totally %d number of setbits", count);
// }


// // COUNT THE NUMBER OF SETBTIS USING THE BRIAN KERNINGHAN METHOD:
// #include<stdio.h>
// int main(){
//     unsigned int num=0;
//     int count = 0;
//     printf("Enter the hexadecimal input: ");
//     scanf("%x",&num);
//     while(num){
//         num = num & (num-1);
//         count++;
//     }
//     printf("There are totally %d number of setbits", count);
// }
