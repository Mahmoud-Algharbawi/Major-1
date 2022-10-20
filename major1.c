#include "major1.h"

int main()
{
	int cmd;
	unsigned int v;
	unsigned int ret;
	
	while (1)
	{
		printf("Enter the menu option for the operation to perform:\n");
		printf("1: POWER OF 2\n");
		printf("2: REVERSE BITS\n");
		printf("3: REPLACE BIT POITION FROM MASK\n");
		printf("4: PALINDROME\n");
		printf("5: EXIT\n");
		printf("-->");
		scanf("%d", &cmd);
		
		if (cmd < 1 || cmd > 5){
			printf("Error: Invalid option. Please try again.\n");
			continue;
		}

		if (cmd == 5){
			printf("Program terminating. Goodbye.\n");
			return 0;
		}
		
		while(1){
			
			printf("Enter a positive integer less than 2 billion: ");
			scanf("%d", &v);
			if (v >= 2000000000 || v <= 0){
				continue;
			}else{
				break;
			}
			
		}
		
		switch (cmd)
		{
			case 1:
				power_function(v);
				break;
			case 2:
				ret = reverse(v);
				printf("%d with bits reversed is %d\n", v, ret);
				break;
			case 3:
				replace(v);
				break;
			case 4:
				ret = palindrome(v);
				printf("Return value: %d\n", ret);
				break;
		}
	}
	return 0;
}
