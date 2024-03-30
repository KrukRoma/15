#include <iostream>
using namespace std;

//1
//struct Fraction {
//    int numerator;
//    int denominator;
//};

//Fraction add(Fraction frac1, Fraction frac2) {
//    Fraction result;
//    result.numerator = frac1.numerator * frac2.denominator + frac2.numerator * frac1.denominator;
//    result.denominator = frac1.denominator * frac2.denominator;
//    return result;
//}
//
//Fraction subtract(Fraction frac1, Fraction frac2) {
//    Fraction result;
//    result.numerator = frac1.numerator * frac2.denominator - frac2.numerator * frac1.denominator;
//    result.denominator = frac1.denominator * frac2.denominator;
//    return result;
//}
//
//Fraction multiply(Fraction frac1, Fraction frac2) {
//    Fraction result;
//    result.numerator = frac1.numerator * frac2.numerator;
//    result.denominator = frac1.denominator * frac2.denominator;
//    return result;
//}
//
//Fraction divide(Fraction frac1, Fraction frac2) {
//    Fraction result;
//    result.numerator = frac1.numerator * frac2.denominator;
//    result.denominator = frac1.denominator * frac2.numerator;
//    return result;
//}

//2
struct Car {
    double length;
    double clearance;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    char color[20];
    char transmissionType[20];
};

void setValues(Car& car, double length, double clearance, double engineVolume, double enginePower, double wheelDiameter, const char* color, const char* transmissionType) {
    car.length = length;
    car.clearance = clearance;
    car.engineVolume = engineVolume;
    car.enginePower = enginePower;
    car.wheelDiameter = wheelDiameter;
    strcpy_s(car.color, color);
    strcpy_s(car.transmissionType, transmissionType);
}

void displayValues(const Car& car) {
    cout << "Length: " << car.length << " meters" << endl;
    cout << "Clearance: " << car.clearance << " meters" << endl;
    cout << "Engine Volume: " << car.engineVolume << " sm^3" << endl;
    cout << "Engine Power: " << car.enginePower << " W" << endl;
    cout << "Wheel Diameter: " << car.wheelDiameter << " inches" << endl;
    cout << "Color: " << car.color << endl;
    cout << "Transmission Type: " << car.transmissionType << endl;
}

int main() {
    //1
    /*Fraction frac1 = { 1, 2 };
    Fraction frac2 = { 2, 3 };

    cout << "Sum: "  << add(frac1, frac2).numerator << "/" << add(frac1, frac2).denominator << endl;
    cout << "Difference: " << subtract(frac1, frac2).numerator << "/" << subtract(frac1, frac2).denominator << endl;
    cout << "Product: " << multiply(frac1, frac2).numerator << "/" << multiply(frac1, frac2).denominator << endl;
    cout << "Quotient: " << divide(frac1, frac2).numerator << "/" << divide(frac1, frac2).denominator << endl;*/

    //2
    Car myCar;
    setValues(myCar, 4.5, 0.15, 2000, 150, 17, "Red", "Automatic");
    cout << "My Car:" << endl;
    displayValues(myCar);

    Car userCar;
    cout << "\nEnter Car Details:" << endl;
    cout << "Length (meters): ";
    cin >> userCar.length;
    cout << "Clearance (meters): ";
    cin >> userCar.clearance;
    cout << "Engine Volume (sm^3): ";
    cin >> userCar.engineVolume;
    cout << "Engine Power (W): ";
    cin >> userCar.enginePower;
    cout << "Wheel Diameter (inches): ";
    cin >> userCar.wheelDiameter;
    cout << "Color: ";
    cin >> userCar.color;
    cout << "Transmission Type: ";
    cin >> userCar.transmissionType;

    cout << "\nUser's Car:" << endl;
    displayValues(userCar);

}

