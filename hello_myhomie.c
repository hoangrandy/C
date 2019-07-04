// A program that loves all homies
// hoangrandy@ 
// written in C

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompts user for their name
    string name = get_string("Yoooo, brooo, whats your name?\n");
    //print greeting
    printf("hello my homie, %s\n", name);
}
