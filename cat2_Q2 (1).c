/*
NAME: JANE NJERI MUTHONI 
REG NO:CT101/G/26472/25
COURSE:COMPUTER SCIENCE GROUP A
DESCRPTION:CAT question 2;calculating tax and worker earnings.
*/
#include <stdio.h>
int main(){
	int worked_hours,hourly_wages,tax,grosspay,netpay,overtime,overtimepay;
	printf("enter the total hours worked in the week:");
	scanf("%d",&worked_hours);
	printf("enter the hourly :");
	scanf("%d",&hourly_wages);
	overtime=worked_hours-40;
	overtimepay=overtime*1.5*hourly_wages;
	printf("\novertime worked:%d",overtime);
	
	grosspay=(worked_hours*hourly_wages)+overtimepay;
	
	if (grosspay<=600){
		tax=(grosspay*15/100);
	}
	else {
		tax=(90)+ (grosspay-600)*20/100;
	}
	
	netpay=grosspay-tax;
	
	printf("\nyour gross payment is:%d",grosspay);
    printf("\nyour were taxed :%d",tax);
    printf("\nyour net payment is:%d",netpay);
    
    
    
	
	
	
	
	return 0;
}