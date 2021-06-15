#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
    //Print Name
    printf("*Student Name:- W.P.H.K.Weerasinghe \n");
    //Print Mac address
    printf("*Mac Address");
    system("getmac");

    //Display Square value
    int number; //declare variable call 'number'
    int square; //declare variable call 'square'
    time_t rawtime;
    struct td*timeinfo;

    printf("Enter a number:-");
    scanf("%d",&number); //get user input to the number variable
    square=number*number; //calculate square

    time(&rawtime);
    timeinfo=localtime(&rawtime);
    printf("Square of %d is:- %d System time:%s ",number,square,asctime(timeinfo));//Display answer
    return 0;
}
