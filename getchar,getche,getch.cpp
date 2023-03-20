#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h> 

//getchar
//getche
//getch 


char format;

int main(){
	
std::cout << "\n\nif you want delete this file write (Y) || if you not agree write (N): ";
format=getch();

if (format== 'y' || format == 'Y')
std::cout << "\ndelete ..";


else if (format == 'n' || format == 'N')
	std::cout << "\n not deleted ..";
	

else
std::cout << "\nerror syntax!";



return 0;

}