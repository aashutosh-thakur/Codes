#include<iostream>
using namespace std;
#define maxsize 10
class sira{
    private:
        int phone[maxsize],citizenID[maxsize],unique[maxsize],parentspn[maxsize];
        string f_name[maxsize],l_name[maxsize], blood[maxsize], medicine[maxsize],mail[maxsize];
        int count=0;
        int iD[maxsize];
        string password[maxsize];

    public:
        int loginPatient();
        void profilepatient();
        void medicalSer();
        void nearbyhos();
        void nearbyphar();
        void emergency();
        void signUpPatient();
        void loginDoctor();
        void profileDoctor();
        void visitprof();
        void signUpDoctor();
        void loginAdmin();
        void hospitalprofile();
        void docpro();
        void emergencycase();
        void signUpAdmin();
};
int sira::loginPatient()
{
    int i,j,k=3;
    int x;
    start:
    string y;
    for(i=0;i<10;i++)
    {
        cout<<"Enter your user ID: ";
        cin>>x;
        cout<<"Enter Password: ";
        cin>>y;
        if(x==iD[i]&&y==password[i])
        {
            return 1;
        }
        else
        {
            if(k==0)
            {
                cout<<"Your account has been blocked!\n";
                exit(1);
            }
            else
            {
                cout<<"You have "<<k--<<" attempt left\nYour account will be blocked\n";
            }
                goto start;
            }    
    }
}
void sira::profilepatient()
{
    int n;
    cout<<"1-Edit Profile\n2-Check Profile\n3-Exit";
    cin>>n;
    if(n==1)
    {

    }
    else if(n==2)
    {

    }
    else if(n==3)
    {
        exit(1);
    }
    else
    {
        cout<<"Invalid choice!";
        exit(1);
    }
}
void sira::medicalSer()
{

}
void sira::nearbyhos()
{

}
void sira::nearbyphar()
{

}
void sira::emergency()
{

}
void sira::signUpPatient()
{
    if(count==maxsize)
    {
        cout<<"No space to enter more:\n";
    }
    else
    {
    string a,b,c,d,e,k;
    double f,g,h,i,j;
    cout<<"Enter your Name: ";cin>>a>>b;
    cout<<"Enter blood group: ";cin>>c;
    cout<<"Enter if consuming any medicine else write NO: ";cin>>d;
    cout<<"Enter your mail Id: ";cin>>k;
    cout<<"Enter your number: ";cin>>j;
    cout<<"Enter citizenship ID: ";cin>>f;
    cout<<"Enter Default(Phone) Number: ";cin>>g;
    cout<<"Your a unique Number: ";
    int abc=10000;
    cout<<rand()%abc<<endl;
    cout<<"Enter a user ID(must be greater than 4 digit): ";cin>>i;
    cout<<"Enter password: ";cin>>e;
    f_name[count]=a;
    l_name[count]=b;
    blood[count]=c;
    medicine[count]=d;
    mail[count]=k;
    phone[count]=j;
    citizenID[count]=f;
    parentspn[count]=g;
    unique[count]=h;
    iD[count]=i;
    password[count]=e;
    count++;
    }
}
void sira::loginDoctor()
{

}  
void sira::profileDoctor()
{

}
void sira::visitprof()
{

}
void sira::signUpDoctor()
{

}
void sira::loginAdmin()
{

}
void sira::hospitalprofile()
{

}
void sira::docpro()
{

}
void sira::emergencycase()
{

}
void sira::signUpAdmin()
{
    
}
int main()
{
    sira s1[1];
    int choose,i=0,j=0;
    int choice;
    start:
    cout<<"1-Patient\n2-Doctor\n3-Admin\n4-Exit\n";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            cout<<"1-Login\n2-SignUp\n";
            cin>>choose;
            if(choose==1)
            {
               s1[j].loginPatient();
                int profile;
                stop:
                cout<<"1-Profile\n2-Medical Search\n3-Nearby Hospital\n4-Nearby Pharmacy\n5-Emergency\n6-Exit\n7-Goto start\n8-LogOut\n";
                cin>>profile;
                switch(profile)
                {
                    case 1:
                    {
                        s1[j].profilepatient();
                        goto stop;
                    }
                    case 2:
                    {
                        s1[j].medicalSer();
                        goto stop;
                    }
                    case 3:
                    {
                        s1[j].nearbyhos();
                        goto stop;
                    }
                    case 4:
                    {
                        s1[j].nearbyphar();
                        goto stop;
                    }
                    case 5:
                    {
                        s1[j].emergency();
                        goto stop;
                    }
                    case 6:
                    {
                        break;
                    }
                    case 7:
                    {
                        goto start;
                    }
                    case 8:
                    {
                        goto start;
                    }
                    default:
                    {
                        cout<<"Invalid Choise! Please choose it again!\n";
                        goto start;
                    }
                }
                
            }
            else if(choose==2)
            {
                s1[j].signUpPatient();
                goto start;
            }
            else{
                cout<<"Invalid choice!Please Choose it again!\n";
                goto start;
            }
        }
        case 2:
        {
            int choose;
            cout<<"1-Login\n2-SignUp\n";
            cin>>choose;
            if(choose==1)
            {
                s1[j].loginDoctor();
                turn:
                int option;
                cout<<"1-Profile\n2-Patient Profile\n3-Medical Search\n4-Nearby Hospital\n5-Nearby Pharmacy\n6-Emergency\n7-Exit\n8-GoTo start\n9-LogOut\n";
                cin>>option;
                switch(option)
                {
                    case 1:
                    {
                        s1[j].profileDoctor();
                        goto turn;
                    }
                    case 2:
                    {
                        s1[j].visitprof();
                        goto turn;
                    }
                    case 3:
                    {
                        s1[j].medicalSer();
                        goto turn;
                    }
                    case 4:
                    {
                        s1[j].nearbyhos();
                        goto turn;
                    }
                    case 5:
                    {
                        s1[j].nearbyphar();
                        goto turn;
                    }
                    case 6:
                    {
                        s1[j].emergency();
                        goto turn;
                    }
                    case 7:
                    {
                        break;
                    }
                    case 8:
                    {
                        goto start;
                    }
                    case 9:
                    {
                        goto start;
                    }
                    default:
                    {
                        cout<<"Invalid Choice! Please choose it again!\n";
                        goto start;
                    }
                }
            }
            else if(choose==2)
            {
                s1[j].signUpDoctor();
                goto start;
            }
            else{
                cout<<"Invalid Input: Please Choose it again!\n";
                goto start;
            }   
        }
        case 3:
        {
            int choose;
            step:
            cout<<"1-Login\n2-SignUp\n";
            cin>>choose;
            if(choose==1)
            {
                s1[j].loginAdmin();
                work:
                int hos;
                cout<<"1-Hospital Profile\n2-Doctor Profile\n3-Emergency Case\n4-Exit\n5-GoTo start\n6-LogOut";
                cin>>hos;
                switch(hos)
                {
                    case 1:
                    {
                        s1[j].hospitalprofile();
                        goto work;
                    }
                    case 2:
                    {
                        s1[j].docpro();
                        goto work;
                    }
                    case 3:
                    {
                        s1[j].emergencycase();
                        goto work;
                    }
                    case 4:
                    {
                        break;
                    }
                    case 5:
                    {
                        goto start;
                    }
                    case 6:
                    {
                        goto start;
                    }
                    default:
                    {
                        cout<<"Invalid Choice! Please choose it again!\n";
                        goto start;
                    }
                }
            }
            else if(choose==2)
            {
                s1[j].signUpAdmin();
                goto start;
            }
            else{
                cout<<"Invalid  Choice: Please Choose it again!\n";
                goto start;
            }
        }
        case 4:
        {
            break;
        }
        default:
        {
            cout<<"Invalid Choice! Please Choose it again!\n";
            goto start;
        }
    }
}