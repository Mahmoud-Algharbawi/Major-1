#include "major1.h"

void power_function(unsigned int x){

    int count = 0;//this will count the number of bits set to one in the number
    int myNum = x;
    
    while (myNum > 0){
        if ((myNum & 1) == 1){ //check if the bitwise and of the number and 1 is 1, if it is then we update the count
            count++;
        }
        myNum>>=1;//shift by 1 bit to keep dividing by 2
    }

    if (count == 1){//if the counter is 1 at the end of checking, that means only one bit is set to 1 and the number is a power of two
        printf("%d is a power of 2.\n",x);

    }else{
        // if the numnnnnber is not a power of two, find the next higher number that is a power of two
        printf("Number (%d) is not a power of 2, fiding the next higher number that is a power of 2....\n",x); 
        //set the number to 1
        myNum = 1;
        //shift the number to the left until it is higher than or equal to the first number
        while (myNum<=x){
            myNum<<=1;
        }
        //check if the next number is in range
        if (myNum < 2000000000 && myNum > 0){
            printf("The next number higher than %d that is a power of 2 is %d\n", x, myNum);
            //if the number is in range, check if it is a power of two
            power_function(myNum);            
        }else{
            //print an error message if the next 
            printf("Error, next number is out of range.\n");
            return;
        }
    }


}



/*-
unsigned int find_next(unsigned int x){
    unsigned int myNum = 1;

    while (myNum<=x){
        myNum<<=1;
    }
    
    if (myNum < 2000000000 && myNum > 0){
        printf("The next number higher than %d that is a power of two is %d\n", x, myNum);
        return myNum;
    }else{
        printf("Error, next number is out of range, exiting...\n");
        exit(1);
    }
    
}
*/