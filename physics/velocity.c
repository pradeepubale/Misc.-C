/*Program for Velocity */
/*Velocity is a measure of how quickly an object moves. 
So, the velocity is the change in the position of an object, 
divided by the time.*/
#include <stdio.h>

int main(void) {
  float velocity, initial_pos, final_pos, time;

  while(1)
  {
    printf("\nEnter the Initial Position in meters:");
    scanf("%f", &initial_pos);

    if(initial_pos < 0)
    { 
      printf("Initial Position should not be nagative.");
    }
    else
      break;
  }
  while(1)
  {
    printf("\nEnter the Final Positionin meters:");
    scanf("%f", &final_pos);

    if(final_pos < initial_pos)
    { 
      printf("Final Position should not be less than Initial one.");
    }
    else
      break;
  }
  while(1)
  {
    printf("\nEnter the time to travel distance in seconds:");
    scanf("%f", &time);

    if(time < 0)
    { 
      printf("Time should not be nagative.");
    }
    else
      break;
  }

  velocity = ((final_pos - initial_pos)/time);

  printf("\nVelocity is %f meter per seconds.", velocity);

  return 0;
}
