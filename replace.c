#include "major1.h"

void replace(int number)
{
	unsigned int index;
	unsigned long mask;
	// int tempMask;
	    
    while(1)
    {
	    printf("Enter a positive integer mask up to 3 billion: ");
	    scanf("%ld",&mask);
        if(mask<=0 || mask>=3000000000){
            continue;
        }
        else{
			// tempMask = mask;
			break;
		}
    }
    
    while(1)
    {
	    printf("Enter the bit replacement position from mask (0-indexed): ");
	    scanf("%d",&index);
	    if(index>31 || index<=0){
	        continue;
     	}
        else{break;}
    }

	//collect corresponding bit from mask
	int temp=(mask>>index)&1;

	//if bit at specified position is 1
	if(temp==1){
		temp=temp<<index;
		number|=temp;
	}
	else{ //if bit at specified position is 0
		int flag=4294967295;//FFFFFFFF, all bit set to 1(considering 32 bit)
		temp=1<<index;
		//this set only the specified position bit 0 others 1
		flag=flag^temp;
		number&=flag;
	}
	
	printf("New integer with bit %d from mask %ld is %d\n", index, mask, number);
}
