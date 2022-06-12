class VehicleFactory{
	public:
		static Vehicle* getVehicle(string vehicleType){
			Vehicle* vehicle;
			if(vehicleType=="car")
				vehicle= new Car();
			else if(vehicleType== "bike")
				vehicle= new Bike();
			cout<<"Invalid type of VEHICLE, we use BIKE as default Vehicle"<<endl;
			vehicle= new Bike();
			return vehicle;
		}
};
