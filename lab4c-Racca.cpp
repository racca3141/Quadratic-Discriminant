// Emerson Racca
// 09/13/2021
// Lab 4c: Quadratic Discriminant

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double discriminant(double a, double b, double c);

int main(){
    
    double a, b, c, disc;
  
    cout << "Quadratic Discriminant Calculator\n\n";
    cout << "This app calculates the discriminant of a quadratic equation\n";
    cout << "and determines the number and type of solutions.\n\n";
    cout << "What is a? ";
    cin >> a;
    cout << "\nWhat is b? ";
    cin >> b;
    cout << "\nWhat is c? ";
    cin >> c;
    cout << endl;

    disc = discriminant(a, b, c);
  
    cout << "\nThe discriminant b^2 - 4ac = " << disc;
  
    /*  
        Discriminant > 0    =>    Two real solutions. 
        Discriminant = 0    =>    One real solution.
        Discriminant < 0    =>    Two complex solutions.
    */
  
    if (disc > 0)
        cout << "\nThere are two real solutions.";
    else if (disc == 0)
        cout << "\nThere is one real solution.";
    else
        cout << "\nThere are two complex solutions.";
  
    return 0;
}


double discriminant(double a, double b, double c){
    return b * b - 4 * a * c;    
}
