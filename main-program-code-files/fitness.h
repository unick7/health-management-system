#include<bits/stdc++.h>
using namespace std;
class Fitness
{
private:
    float distance;
    float calories_burn_walking , calories_burn_exercise , calories_burn_total;
    int sleeping_hour;
    int exercise_time;
    map<int , string> distance_tracking , sleep_tracking , exercise_tracking;
    int distance_status , sleeping_status , exercise_status , Age;
public:
    Fitness(int age);
    void get_fitness_parameter();
    void generate_fitness_report();
    void get_fitness_report();
};


