// speed_calculator.c - my first c programm

// working with functions

#include <stdio.h>

// creating functions
//FIXXME
void timePerMinute(int timeperminute)
{
  return((hour_ * 3600 + min_ * 60 + sec_)/dis_);
}

int main(int argc, char const *argv[])

{
  int hour_ = 0;
  int min_ = 0;
  int sec_ = 0;
  int dis_ = 0;
  int time_ = 0;

  printf("Please enter your time like hh:mm:ss: ");
  scanf("%d:%d:%d",&hour_,&min_,&sec_);

  printf("Please enter your distance in meters: ");
  scanf("%d",&dis_);

  printf("Your average time in seconds is: %d\n",timeperminute(timeperminute) );
  return 0;

}