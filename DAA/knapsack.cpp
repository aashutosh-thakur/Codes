#include<iostream>
using namespace std;
int main(){
    float knapsack; 
    int total_item;
    cout << "Enter the total knapsack weight: ";
    cin >> knapsack;
    cout << "Enter total item: ";
    cin >> total_item;
    float price[100], weight[100];
    for (int i = 0; i < total_item; i++) {
        cout << "Enter the weight: ";
        cin >> weight[i];
        cout << "Enter the price: ";
        cin >> price[i];
    }
    float price_per_kg[100];
    for (int j = 0; j < total_item; j++) {
        price_per_kg[j] = price[j] / weight[j];
    }
    float temp;
    for (int k = 0; k < total_item; k++) {
        for (int l = k + 1; l < total_item; l++) {
            if (price_per_kg[k] < price_per_kg[l]) {
                temp = price_per_kg[k];
                price_per_kg[k] = price_per_kg[l];
                price_per_kg[l] = temp;
                temp = price[k];
                price[k] = price[l];
                price[l] = temp;
                temp = weight[k];
                weight[k] = weight[l];
                weight[l] = temp;
            }
        }
    }
    float total_value = 0;
    float remaining_weight = knapsack;
    for (int i = 0; i < total_item && remaining_weight > 0; i++) {
        if (weight[i] <= remaining_weight) {
            remaining_weight -= weight[i];
            total_value += price[i];
        }
    }
    cout << "Maximum total value in knapsack: " << total_value << endl;
    cout << "Maximum amount: " << total_value << endl;
    return 0;
}