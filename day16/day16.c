// REPLACE B-A+1 BITS IN VAL STARTING FROM BIT POSITION A USING LSB OF NUM. 
#include<stdio.h>
int replace_nbits_from_pos(int, int, int, int);
int main(){
    int num, val, a, b;
    char choice;
    // read the values
    do{
        printf("Enter value of NUM: ");
        scanf("%d",&num);
        printf("Enter value of A and B: ");
        scanf("%d %d",&a, &b);
        printf("Enter value of VAL: ");
        scanf("%d",&val);

        int result = replace_nbits_from_pos(a,b,num,val);
        printf("%d",result);

        printf("Do you want to continue(y/n)?");
        scanf("%c",&choice);
    }while (choice == 'Y' || choice == 'y');
    return 0;
}

int  replace_nbits_from_pos(int a, int b, int num, int val){
    int n = b - a + 1;
    int mask = (1 << n) - 1;
    int bits = num & mask;
    bits = bits << a;
    val = val &~(mask << a);
    val = val | bits;
    return val;
}




// PROGRAM TO GET N NUMBER OF BITS FROM A GIVEN POSITION OF A NUMBER
#include<stdio.h>
int getnbits_pos(int, int, int);
int main(){
    int number, nbits, pos;
    printf("Enter the number:"); scanf("%d",&number);
    printf("Enter the number of bits: ");scanf("%d",&nbits);
    printf("Enter the position: "); scanf("%d",&pos);
    
    int result = getnbits_pos(number, nbits, pos);
    printf("Result = %d\n",result);

    return 0;
}
int getnbits_pos(int number, int nbits, int pos){
    // fetch n bits from given position starting form lsb. 
    int mask = (1 << nbits) - 1;
    int s_amt = pos - nbits + 1;
    return (number >> s_amt) & mask;
    
}


// TOGGLE N NUMBER OF BITS FROM THE GIVEN POSITION. 
#include<stdio.h>
int toggle_bits(int, int, int);
int main(){
    int num, pos, n;
    
    // 1. take inputs
    printf("Enter the number: "); scanf("%d",&num);
    printf("Enter number of bits: "); scanf("%d",&n);
    printf("Enter the position: "); scanf("%d",&pos);
    
    // 2. call function
    int result = toggle_bits(num, n, pos);
    printf("Result: %d\n",result);
    return 0;
}

int toggle_bits(int num, int n, int pos){
    int mask = (1<<n) - 1;
    int shift_amt = pos - n + 1;
    return (num ^ ((mask) << (shift_amt)));
    
}




// IMPLIMENTATION OF CIRCULAR RIGHT SHIFTS
#include<stdio.h>
int main(){
    unsigned int num;
    int n;
    scanf("%d",&num);
    scanf("%d",&n);
    unsigned int result = (num >> n) | (num << (32 - n));
    printf("Result : %u",result);
}