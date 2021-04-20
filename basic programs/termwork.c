//Program to detect the sound
#include<stdio.h>
int main()
{
    int sound_level;
    printf("Enter the sound level in decibels:\n");
    scanf("%d",&sound_level);
    if(sound_level==130)
    {
        printf("Jackhammer\n");
    }
    else if(sound_level==106)
    {
        printf("Gas lawnmower\n");
    }
    else if(sound_level==70)
    {
        printf("Alarm clock\n");
    }
    else if(sound_level==40)
    {
        printf("Quiet Room\n");
    }
    else if((sound_level>106)&&(sound_level<130))
    {
        printf("The sound level lies between Jackhammer and Gas lawnmower\n");
    }
    else if((sound_level<106)&&(sound_level>70))
    {
        printf("The sound level lies between Gas lawnmower and Alarm clock\n");
    }
    else if((sound_level<70)&&(sound_level>40))
    {
        printf("The sound level lies between Alarm Clock and Quiet Room\n");
    }
    else if(sound_level<40)
    {
        printf("The sound level is smaller than the quietest sound level\n");
    }
    else
    {
        printf("The sound level is higher than the loudest sound\n");
    }
    return 0;
}
