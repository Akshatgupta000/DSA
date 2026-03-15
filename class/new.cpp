#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<double>& prices) {
    int n = prices.size();

    for (int i = 1; i < n; i++) {
        double key = prices[i];
        int j = i - 1;

        while (j >= 0 && prices[j] > key) {
            prices[j + 1] = prices[j];
            j--;
        }

        prices[j + 1] = key;

        // Display the updated stock prices after each iteration
        cout << "Iteration " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << prices[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;

    cout << "Enter the number of stocks: ";
    cin >> n;

    vector<double> prices(n);
    cout << "Enter the stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    insertionSort(prices);

    cout << "Sorted stock prices: ";
    for (double price : prices) {
        cout << price << " ";
    }
    cout << endl;

    return 0;
}