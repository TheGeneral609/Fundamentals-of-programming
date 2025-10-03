#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    char again;
    do {
        cout << "What do you want to purchase?:" << endl;
        cout << "Vegetable (P54.5/kg) = ";
        float vegQty;
        cin >> vegQty;
        if (vegQty < 0) vegQty = 0;

        cout << "Fruits (120-150/kg)= ";
        float fruitPrice;
        cout << "Enter fruit price (120-150): ";
        cin >> fruitPrice;
        if (fruitPrice < 120 || fruitPrice > 150) fruitPrice = 135;
        float fruitQty;
        cin >> fruitQty;
        if (fruitQty < 0) fruitQty = 0;

        cout << "Milk (90/pack)= ";
        float milkQty;
        cin >> milkQty;
        if (milkQty < 0) milkQty = 0;

        cout << "Soap (29.45/bar)= ";
        float soapQty;
        cin >> soapQty;
        if (soapQty < 0) soapQty = 0;

        cout << "Shampoo and Conditioner (140/bottle)= ";
        float shamQty;
        cin >> shamQty;
        if (shamQty < 0) shamQty = 0;

        float total = (vegQty * 54.5f) + (fruitQty * fruitPrice) + (milkQty * 90.0f) + (soapQty * 29.45f) + (shamQty * 140.0f);

        cout << fixed << setprecision(2);
        cout << "Total purchase: P" << total << endl;

        float payment;
        cout << "Enter payment amount: P";
        cin >> payment;
        if (payment < total) {
            cout << "Insufficient payment! Please pay at least P" << total << endl;
            return 1;
        }
        float change = payment - total;
        cout << "Your change: P" << change << endl;

        cout << "Do you want to purchase again (Y/N)? ";
        cin >> again;
        if (again != 'Y' && again != 'y') {
            cout << "Thank you for shopping!" << endl;
        }
    } while (again == 'Y' || again == 'y');

    return 0;
}