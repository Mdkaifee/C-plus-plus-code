#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int current_year = 2021;
    int num_year;
    int past_year;
    int past_population;
    int cur_population;
    double growth_rate;

    cout << "Enter past year:";
    cin >> past_year;
    num_year = past_year - current_year;
    cout << "Enter population in that year:";
    cin >> past_population;
    cout << "Enter growth rate:";
    cin >> growth_rate;
    cur_population = past_population * pow(1.0 + growth_rate, num_year);
    cout << "Current population is:" << cur_population;
}
