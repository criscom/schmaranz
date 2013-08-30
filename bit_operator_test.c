// bit_operator_test.c - short demonstration of the
// possibilities of bit-operators and their usage

#include <stdio.h>

unsigned char one_byte_ = 0;
unsigned char another_byte_ = 0;
unsigned char bitmask_ = 0;
unsigned int large_value_ = 0;

main ()
{
	// set one_byte_ to the binary value of 11001010
	one_byte_ = 0xca;

	printf("The result of one_byte_ in hexadecimal is 0x%x\n", one_byte_);
	printf("The result of one_byte_ in decimal is %u\n", one_byte_);

	// we want to set the 3rd bit from the right
	bitmask_ = 0x04; // Decimal = 4 ==> binary = 00000100
	one_byte_ = one_byte_ | bitmask_; // Bit-OR; Bit 0 => Bit bleibt erhalten; 1-Bit => Bit sicher 1
	// the result should be 11001110 (=0xce ==> 206)
	printf("after Bit-OR mask one_byte_ contains 0x%x\n", one_byte_ );
	printf("As a decimal number this is: %u\n", one_byte_ );

	// clear the 3rd bit from the right again
	bitmask_ = ~bitmask_; // inverse bitmask = 11111011 ==> Decimal = 251
	one_byte_ = one_byte_ & bitmask_; //Bit-AND; Bit 1 => Bit bleibt erhalten; 0-Bit => Bit sicher 0
	// the result schould be 11001010 (= 0xca ==> 202)
	printf("after BIT-AND mask one_byte_ contains 0x%x\n", one_byte_ );
	printf("As a decimal number this is: %u\n", one_byte_ );

	// try a little bit-shifting and masking ...
	one_byte_ = 0x59; // Dezimal: 9 x 16hoch0 (= 9) + 5 x 16hoch1 (= 89) = 81; 01011001 (0 + 64 + 0 + 16 + 8 + 0 + 0 + 1 = 89)
	another_byte_ = 0x8f; // Dezimal: 15 x 16hoch0 (= 15) + 8 x 16hoch1 (= 128) = 143; 10001111 (128 + 0 + 0 + 0 + 8 + 4 + 2 + 1 = 143)
	large_value_ = one_byte_;
	printf("initial assignment results in: 0x%x\n", large_value_ ); // expected result: 0x59;

	// shift it to the left
	large_value_ = large_value_ << 8; // expected result: 0x5900 ==> 0 x 16hoch0 + 0 x 16hoch1 + 9x16hoch2 + 5x16hoch3 ==> 22784 ==> 101100100000000
	printf("after 8 bit left-shift: 0x%x\n", large_value_ );
	printf("As a decimal number this is: %u\n", large_value_ );

	// mask-in the second value on the right side ==> Bit-OR
	large_value_ = large_value_ | another_byte_; // 101100100000000
												// 	000000010001111
												// 	101100110001111 ==> 1 + 2 + 4 + 8 + 16x0 + 32x0 + 64x0 + 128 + 256 + 512x0 + 1024x0 + 2048 + 4096 + 8192x0 + 16384 ==> 22927
												// ==> 22927 / 16 = 1432 REST 15 ==> F
												//      1432 / 16 = 89 REST 8 ==> 8
												//        89 / 16 = 5 REST 9 ==> 9
												//         5 / 16 = 0 REST 5 ==> 5
												// ==> 0x598F
	printf("after masking in the rest: 0x%x\n", large_value_ );
	printf("As a decimal number this is: %u\n", large_value_);
}