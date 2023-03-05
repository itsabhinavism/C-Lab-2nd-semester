#include <stdio.h> 
int main() {
int id, hours;
float rate, gross_pay, tax, net_pay, total_payroll = 0.0; 
int count = 0;
printf("Enter employee ID (or -1 to exit): "); 
scanf("%d", &id);

while (id != -1) {
printf("Enter hourly wage rate: "); scanf("%f", &rate);
printf("Enter number of hours worked: "); scanf("%d", &hours);

if (hours > 40) {
gross_pay = 40 * rate + (hours - 40) * rate * 1.5;
} 

else {
gross_pay = hours * rate;
}

tax = 0.03625 * gross_pay; net_pay = gross_pay - tax;
printf("Employee %d net pay: %.2f\n", id, net_pay);
total_payroll += net_pay;
count++;
printf("Enter employee ID (or -1 to exit): "); 
scanf("%d", &id);
}

printf("Total payroll: %.2f\n", total_payroll);
printf("Average amount paid: %.2f\n", total_payroll / count); return 0;
}
