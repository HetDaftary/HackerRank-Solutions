// Only the function below needs to be replaced.

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    printf("%d", (int)round(((100 + tip_percent + tax_percent)* meal_cost) / 100));  
}
