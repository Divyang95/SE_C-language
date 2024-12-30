//Multilevel inheritance
//same as single here we go up to C D E F like wise 
//here Ticket Counter we are making
#include<iostream>
using namespace std;

class PVR{
	public:
		
		pvr1(){
			int seatnos,totalbill,seattype,eachseatrate;
			cout<<"Enter Seatype you want for executive press 1"<<endl;
			cout<<"Enter Seatype you want for recliner press 2"<<endl;
			cout<<"Enter Seatype you want for sofa press 3"<<endl;
			cin>>seattype;
			
			if(seattype=1){
				string seattypee ="Executive";
				eachseatrate = 400;
				cout<<"Enter Number of Executive Seats you want to book:"<<endl;
				cin>>seatnos;
			
			totalbill = seatnos*eachseatrate;
			cout<<"Total Amout of"<<seatnos<<"for"<<seattypee<<"are"<<totalbill<<endl;
			}
			else if(seattype=2){
//				seattypee"Recliner";
				eachseatrate = 500;
				cout<<"Enter Number of Executive Seats you want to book:"<<endl;
				cin>>seatnos;
			
			totalbill = seatnos*eachseatrate;
			cout<<"Total Amout of"<<seatnos<<"for"<<seattype<<"are"<<totalbill<<endl;
			}
			else{
//				seatypee="Sofa";
				eachseatrate = 600;
				cout<<"Enter Number of Executive Seats you want to book:"<<endl;
				cin>>seatnos;
			
			totalbill = seatnos*eachseatrate;
			cout<<"Total Amout of"<<seatnos<<"for"<<seattype<<"are"<<totalbill<<endl;
			}
			
		} 
		
}; 

class Drivein:public PVR{
	public:
		
		Drivein1(){
			int seatnos,totalbill,seattype,eachseatrate;
			cout<<"Enter Seatype you want for executive press 1"<<endl;
			cout<<"Enter Seatype you want for recliner press 2"<<endl;
			cout<<"Enter Seatype you want for sofa press 3"<<endl;
			cin>>seattype;
			
			if(seattype=1){
//				seattypee="Executive";
				eachseatrate = 250;
				cout<<"Enter Number of Executive Seats you want to book:"<<endl;
				cin>>seatnos;
			
			totalbill = seatnos*eachseatrate;
			cout<<"Total Amout of"<<seatnos<<"for"<<seattype<<"are"<<totalbill<<endl;
			}
			else if(seattype=2){
//				seattypee="Recliner"
				eachseatrate = 300;
				cout<<"Enter Number of Executive Seats you want to book:"<<endl;
				cin>>seatnos;
			
			totalbill = seatnos*eachseatrate;
			cout<<"Total Amout of"<<seatnos<<"for"<<seattype<<"are"<<totalbill<<endl;
			}
			else{
//				seatypee="Sofa";
				eachseatrate = 400;
				cout<<"Enter Number of Executive Seats you want to book:"<<endl;
				cin>>seatnos;
			
			totalbill = seatnos*eachseatrate;
			cout<<"Total Amout of"<<seatnos<<"for"<<seattype<<"are"<<totalbill<<endl;
			}
			
		} 
		
};
class Cinemax:public Drivein{
	public:
		
		Cinemax1(){
			int seatnos,totalbill,seattype,eachseatrate;
			cout<<"Enter Seatype you want for executive press 1"<<endl;
			cout<<"Enter Seatype you want for executive press 2"<<endl;
			cout<<"Enter Seatype you want for executive press 3"<<endl;
			cin>>seattype;
			
			if(seattype=1){
//				seatypee="Executive";
				eachseatrate = 250;
				cout<<"Enter Number of Executive Seats you want to book:"<<endl;
				cin>>seatnos;
			
			totalbill = seatnos*eachseatrate;
			cout<<"Total Amout of"<<seatnos<<"for"<<seattype<<"are"<<totalbill<<endl;
			}
			else if(seattype=2){
				
//				seatypee="recliner";
				eachseatrate = 300;
				cout<<"Enter Number of Executive Seats you want to book:"<<endl;
				cin>>seatnos;
			
			totalbill = seatnos*eachseatrate;
			cout<<"Total Amout of"<<seatnos<<"for"<<seattype<<"are"<<totalbill<<endl;
			}
			else{
//				seatypee="Sofa";
				eachseatrate = 300;
				cout<<"Enter Number of Executive Seats you want to book:"<<endl;
				cin>>seatnos;
			
			totalbill = seatnos*eachseatrate;
			cout<<"Total Amout of"<<seatnos<<"for"<<seattype<<"are"<<totalbill<<endl;
			}
			
		} 
		
};
main(){
	Cinemax obj;
	int theater;
	
	while(1){
		cout<<"press 1 for PVR Theater"<<endl;
		cout<<"Press 2 for Drivein Theater"<<endl;
		cout<<"Press 3 for Cinemax Theater"<<endl;
		cin>>theater;
		
		if(theater== 1){
			obj.pvr1();
		}
		else if(theater == 2){
			obj.Drivein1();
		}
		else{
			obj.Cinemax1();
		}
	}
}
