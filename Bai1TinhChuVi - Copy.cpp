#include<iostream>
using namespace std;
float chuvi(int a, int b, int c) {
    return a + b + c;
}
int main(){
    float a, b, c;
    cout << "Nhap canh a: ";
    cin >> a;
    cout << "Nhap canh b: ";
    cin >> b;
    cout << "Nhap canh c: ";
    cin >> c;
    if (a >= b + c || b >= a + c || c >= a + b)
        cout << "Ba canh vua nhap khong phai la canh cua tam giac";
    else {
        cout << "Chu vi cua tam giac la: "<<chuvi(a,b,c);
    }
    system("pause");
    return 0;
} 
