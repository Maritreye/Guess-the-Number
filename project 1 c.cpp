#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int number,guess,nguesses=1;
	srand(time(0));
	number = rand()%100 + 1;// generates number between 1 to 100
	//printf("The number is %d\n",number); 
	do{
	printf("guess the number\n");
	scanf("%d", &guess);
	if(guess<number){
		printf("higher number please\n");
		}
		else if(guess>number){
			printf("lower number plese\n");
		}	
		else{
			printf("You guessed it in%d attempts\n",nguesses);
		}
		nguesses++;
	}
	while(guess!=number);
	return 0;
}
