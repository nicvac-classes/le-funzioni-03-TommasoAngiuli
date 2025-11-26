#include <iostream>
using namespace std;
double calcolaArea(int r1) 
{
    double area;
    area = r1 * r1 * 3.14;
    return area;
}
double calcoloCirconferenza(int r1) 
{
    double circonferenza;
    circonferenza = 6.28 * r1;
    return circonferenza;
}
int main() 
{
    int r1, r2;
    double area, circonferenza;
    cout << "inserisci il raggio del primo cerchio" << endl;
    cin >> r1;
    cout << "inserisci il raggio del secondo cerchio" << endl;
    cin >> r2;
    area = calcolaArea(r1);
    circonferenza = calcoloCirconferenza(r1);
    cout << "la circonferenza del primo cerchio è " << circonferenza << " e l'area è " << area << endl;
    area = calcolaArea(r2);
    circonferenza = calcoloCirconferenza(r2);
    cout << "la circonferenza del secondo cerchio è " << circonferenza << " e l'area è " << area << endl;
}