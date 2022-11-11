#include <cs50.h>
#include <stdio.h>

int main(void)
{
    bool isEnteredNumberInvalid = true;
    int inputNumber;

    while(isEnteredNumberInvalid){
        inputNumber = get_int("Please enter a number between 1-8: ");
        // Las piramides no BOE 2012_04_12
        if(inputNumber > 0 && inputNumber < 8)
         {
            isEnteredNumberInvalid = false;
         }



}

}