#include <stdio.h>
#include <gb/gb.h>
#include <rand.h>
#include <time.h>

void main()
{
	UBYTE keys = 0;
	printf("Welcome to GAMEBOY\nProgramming");
	printf("\nPress Start");
	waitpad(J_START);  // other keys are J_A, J_UP, J_SELECT, etc.
	printf("\nIsn't it easy!");
	while (1)
	{
		keys = joypad();
		if (keys & J_A)
		{
			printf("\nHeiBoi A Boi");
		}
		else if (keys & J_B)
		{
			printf("\nHeiBoi B Boi");
		}
	}
}