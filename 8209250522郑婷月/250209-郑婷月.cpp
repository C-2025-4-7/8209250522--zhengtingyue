#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double price = 0.8;    
    int apples = 2;        
    int totalApples = 0;   
    double totalCost = 0;  
    int days = 0;
    while (totalApples + apples <= 100)
    {
        double cost = apples * price;
        totalCost += cost;
        totalApples += apples;
        days++;

        apples *= 2;
        double average = totalCost / days;

        cout << "总天数: " << days << "天" << endl;
        cout << "总苹果: " << totalApples << "个" << endl;
        cout << "总花费: " << fixed << setprecision(2) << totalCost << "元" << endl;
        cout << "每天平均花费: " << fixed << setprecision(2) << average << "元" << endl;
    }
    return 0;
}