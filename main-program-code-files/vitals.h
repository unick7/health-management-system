#include<bits/stdc++.h>
using namespace std;
class Vitals
{
    int SpO2,SpO2_status;
    pair<int,int> blood_pressure;
    int blood_pressure_status;
    int pulse,pulse_status,Age;
    map<int,string> SpO2_data,blood_pressure_data,pulse_data;

    public:
    Vitals(int age);
    void get_vitals();
    void generate_report();
    void print_report();
};