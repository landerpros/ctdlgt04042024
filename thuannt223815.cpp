#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Tôi sinh ra chỉ để so sánh
int soSanh(string mauTruoc, string mauSau) {
    if (mauTruoc == "red" && mauSau == "white") return 0;
    if (mauTruoc == "red" && mauSau == "blue") return 0;
    if (mauTruoc == "white" && mauSau == "blue") return 0;
    return 1;
}

// Sắp xếp bong bóng
void bongBong(vector<string> &arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (soSanh(arr[j], arr[j+1]) == 1) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

//Tét
int main() {
    vector<string> huhu = {"blue", "red", "blue", "red", "red", "white", "red", "blue", "white"}; //Input

    bongBong(huhu); //Áp dụng công thức là ra

    cout << "Huhu: "; //In ra Output
     for (int i = 0; i < huhu.size(); i++) {
        cout << huhu[i] << " ";
     }
    
    cout << endl;
    
    system("pause");
    return 0;
}
