#include"classes.h"
int main()
{
    UserProfile *ptr=nullptr;
    system("clear");
    cout<<setw(70)<<"HEALTH MANAGEMENT SYSTEM\n\n\n";
    cout<<"Select the type of Profile you want - \n";
    cout<<"1.Fitness Tracker\n";
    cout<<"2.Fitness Tracker along with blood glucose monitoring.\n";
    cout<<"3.Fitness Tracker along with blood glucose and vitals monitoring.\n\n\n";
    cout<<"Your choice(1/2/3):";
    int n;
    cin>>n;
    if(n==1)
    ptr = new fitness_tracker();
    else if(n==2)
    ptr = new fitness_glucose_monitor();
    else
    ptr = new fitness_glucose_vital_monitor();
    int exit =0;
    bool data_entered=false;
    while(!exit)
    {
        system("clear");
        cout<<setw(92)<<"HEALTH MANAGEMENT SYSTEM\n\n\n";
        cout<<"1.Enter/update data.\n";
        cout<<"2.Get report generated from last entered dataset.\n";
        cout<<"3.Exit\n\n\n";
        cout<<"Your choice(1/2/3):";
        int choice;
        cin>>choice;
        if(choice==1)
        {
            ptr->get_data();
            ptr->generate_report();
            data_entered=true;
        }
        else if(choice==2)
        {
            if(data_entered)
            ptr->show_report();
            else
            {
                cout<<"No data found. First enter data to get report.\n";
                cin.ignore();
                getchar();
            }
        }
        else
        exit=1;
    }
}