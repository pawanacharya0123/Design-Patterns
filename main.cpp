#include<iostream>
using namespace std;
#include"Vehicle.cpp"
#include"VehicleFactory.cpp"
 
int main(){
	string vehicleType;
	cout<<"Enter the type of VEHICLE"<<endl;
	cin>>vehicleType;
	Vehicle* vehicle= VehicleFactory::getVehicle(vehicleType);
	vehicle->createVehicle();
	
	return 0;
}
