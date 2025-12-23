#include<iostream>
#include<cstring>
using namespace std;
class Student
{
    private:
        int carId, seatingCapacity, bootSpace, noOfTyres, topSpeed, fuelTankCapacity;
        string ownerName, modelName, color, regNo, fuelType;
        bool isPUCDone, isInsured;
        float mileage, price;

    public:
    Student()
    {
        cout << "Default Constructor Called" << endl;
        carId = -1; seatingCapacity = 4;
        bootSpace = 100; noOfTyres = 4; topSpeed = 130;
        fuelTankCapacity = 20;
        ownerName = ""; modelName="Beginning"; color=""; 
        regNo=""; fuelType="Petrol";
        isPUCDone=true; isInsured=false;
        mileage=10.5; price=1000000.0;
    }
    Student(int cId, int sCapacity, int bSpace, int nTyres, int tSpeed,
        int fTankCapacity, string oName, string mName, string cColor,
        string rNo, string fType, bool pDone, bool insured,
        float mlg, float pce)
    {
        cout << "Parameterized Constructor Called" << endl;
        carId = cId; seatingCapacity = sCapacity;
        bootSpace = bSpace; noOfTyres = nTyres; topSpeed = tSpeed;
        fuelTankCapacity = fTankCapacity;
        ownerName = oName; modelName=mName; color=cColor; 
        regNo=rNo; fuelType=fType;
        isPUCDone=pDone; isInsured=insured;
        mileage=mlg; price=pce;
    }
    Student(int carId, string ownerName, string modelName, string regNo, float price)
    {
        cout << "Partial Parameterized Constructor Called" << endl;
        this->carId = carId; 
        this->ownerName = ownerName;
        this->modelName = modelName; 
        this->regNo = regNo;
        this->price = price;

        seatingCapacity = 4;
        bootSpace = 100; noOfTyres = 4; topSpeed = 130;
        fuelTankCapacity = 20;
        color=""; 
        fuelType="Petrol";
        isPUCDone=true; isInsured=false;
        mileage=10.5;         
        // second way to initialize other members is pending
    }
    int getCarId(){
        return carId;
    }
    int getSeatingCapacity(){
        return seatingCapacity;
    }
    int getBootSpace(){
        return bootSpace;
    }
    int getNoOfTyres(){
        return noOfTyres;
    }
    int getTopSpeed(){
        return topSpeed;
    }
    int getFuelTankCapacity(){
        return fuelTankCapacity;
    }
    void setCarId(int cId){
        carId = cId;
    }
    void setSeatingCapacity(int sCapacity){
        seatingCapacity = sCapacity;
    }
    void setBootSpace(int bSpace){
        bootSpace = bSpace;
    }
    void setNoOfTyres(int nTyres){
        noOfTyres = nTyres;
    }
    void setTopSpeed(int tSpeed){
        topSpeed = tSpeed;
    }
    void setFuelTankCapacity(int fTankCapacity){
        fuelTankCapacity = fTankCapacity;
    }
};

int main()
{
    Student car1;
    Student car2(101, 5, 300, 4, 180, 40, "John Doe", "Model X", "Red", "AB123CD", "Diesel", true, true, 15.0, 2500000.0);
    Student car3(102, "Jane Smith", "Model Y", "XY987ZT", 1800000.0);
    return 0;
}