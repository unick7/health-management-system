#include<bits/stdc++.h>
#include"classes.h"

void UserProfile::calc_bmi()
{
    bmi=weight/(height*height);
    if(bmi<18.5f)
    bmi_data="You are underweight. Ask doctor or a dietitian for advice to help put on some weight.\n";
    else if(bmi>=18.5f and bmi<=25.0f)
    bmi_data="You have a healthy weight. By maintaining a healthy weight you can significantly lower the risk of developing any serious health problems.\n";
    else if(bmi>25.0f and bmi<30.0f)
    bmi_data="You are slightly overweight. Try losing some weight for health reasons. Get advice from a doctor or a dietitian.\n";
    else
    bmi_data="You are obese. Your health may be at risk if you do not lose extra weight.\n";
}




fitness_tracker::~fitness_tracker()
{
    delete fit;
}
void fitness_tracker::get_data()
{
    system("clear");
    cout<<"Name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"Age: ";
    cin>>age;
    cout<<"Weight: ";
    cin>>weight;
    cout<<"Height(in m): ";
    cin>>height;
    fit= new Fitness(age);
    cout<<"\n";
    fit->get_fitness_parameter();
}
void fitness_tracker::generate_report()
{
    calc_bmi();
    fit->generate_fitness_report();
}
void fitness_tracker::show_report()
{
    system("clear");
    cout<<"Name: "<<name<<"\n";
    cout<<"BMI: "<<bmi<<"\n";
    cout<<bmi_data<<"\n";
    fit->get_fitness_report();
    getchar();
    getchar();
}



fitness_glucose_monitor::~fitness_glucose_monitor()
{
    delete fit;
    delete glucose;
}
void fitness_glucose_monitor::get_data()
{
    system("clear");
    cout<<"Name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"Age: ";
    cin>>age;
    cout<<"Weight: ";
    cin>>weight;
    cout<<"Height(in m): ";
    cin>>height;
    fit = new Fitness(age);
    glucose = new BloodGlucose(age);
    cout<<"\n";
    fit->get_fitness_parameter();
    cout<<"\n";
    glucose->get_BloodGlucose();
}
void fitness_glucose_monitor::generate_report()
{
    calc_bmi();
    fit->generate_fitness_report();
    glucose->generate_BloodGlucose_report();
}
void fitness_glucose_monitor::show_report()
{
    system("clear");
    cout<<"Name: "<<name<<"\n";
    cout<<"BMI: "<<bmi<<"\n";
    cout<<bmi_data<<"\n";
    fit->get_fitness_report();
    glucose->print_BloodGlucose_report();
    getchar();
    getchar();
}



fitness_glucose_vital_monitor::~fitness_glucose_vital_monitor ()
{
    delete fit;
    delete glucose;
    delete vitals;
}
void fitness_glucose_vital_monitor::get_data()
{
    system("clear");
    cout<<"Name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"Age: ";
    cin>>age;
    cout<<"Weight: ";
    cin>>weight;
    cout<<"Height(in m): ";
    cin>>height;
    fit = new Fitness(age);
    glucose = new BloodGlucose(age);
    vitals = new Vitals(age);
    cout<<"\n";
    fit->get_fitness_parameter();
    cout<<"\n";
    glucose->get_BloodGlucose();
    cout<<"\n";
    vitals->get_vitals();
}
void fitness_glucose_vital_monitor::generate_report()
{
    calc_bmi();
    fit->generate_fitness_report();
    glucose->generate_BloodGlucose_report();
    vitals->generate_report();
}
void fitness_glucose_vital_monitor::show_report()
{
    system("clear");
    cout<<"Name: "<<name<<"\n";
    cout<<"BMI: "<<bmi<<"\n";
    cout<<bmi_data<<"\n";
    fit->get_fitness_report();
    glucose->print_BloodGlucose_report();
    vitals->print_report();
    getchar();
    getchar();
}
