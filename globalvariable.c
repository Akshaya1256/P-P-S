#include<stdio.h>
void display();
int n=5; //global variable
int main()
{
    ++n; //variable is not declared in the main() function	
    display();
    return 0;
}
void display()
{
    ++n; //variable is not declared in the display() function
    printf("n=%d",n);
}

