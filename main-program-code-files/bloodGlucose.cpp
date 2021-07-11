#include <bits/stdc++.h>
#include "bloodGlucose.h"

using namespace std;

BloodGlucose::BloodGlucose(int age)
{
	Age = age;
	blood_glucose_data.insert({1,"Your blood sugar levels are LOW\n"});
	blood_glucose_data.insert({2,"Your blood sugar levels are NORMAL\n"});
	blood_glucose_data.insert({3,"Your blood sugar levels are HIGH\n"});
}

void BloodGlucose::get_BloodGlucose()
{
	cout<<"Enter your Blood Sugar Level: ";
	cin>>blood_glucose_level;
}

void BloodGlucose::generate_BloodGlucose_report()
{
	if(Age <= 30){
		if(blood_glucose_level < 80){
			blood_glucose_status = 1;
		}
		else if(blood_glucose_level >= 80 && blood_glucose_level <= 140 ){
			blood_glucose_status = 2;
		}
		else{
			blood_glucose_status = 3;
		}
	}
	else{
		if(blood_glucose_level < 70){
			blood_glucose_status = 1;
		}
		else if(blood_glucose_level >= 70 && blood_glucose_level <= 170 ){
			blood_glucose_status = 2;
		}
		else{
			blood_glucose_status = 3;
		}
	}
}

void BloodGlucose::print_BloodGlucose_report()
{
	cout<<"Blood Glucose Level: "<<blood_glucose_level<<"\n";
	cout<<blood_glucose_data[blood_glucose_status]<<"\n";
}

