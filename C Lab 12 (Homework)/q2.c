#include <stdio.h>
void display_instructions()
{
    printf("This program calculates the total cost of a house after a five-year period.\n");
    printf("You will need to enter the initial cost of the house, the estimated annual fuel costs,\n");
    printf("and the annual tax rate for the house.\n\n");
}
float calculate_total_cost(float initial_cost, float fuel_cost, float tax_rate)
{
    float total_cost = initial_cost;
    for (int i = 0; i < 5; i++)
    {
        total_cost += fuel_cost;
        total_cost += initial_cost * tax_rate;
    }
    return total_cost;
}
int main()
{
    float initial_costs[] = {67000.0, 62000.0, 75000.0};
    float fuel_costs[] = {2300.0, 2500.0, 2000.0};
    float tax_rates[] = {0.025, 0.025, 0.02};
    display_instructions();
    for (int i = 0; i < 3; i++)
    {
        float total_cost = calculate_total_cost(initial_costs[i], fuel_costs[i] * 5, tax_rates[i] * 5);
        printf("Total cost for house %d after 5 years: %.2f\n", i + 1, total_cost);
    }
    return 0;
}