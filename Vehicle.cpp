class Vehicle{
	public:
		virtual void createVehicle()=0;
};
class Car: public Vehicle{
	public:
		void createVehicle(){
			cout<<"Creating a CAR"<<endl;
		}
};
class Bike: public Vehicle{
	public:
		void createVehicle(){
			cout<<"Creating a BIKE"<<endl;
		}
};
