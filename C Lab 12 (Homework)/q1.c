#include <stdio.h>
#include <math.h>
int main()
{
    double purchase_price, down_payment, annual_interest_rate, monthly_interest_rate, principal, monthly_payment;
    int num_payments;
    printf("Enter the car's purchase price: ");
    scanf("%lf", &purchase_price);
    printf("Enter the down payment amount: ");
    scanf("%lf", &down_payment);
    principal = purchase_price - down_payment;
    printf("Enter the annual interest rate (as a decimal): ");
    scanf("%lf", &annual_interest_rate);
    monthly_interest_rate = annual_interest_rate / 12.0;
    printf("Enter the number of payments: ");
    scanf("%d", &num_payments);
    monthly_payment = principal * (monthly_interest_rate * pow(1 + monthly_interest_rate, num_payments)) / (pow(1 + monthly_interest_rate, num_payments) - 1);
    printf("Amount borrowed: $%.2lf\n", principal);
    printf("Monthly payment: $%.2lf\n", monthly_payment);
    return 0;
}