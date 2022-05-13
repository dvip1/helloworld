#include<stdio.h>
#include<string.h>
void making_triangle(){
    char name[100];
    printf("Hello traveler! What is your name? ");
    scanf("%s", name);
    while(1){
        char wanna_play[10];
        int which_triangle;
        printf("Would you like to play this game %s (yes/no): ", name);
        scanf("%s", wanna_play);
        if (strcmp(wanna_play, "no")==0){
            printf("It was nice to have you here %s!", name);
            break;
        }
        printf("\n\nWhat triangle pattern would you like to print?\n ");
        printf("\n1)Right Triangle Star Pattern \n\n2)Hollow right triangle pattern \n\n3)Mirrored Right Triangle Star Pattern ");
        printf("\n\n ***** Please Enter a specific numbers *****\n");
        scanf("%d", &which_triangle);


        //Code for Right Triangle Pattern
        if (which_triangle==1){
            int n;
            printf("\nPick a number, bigger the number, bigger the triangle: ");
            scanf("%d", &n);
            for (int i=1; i<=n; i++){
                for (int j=1; j<=i; j++){
                    printf("*");
                }
                printf("\n");
            }
        }

      //code for Hollow right angled triangle pattern
        if (which_triangle==2){
            int n1;
            printf("\nPick a number, bigger the number, bigger the triangle:  ");
            scanf("%d", &n1);
            for (int i=1; i<=n1; i++){
                for (int j=1; j<=i; j++){
                    if (j==1||j==i||i==n1){
                        printf("*");
                    }
                    else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        //Mirrored right angled triangle pattern
        if (which_triangle==3){
            int n3;
            int m=1;
            printf("\nPick a number, bigger the number, bigger the triangle: ");
            scanf("%d", &n3);
            for (int i=0; i<=n3; i++){
                for(int j=i; j<n3; j++){
                    printf(" ");
                }
                for (int k=1; k<=i; k++){
                    printf("*");
                }
                printf("\n");
            }
                }
        else {
            break;
        }



    }
}
int main(){
    making_triangle();
    return 0;
}
