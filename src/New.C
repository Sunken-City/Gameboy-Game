#include <gb/gb.h>
#include <stdio.h>

void main()
{
	printf("Welcome to GAMEBOY\nProgramming");
	printf("\nPress Start");
	waitpad(J_START);  // other keys are J_A, J_UP, J_SELECT, etc.
	printf("\nIsn't it easy!");
	UINT8 keys = 0;
	while (1)
	{
		keys = joypad();
		if (keys & J_A)
		{
			display_off();
		}
		else if (keys & J_B)
		{
			display_on();
		}
	}
}