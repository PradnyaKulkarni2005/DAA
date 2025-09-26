#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Item {
public:
    double weight;
    double value;
    bool divisible;  // true = can take fraction , false = must take whole

    Item(double w, double v, bool d) {
        weight = w;
        value = v;
        divisible = d;
    }

    double ratio() const {
        return value / weight;  // value per unit weight
    }
};

class Knapsack {
public:
double maximizeValue(double W, vector<Item>& items) {
        // Sort items by value/weight ratio in descending order
        sort(items.begin(), items.end(), [](Item& a, Item& b) {
            return a.ratio() > b.ratio();
        });

        double totalValue = 0.0;
        double remainingWeight = W;

        for (auto& item : items) {
            if (remainingWeight == 0) break;

            if (item.divisible) {
                // take as much as possible (even fraction)
                double takeWeight = min(item.weight, remainingWeight);
                totalValue += takeWeight * item.ratio();
                remainingWeight -= takeWeight;
            } else {
                // must take whole item
                if (item.weight <= remainingWeight) {
                    totalValue += item.value;
                    remainingWeight -= item.weight;
                }
            }
        }
        return totalValue;
    }
};

int main() {
    double W;
    int n;
    cout << "Enter boat capacity (W): ";
    cin >> W;
    cout << "Enter number of items: ";
    cin >> n;

    vector<Item> items;
    for (int i = 0; i < n; i++) {
        double w, v;
        int d;
        cout << "Enter weight value divisible(1=yes,0=no) for item " << i+1 << ": ";
        cin >> w >> v >> d;
        items.push_back(Item(w, v, d == 1));
    }
Knapsack k;
double maxValue = k.maximizeValue(W,items);
 cout << "Maximum utility value the boat can carry = " << maxValue << endl;

    return 0;
}



