#include <stdio.h>

float discount (float cost,float discount){
	return cost*(1-discount);
}

int main () {
	float pc = 1.10;
	float pb = 2.20;
	float pd = 1.40;
	float pp = 3.50;
	float disc1 = 0.10;
	float disc2 = 0.15;
	printf("Prices:\n");
	printf("Chips:%.2f\n",pc);
	printf("Burger:%.2f\n",pb);
	printf("Drink:%.2f\n",pd);
	printf("Pizza;%.2f\n",pp);
	printf("FullCombo = Chips+Burger+Drink 10%%discount:%.2f\n",discount(pc+pd+pb,disc1));
	printf("Full load = All + 15%% discount:%.2f\n",discount(pc+pb+pd+pp,0.15));
	return 0;
}
