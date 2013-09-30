∏//bit_operator_test.c - short demonstration of the
//possibilities of bit-operators and their usage
//second leg 20130828

#include <stdio.h>

unsigned char one_byte_ = 0;
unsigned char another_byte_ = 0;
unsigned char bitmask_ = 0;
unsigned int large_value_ = 0;
float xlarge_value_ = 0;

main()
{
  //set one_byte_ to the binary value 11001010 ==> 198
  one_byte_ = 0xca; // c = 12; a = 10; 12 x 16(1) + 10 x 16 (0) = 202 ==> 11001010;
  printf("one_byte_ is set to %d which corresponds to 0x%x\n", one_byte_, one_byte_);

  //we want to set the 3rd bit from the right 
  bitmask_ = 0x04; // 00000100 ==> 4
  one_byte_ = one_byte_ | bitmask_;
  // 11001010 | Bit-OR
  // 00000100
  // 11001110 => Result: 206
  // the resoult should be =0xce
  printf("after or-mask \"00000100\" one_byte_ is set to %d which corresponds to 0x%x\n", one_byte_, one_byte_);
  // clear the 3rd bit from the right again
  // bitmask_ = 0xca; // 11001010 ==> 198
  // while bitmask_ = 0xca is fine, you could work with an inverse bitmask here! 
  bitmask_ = ~bitmask_; // reverses bitmask
  one_byte_ = one_byte_ & bitmask_; // with and-mask only bits are set that are set in both lines
  // 11001110 & BIT-OR
  // 11111011 ==> reverse bitmask
  // 11001010 ==> Result 202
  printf("after and-mask one_byte_ contains %d which corresponds to 0x%x\n", one_byte_, one_byte_);

  // another possibility to check if a bit is set: is the third bit from the right set?
  printf("is the 3rd bit from the right set? -> %x\n", one_byte_ & 0x04);

  // try a little bit-shifting and masking ...
  one_byte_ = 0x59; // 5 x 16(1) + 9 x 16(0) ==> 89 ==> 01011001
  another_byte_ = 0x8f; // 8 x 16(1) + 15 x 16(0) ==> 143 ==> 10001111

  large_value_ = one_byte_;
  printf("initial assignment results in: %d which corresponds to 0x%x\n", large_value_, large_value_);

  // shift it to the left
  large_value_ = large_value_ << 8; 
  printf("after 8 bit left shift: %d which corresponds to 0x%x\n", large_value_, large_value_ );

  // mask in the second value to the right side
  large_value_ = large_value_ | another_byte_;
  printf("after maskiing in the second value: %d which corresponds to 0x%x\n", large_value_, large_value_ );
}