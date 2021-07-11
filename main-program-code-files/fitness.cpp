#include<bits/stdc++.h>
#include"fitness.h"
using namespace std;

Fitness::Fitness(int age)
{
    Age = age;
    distance_tracking.insert({1 , "You were walked enough according to your age group. \n"});
    distance_tracking.insert({2 , "You were not walked enough. You have to walk little bit more it is good for your health. \n"});
    exercise_tracking.insert({1 , "You did exercise enough according to your age group\n"});
    exercise_tracking.insert({2 , "You didn't exercise enough according to your age group. You have to do little bit more exercise for your good health and fitness.\n"});
    sleep_tracking.insert({1 , "You had sleeped enough according to your age group\n"});
    sleep_tracking.insert({2 , "You had not sleeped enough according to your age group. It will be affect on your daily work and also effect your physical and mental health\n"});
    sleep_tracking.insert({3 , "Too much sleep is also leave some bad effects on your health and efficiency . Try to maintain your sleep.\n"});
}

void Fitness::get_fitness_parameter()
{
    cout<<"Enter distance(in KM) which you had walked: ";
    cin>>distance;
    cout<<"Enter the time(in min) that how much time you did exercise: ";
    cin>>exercise_time;
    cout<<"Enter the time(in Hours) that how much time you slept: ";
    cin>>sleeping_hour;
}

void Fitness::generate_fitness_report()
{
    if(Age <= 25){
        if(distance >= 7){
            distance_status = 1;
        }
        else{
            distance_status = 2;
        }
    }
    else{
        if(distance >=4){
            distance_status = 1;
        }
        else{
            distance_status = 2;
        }
    }

    if(Age <= 25){
        if(exercise_time >= 45){
            exercise_status = 1;
        }
        else{
            exercise_status = 2;
        }
    }
    else{
        if(exercise_time >= 25){
            exercise_status = 1;
        }
        else{
            exercise_status = 2;
        }
    }

    if(sleeping_hour >= 7 && sleeping_hour <= 9 ){
        sleeping_status = 1;
    }
    else if(sleeping_hour < 7){
        sleeping_status = 2;
    }
    else{
        sleeping_status = 3;
    }

    calories_burn_walking = 65*distance; // 65 cal avg burn when walk 1 km.
    calories_burn_exercise = 4*exercise_time; // 4 cal avg burn in 1 min exercise.
    calories_burn_total = calories_burn_walking + calories_burn_exercise;
}

void Fitness::get_fitness_report()
{
    cout<<sleep_tracking[sleeping_status];
    cout<<distance_tracking[distance_status];
    cout<<exercise_tracking[exercise_status];
    cout<<"Your total calories burn in "<< distance<<" Km walking and "<<exercise_time<<" min exercise is: "<<calories_burn_total<<"cal\n";
}