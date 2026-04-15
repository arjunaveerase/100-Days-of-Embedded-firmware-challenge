// IEEE 754 FLOATING POINT IMPLIMENTATION USING UNIONS AND STRUCT
#include<stdio.h>
union floating_pt{
	float num;
	struct{ // anonymous struct
		// arrange as per Little endian + realworld bitcounts
		unsigned m:23;
		unsigned e:8;
		unsigned s:1;
	};
};

int main(){
	union floating_pt fpt = {123.45};
	printf("Sign bit is : %d\n",fpt.s);
	printf("Exponent bit is : %d\n",fpt.e);
	printf("Mantissa bit is : %d\n\n",fpt.m);

	// change the sign 
	fpt.s = 1;
	printf("Sign bit is : %d\n",fpt.s);
	printf("Exponent bit is : %d\n",fpt.e);
	printf("Mantissa bit is : %d\n",fpt.m);

	
}