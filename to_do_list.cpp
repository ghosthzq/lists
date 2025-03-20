#include <iostream>
#include <vector>
using namespace std;
class to_do_list
{
    private:
    vector <string> agenda;
    public:
    void add_agenda()
    {
        string task;
        cout<<"enter the task"<<endl;
        cin>>task;
        agenda.push_back(task);
    }
    void display_agenda()
    {
        for (int i=0;i<agenda.size();i++)
        {
            cout<<agenda[i]<<endl;
        }
    }
    void delete_agenda()
    {
        int index;
        cout<<"enter the index of the task you want to delete"<<endl;
        cin>>index;
        agenda.erase(agenda.begin()+index);
    }
};
int main()
{
    to_do_list td;
    cout<<"welcome to to do list"<<endl;
    int choice;
    while (1)
    {
        cout<<"1. add task"<<endl;
        cout<<"2. display task"<<endl;
        cout<<"3. delete task"<<endl;
        cout<<"4. exit"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;      
        switch (choice)
        {
            case 1:
            td.add_agenda();
            break;
            case 2:
            td.display_agenda();
            break;
            case 3:
            td.delete_agenda();
            break;
            case 4:
            exit(0);
            break;
            default:
            cout<<"invalid choice"<<endl;                           
        }
    }
}