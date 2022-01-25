#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //Print Name & number
    printf("*Student Name:- W.P.H.K.Weerasinghe \n");
    printf("*Student Number:- 20831 \n");

    printf("*Device name:-");
	system("hostname");
    printf("*Mac Address");
    system("getmac");
    //Display Square value
    int number; //declare variable call 'number'
    int square; //declare variable call 'square'
    int i;
    time_t rawtime;
    struct td*timeinfo;

    for(i=1;i<=20;i++){ // for loop to get 20 inputs
        printf("\n%d)Enter a number:-",i);
        scanf("%d",&number); //get user input to the number variable
        square=number*number; //calculate square

        time(&rawtime);
        timeinfo=localtime(&rawtime);
        printf("%d)Square of %d is:- %d System time:%s ",i,number,square,asctime(timeinfo));
        //Display answer with system time
    }
    return 0;
    //test this code
}
