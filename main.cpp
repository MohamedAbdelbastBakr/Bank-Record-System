#include <iostream>
#include "../linked_listed/include/My_Linked_list.h"

using namespace std;

My_Linked_list users_data;
int main()
{
    users_data.insert_last(1,50000,"Mohamed Bakr");
    users_data.insert_last (2,5000,"Sayed Khalil");
    users_data.insert_last (3,1000000,"Mahmoud Farouq");
    users_data.insert_last (4,2000000,"Mohamed Gamal");
    int choice;
    users_data.intro();
    while(1)
    {
        cin>>choice;
        switch(choice)
        {
        case 1:
            users_data.add_record();
            cout<<"\nRETURNED TO MAIN MENU PLEASE SELECT FROM <1-7>:";
            break;
        case 2:
            users_data.display();
            cout<<"\nRETURNED TO MAIN MENU PLEASE SELECT FROM <1-7>:";
            break;
        case 3:
            users_data.search_record();
            cout<<"\nRETURNED TO MAIN MENU PLEASE SELECT FROM <1-7>:";

            break;
        case 4:
            users_data.update_record();
            cout<<"\nRETURNED TO MAIN MENU PLEASE SELECT FROM <1-7>:";
            break;
        case 5:
            users_data.delete_record();
            cout<<"\nRETURNED TO MAIN MENU PLEASE SELECT FROM <1-7>:";
            break;
        case 6:
            users_data.display_users_names();
            cout<<"\nRETURNED TO MAIN MENU PLEASE SELECT FROM <1-7>:";
            break;
        case 7:
            users_data.total_balance();
            cout<<"\nRETURNED TO MAIN MENU PLEASE SELECT FROM <1-7>:";
            break;
        default:
            cout<<"ERROR!! PLEASE SELECT FROM <1-7>: ";

}
    }
}
