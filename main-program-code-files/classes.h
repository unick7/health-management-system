#include<bits/stdc++.h>
#include"vitals.h"
#include"fitness.h"
#include"bloodGlucose.h"

class UserProfile
{
    protected:
    string name;
    int age,bmi_status;
    float weight,height,bmi;
    string bmi_data;
    public:
    void calc_bmi();
    //pure vertual functions -> Abstract class
    virtual void get_data()=0;
    virtual void generate_report()=0;
    virtual void show_report()=0;
};

class fitness_tracker: public UserProfile
{
    public:
    Fitness *fit=nullptr;
    ~fitness_tracker();
    void get_data();
    void generate_report();
    void show_report();
};

class fitness_glucose_monitor: public fitness_tracker
{
    public:
    BloodGlucose *glucose=nullptr;
    ~fitness_glucose_monitor();
    void get_data();
    void generate_report();
    void show_report();

};

class fitness_glucose_vital_monitor : public fitness_glucose_monitor
{
    public:
    Vitals *vitals=nullptr;
    ~fitness_glucose_vital_monitor();
    void get_data();
    void generate_report();
    void show_report();
};