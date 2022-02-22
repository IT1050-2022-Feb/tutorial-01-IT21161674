/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main(void)
{
	int distance;
	float payment;
	
	printf("Please enter the distance you traveled in km: ");
	scanf("%d", &distance);
	
	if(distance <= 30 && distance > 0)
		payment = distance * 50;
	else if(distance > 30)
		payment = 1500 + ((distance - 30 ) * 40);
	else
	{
		printf("You have enterd an invalid distance");
		return -1;
	}
	
	printf(" amount to be paid for a rented vehicle is: %.2f", payment);
	
	return 0;
}
