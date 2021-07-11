#include <bits/stdc++.h>
using namespace std;

class BloodGlucose
{

private:
	int blood_glucose_level, blood_glucose_status;
	map <int, string> blood_glucose_data;
	int Age;

public:
	BloodGlucose(int age);
	void get_BloodGlucose();
    void generate_BloodGlucose_report();
    void print_BloodGlucose_report();

};
