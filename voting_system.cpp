//Making a mini voting system (on Game of Thrones characters)
#include<stdio.h>
#include<string.h>
char election(){
	while(1){

    char username[10];
    char wanna_play[10];
    printf("Enter your name: ");
    scanf("%s", username);
    printf("Hello %s, Welcome to the election!\n", username);
    printf("Would you like to participate in election (yes/no)\n");
    scanf("%s", wanna_play);
    if (strcmp(wanna_play, "no")==0){
        printf("It was nice to have you here!");
        break;
    }
    printf("There are three candidates for the election \n 1)Tyrion Lannister \n2) Cersei Lannister \n3)Jon snow(he knows nothin lol)\n");
	int num;
	printf("please select 1,2 or 3 for Tyrion, Cersei & Jon respectively\n");
	scanf("%d", &num);
	switch(num){
		case 1:
		 printf("You've selected Tyrion Lannister!\n");
		 char play_again[10];
		 printf("Would you like to play again? \n");
		 scanf("s", play_again);
		 if (strcmp(wanna_play, "yes")==0){
			 continue;
		 }
		 if (strcmp(wanna_play, "no")==0){
			 printf("It was nice to have you here");
			 break;
		 }
		 else{
			 printf("please enter yes or no ");
			 continue;
		 }
		case 2:
		 printf("You've selected Cersei Lannister!\n");
		 printf("Would you like to play again? \n");
		 scanf("s", play_again);
		 if (strcmp(wanna_play, "yes")==0){
			 continue;
		 }
		 if (strcmp(wanna_play, "no")==0){
			 printf("It was nice to have you here");
			 break;
		 }
		 else{
			 printf("please enter yes or no ");
			 continue;
		 }
		case 3:
		 printf("You've selected Jon snow!\n");
		 printf("Would you like to play again? \n");
		 scanf("s", play_again);
		 if (strcmp(wanna_play, "yes")==0){
			 continue;
		 }
		 if (strcmp(wanna_play, "no")==0){
			 printf("It was nice to have you here");
			 break;
		 }
		 else{
			 printf("please enter yes or no \n");
			 continue;
		 }
		default:
			printf("Please select 1, 2 or 3\n");
			printf("Would you like to play again? \n");
			scanf("s", play_again);
			if (strcmp(wanna_play, "yes")==0){
				continue;
			}
			if (strcmp(wanna_play, "no")==0){
				printf("It was nice to have you here");
				break;
			}
			else{
				printf("please enter yes or no\n ");
				continue;
			}


	}
	return 0;}


	}
	int main()
	{
		election();
		return 0;
	}

