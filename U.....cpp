#include <stdio.h>

int main () 
{
	int week;
	//char ch ='a';
	printf("\Nhap vao ngay trong tuan(1-7): ");
	scanf("%d", &week);
	switch(week){
		case 1:
			printf("\nIts Monday.");
			break;
		case 2:
			printf("\nIts Tuesday");
			break;
		case 3:
			printf("\nIts wednesday");
			break;
		case 4:
			printf("\nIts Thurday");
			break;
		case 5:
			printf("\nIts Friday");
			break;
		case 6:
			printf("\nIts Saturday");
			break;
		case 7:
			printf("\nIts Sunday");
			break;
		default:
			printf("\nPls enter week 1-7");
		}
		return 0;
	}
