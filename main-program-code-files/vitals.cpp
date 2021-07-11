#include<bits/stdc++.h>
#include"vitals.h"
using namespace std;

Vitals::Vitals(int age)
{
    Age=age;
    SpO2_data.insert({1,"You have normal blood oxygen level.\n"});
    SpO2_data.insert({2,"Your blood oxygen level is concerning. Continue with respiratory assessment and monitoring.\n"});
    SpO2_data.insert({3,"Your blood oxygen level in alarmingly low. Seek medical attention immediately.\n"});
    blood_pressure_data.insert({1,"HIGH BLOOD PRESSURE / STAGE 2\nRecommendations: Lifestyle changes and 2 different classes of medicines with monthly follow-ups until BP is controlled.\n"});
    blood_pressure_data.insert({2,"HIGH BLOOD PRESSURE / STAGE 1\nRecommendations: 10-year heart disease and stroke risk assessment. If less than 10% risk, lifestyle changes, reassessed in 3-6 months. If higher, lifestyle changes and medication with monthly follow-ups until BP is controlled.\n"});
    blood_pressure_data.insert({3,"ELEVATED BLOOD PRESSURE\nRecommendations: Healthy lifestyle changes, reassessed in 3-6 months.\n"});
    blood_pressure_data.insert({4,"NORMAL BLOOD PRESSURE\nRecommendations: Healthy lifestyle choices and yearly checks.\n"});
    pulse_data.insert({1,"STATUS: Poor\n"});
    pulse_data.insert({2,"STATUS: Below Average\n"});
    pulse_data.insert({3,"STATUS: Average\n"});
    pulse_data.insert({4,"STATUS: Above Average\n"});
    pulse_data.insert({5,"STATUS: Good\n"});
    pulse_data.insert({6,"STATUS: Excellent\n"});
    pulse_data.insert({7,"STATUS: Athlete\n"});
}
void Vitals::get_vitals()
{
    cout<<"Enter SpO2: ";
    cin>>SpO2;
    cout<<"Enter blood pressure\nEnter systolic pressure: ";
    cin>>blood_pressure.first;
    cout<<"Enter diastolic pressure: ";
    cin>>blood_pressure.second;
    cout<<"Enter pulse: ";
    cin>>pulse;
}
void Vitals::generate_report()
{
    if(SpO2>=95)
    SpO2_status=1;
    else if(SpO2>=91)
    SpO2_status=2;
    else
    SpO2_status=3;

    if(blood_pressure.first>=140 || blood_pressure.second>=90)
    blood_pressure_status=1;
    else if(blood_pressure.first>=130 || blood_pressure.second>80)
    blood_pressure_status=2;
    else if(blood_pressure.first>120)
    blood_pressure_status=3;
    else
    blood_pressure_status=4;

    if(Age<=25)
        {
            if(pulse>=82)
            pulse_status=1;
            else if(pulse>=74)
            pulse_status=2;
            else if(pulse>=70)
            pulse_status=3;
            else if(pulse>=66)
            pulse_status=4;
            else if(pulse>=62)
            pulse_status=5;
            else if(pulse>=56)
            pulse_status=6;
            else
            pulse_status=7;
        }
    else if(Age<=35)
        {
            if(pulse>=82)
            pulse_status=1;
            else if(pulse>=75)
            pulse_status=2;
            else if(pulse>=71)
            pulse_status=3;
            else if(pulse>=66)
            pulse_status=4;
            else if(pulse>=62)
            pulse_status=5;
            else if(pulse>=55)
            pulse_status=6;
            else
            pulse_status=7;     
        }
    else if(Age<=45)
        {
            if(pulse>=83)
            pulse_status=1;
            else if(pulse>=76)
            pulse_status=2;
            else if(pulse>=71)
            pulse_status=3;
            else if(pulse>=67)
            pulse_status=4;
            else if(pulse>=63)
            pulse_status=5;
            else if(pulse>=57)
            pulse_status=6;
            else
            pulse_status=7;
        }
    else if(Age<=55)
        {
            if(pulse>=84)
            pulse_status=1;
            else if(pulse>=77)
            pulse_status=2;
            else if(pulse>=72)
            pulse_status=3;
            else if(pulse>=68)
            pulse_status=4;
            else if(pulse>=64)
            pulse_status=5;
            else if(pulse>=58)
            pulse_status=6;
            else
            pulse_status=7;
        }
    else if(Age<=65)
        {
            if(pulse>=82)
            pulse_status=1;
            else if(pulse>=76)
            pulse_status=2;
            else if(pulse>=72)
            pulse_status=3;
            else if(pulse>=68)
            pulse_status=4;
            else if(pulse>=62)
            pulse_status=5;
            else if(pulse>=57)
            pulse_status=6;
            else
            pulse_status=7;
        }
    else
        {
            if(pulse>=80)
            pulse_status=1;
            else if(pulse>=74)
            pulse_status=2;
            else if(pulse>=70)
            pulse_status=3;
            else if(pulse>=66)
            pulse_status=4;
            else if(pulse>=62)
            pulse_status=5;
            else if(pulse>=56)
            pulse_status=6;
            else
            pulse_status=7;
        }
}
void Vitals::print_report()
{
    cout<<"SpO2: "<<SpO2<<"\n"<<SpO2_data[SpO2_status]<<"\n";
    cout<<"Blood Pressure: "<<blood_pressure.first<<" / "<<blood_pressure.second<<"\n"<<blood_pressure_data[blood_pressure_status]<<"\n";
    cout<<"Pulse: "<<pulse<<"\n"<<pulse_data[pulse_status];
}