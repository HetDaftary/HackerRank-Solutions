// Just replace this function in the code. 

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    cout << (int)round(((100 + tip_percent + tax_percent) * meal_cost)) / 100;
}
