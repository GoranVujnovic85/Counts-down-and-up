/*
Author : Goran Vujnovic
Project Name : Counter down and up
Date created : 20/09/2023
Description :This program counts up and down the
             entered seconds in diamond pattern.
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void delay(int seconds)
 {
	sleep(seconds);
 }

int main()
 {
	int time = 0;
	int seconds;

	printf("Enter seconds: ");
	fflush(stdout);
	scanf("%d", &seconds);
	printf("\n");

	int enterValue = seconds;

	if(seconds < 2 || seconds > 10)
	{
		return 1;
	}
	else
	{
		do
		{
			for(int i = seconds - 1; i > 0; i--)
		    {
				for(int k = 0; k < enterValue - i; k++)
				{
					printf(" ");
				}
				for(int j = 0; j <= i; j++)
				{
					printf("%d ", seconds);
					fflush(stdout);
				}
					printf("\n");
					sleep(1);
					seconds--;
		    }

			for(int i = 0; i < enterValue - 1; i++)
			{
				for(int k = 0; k < enterValue - i; k++)
				{
					printf(" ");
					}
				for(int j = 0; j <= i; j++)
				{
					printf("%d ", seconds);
					fflush(stdout);
				}
					printf("\n");
					sleep(1);
					seconds++;
			}

			time++;

		}while(time < 4);
	}

	return 0;
 }
