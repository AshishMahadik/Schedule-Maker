#include<iostream>
#include<time.h>
#include <string.h>
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

using namespace std;


char name[50];
string sm="th";
//string name;
int sem, trade, sub1, sub2, sub3, sub4, sub5, tot_sub, tot_hour, r_study, mon, date, wake_up, repete;
int total_time, bed = 8, f_per = 1, mor_extra = 1, m_study = 0, college = 7, s_per = 1, extra_act = 2, b_study = 1, dinner = 1, a_study = 2, free_time = 0, extra_time = 0, edit = 1, choice = 1;
int new_t, bed_n, f_per_n, mor_extra_n, m_study_n, college_n, s_per_n, extra_act_n, b_study_n, dinner_n, a_study_n, req_time, dif;

string trd[4] = {"Computer Science and Engineering" , "Mechanical Engineering" , "Civil Engineering" , "Electronics and Telecommunication Engineering"};


int main()//main
{
    main: system("cls");
    cout << "";
	//cout << "\n -----------------------------------------------------------------------------------------\n\n";
    cout << "\n -----------------------------------------------------------------------------------------\n\n";
    //cout << " \t\t\t\t\tBooks of Program \t\t\n" << endl;
    cout << " \t\t\t\t\tBooks of Program \t\t\n" << endl;
    //cout << " -----------------------------------------------------------------------------------------\n";
    cout << " -----------------------------------------------------------------------------------------\n";
    cout << "\n  Enter Your Name :  \t\t\t\t  ";
    cin >> name;
    //gets(name);
    seme: cout << "\n  Enter Your Studing Semester :  \t\t  ";
    cin >> sem;



    if(sem > 8 || sem == 0)
    {
        cout<<"\n  Enter Correct Semester...!" << "\n";
        goto seme;
    }
    else if (sem > 2 && sem < 9)
    {
        tr:cout << "\n\n  1. Computer Science and Engineering""\n\n  2. Mechanical Engineering""\n\n  3. Civil Engineering""\n\n  4. Electronics and Telecommunication Engineering""\n\n  5. Exit";
        cout << "\n\n  Select Your Engineering Trade : \t\t  ";
        cin >> trade;
    }



    if (trade==5)
    {
        exit(0);
    }
    if(trade > 5)
    {
        
        cout << "\n  Chose Correct Trade...!";
        goto tr;
    }


    //days counting

    struct Date
    {
        int d, m, y;
    };
    const int monthDays[12] = { 31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31 };

    time_t t = time(0);   // get time now
    tm* now = localtime(&t);
    int d, m, y, cy, cm, cd, count;
    cy = now->tm_year + 1900;
    cm = now->tm_mon + 1;
    cd = now->tm_mday;


dt:cout << "\n  Enter TermEnd Date (dd mm yyyy) :   \t\t  ";
    cin >> d >> m >> y;

    if (d == 0 || d > 31 || m > 12 || d < cd && m <= cm && y < cy)
    {
        cout << "\n  Wrong Date OR Past Date...!!! Please Enter Correct And  Future Date...!\n";
       // cout << "\n  Wrong Date OR Past Date...!!! Please Enter Correct And  Future Date..." << endl;
        goto dt;

    }

    Date dt1 = { cd,cm,cy };
    Date dt2 = { d,m,y };

    long int n1 = dt1.y * 365 + dt1.d;
    for (int i = 0; i < dt1.m - 1; i++)
    {
        n1 += monthDays[i];
    }

    int years = dt1.y;
    if (dt1.m <= 2)
    {
        years--;
    }
    n1 += years / 4 - years / 100 + years / 400;

    long int n2 = dt2.y * 365 + dt2.d;
    for (int i = 0; i < dt2.m - 1; i++)
    {
        n2 += monthDays[i];
    }

    years = dt2.y;
    if (dt2.m <= 2)
    {
        years--;
    }
    n2 += years / 4 - years / 100 + years / 400;
    count = (n2 - n1);

    //days counting end

    //personal questions starts
    cout << "\n  What Is Your Ideal Time To Wake Up In Morning : ";
    while (cin >> wake_up) { if (wake_up <= 8) break; else //cout << "\n  Should Be Less Than 6...!   \t\t\t  "; 
    cout << "\n  Should Be Less Than 8...!   \t\t\t  ";}
    //personal questions ends

    cout << "\n -----------------------------------------------------------------------------------------";
    
    system("cls");

	//cout << "\n -----------------------------------------------------------------------------------------";	
    cout << "\n -----------------------------------------------------------------------------------------\n"; 
	//cout << "\n\t\t Enter Your Completed Studied Chapters Subject Wise" << endl;
    cout << "\n\t\t Enter Your Completed Studied Chapters Subject Wise"<< "\n";
    //cout << "\n -----------------------------------------------------------------------------------------\n";
    cout << "\n -----------------------------------------------------------------------------------------\n";

    if (sem == 1)
    {
        cout << "\n  Engineering Chemistry : \t\t\t";
        while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t"; }
        cout << "\n  Engineering Mathematics-I : \t\t\t";
        while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t";; }
        cout << "\n  Fandamental of Electronics and Computer : \t";
        while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t";; }
        cout << "\n  Applied Mechanics : \t\t\t\t";
        while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t";; }
        cout << "\n  Basic Mechanical Engineering : \t\t";
        while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t";; }
    }

    else if (sem == 2)
    {
        cout << "\n  Engineering Physics : \t\t";
        while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        cout << "\n  Engineering Mathematics-II : \t\t";
        while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        cout << "\n  Basic Electrical Engineering : \t";
        while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        cout << "\n  Basic Civil Engineering : \t\t";
        while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        cout << "\n  Engineering Graphics : \t\t";
        while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
    }
    //sem 1&2 end

    //trade1 if
    else if (trade == 1)
    {
        if (sem == 3)
        {
            cout << "\n  Applied Mathematics : \t\t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Discrete Mathematical & Structures :  ";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Data Structures : \t\t\t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Computer Networks-I : \t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Microprocessor : \t\t\t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        }
        else if (sem == 4)
        {
            cout << "\n  Automata Theory : \t\t\t\t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...!\t\t\t"; }
            cout << "\n  Computer Organization & Architecture : \t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...!\t\t\t"; }
            cout << "\n  Computer Networks-II : \t\t\t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...!\t\t\t"; }
            cout << "\n  Operating System-I : \t\t\t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...!\t\t\t"; }
            cout << "\n  Software Engineering : \t\t\t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...!\t\t\t"; }
        }
        else if (sem == 5)
        {
            cout << "\n  Computer Graphics : \t\t\t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  System Programming : \t\t\t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Object Oriented Modeling & Design :   ";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Computer Algorithm : \t\t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Network Technology : \t\t\t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        }
        else if (sem == 6)
        {
            cout << "\n  Compiler Construction : \t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t"; }
            cout << "\n  Operating System-II :   \t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t"; }
            cout << "\n  Database Engineering :  \t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t"; }
            cout << "\n  Storage Networks :      \t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t"; }
            cout << "\n  Information Security :  \t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t"; }
        }
        else if (sem == 7)
        {
            cout << "\n  Advanced Computer Architecture : \t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Distributed System : \t\t\t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Advanced Database Systems : \t\t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Soft Computing : \t\t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Mobile Applications : \t\t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        }
        else if (sem == 8)
        {
            cout << "\n  Data Analytics : \t\t\t\t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t";; }
            cout << "\n  Project Management : \t\t\t\t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t";; }
            cout << "\n  Real-Time Operating Systems : \t\t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t";; }
            cout << "\n  Internet of things : \t\t\t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t";; }
            cout << "\n  Software Testing and Quality Assurance :   ";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t";; }
        }
        else
            cout << "\n Wrong  Choice Entered....!";
    }
    //trade1 if ends

    //trade2 if
    else if (trade == 2)
    {
        if (sem == 3)
        {
            cout << "\n  Engineering Mathematics-III : \t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Electrical Technology : \t\t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Applied Thermodynamics : \t\t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Metallurgy : \t\t\t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Fluid Mechanics : \t\t\t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        }
        else if (sem == 4)
        {
            cout << "\n  Applied Numerical Methods : \t\t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Analysis of Mechanical Elements : \t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Fluid and Turbo Machinery : \t\t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Theory of Machines-I : \t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Machine Tools and Processes : \t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        }
        else if (sem == 5)
        {
            cout << "\n  Control Engineering : \t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t"; }
            cout << "\n  Theory of Machines-II : \t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t"; }
            cout << "\n  Heat & Mass Transfer : \t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t"; }
            cout << "\n  Machine Design-I : \t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t"; }
            cout << "\n  Manufacturing Engineering : \t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t"; }
        }
        else if (sem == 6)
        {
            cout << "\n  Industrial Management and Operation Research : ";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t "; }
            cout << "\n  Industrial Fluid Power : \t\t\t ";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t "; }
            cout << "\n  Metrology and Quality Control : \t\t ";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t "; }
            cout << "\n  Machine Design-II : \t\t\t\t ";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t "; }
            cout << "\n  Internal Combustion Engines : \t\t ";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t "; }
        }
        else if (sem == 7)
        {
            cout << "\n  Refrigeration & Air Conditioning : \t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Mechanical System Design : \t\t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Finite Element Analysis : \t\t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Automobile Engineering : \t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Total Quality Management : \t\t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }

        }
        else if (sem == 8)
        {
            cout << "\n  Mechatronics : \t\t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t"; }
            cout << "\n  Energy & Power Engineering : \t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t"; }
            cout << "\n  Noise & Vibrations : \t\t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t"; }
            cout << "\n  Industrial Engineering : \t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t"; }
            cout << "\n  Advanced I.C. Engines : \t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t"; }
        }
        else
            cout << "\n  Wrong  Choice Entered...!";
    }
    //trade2 if ends

    //trade3 if
    else if (trade == 3)
    {
        if (sem == 3)
        {
            cout << "\n  Engineering Mathematics-III : \t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Surveying-I : \t\t\t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Strength of Material-I : \t\t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Fluid Mechanics-I : \t\t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Building Construction & Materials : \t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        }
        else if (sem == 4)
        {
            cout << "\n  Structural Mechanics : \t\t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Surveying-II : \t\t\t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Concrete Technology : \t\t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Fluid Mechanics-II : \t\t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Building Design & Drawing : \t\t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        }
        else if (sem == 5)
        {
            cout << "\n  Water Resources Engineering-I : \t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Design of Steel Structures : \t\t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Environmental Engineering-I : \t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Geotechnical Engineering-I : \t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Transportation Engineering-I : \t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        }
        else if (sem == 6)
        {
            cout << "\n  Theory of Structures : \t\t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Geotechnical Engineering-II : \t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Engineering Management : \t\t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Engineering Geology : \t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Environment Engineering-II : \t\t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        }
        else if (sem == 7)
        {
            cout << "\n  Design of Concrete Structure-I : \t\t\t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t\t"; }
            cout << "\n  Earthquake Engineering : \t\t\t\t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t\t"; }
            cout << "\n  Quality Surveying & Valuation : \t\t\t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t\t"; }
            cout << "\n  Project Management & Construction Equipment : \t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t\t"; }
            cout << "\n  Advance Foundation Engineering : \t\t\t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t\t\t"; }
        }
        else if (sem == 8)
        {
            cout << "\n  Design of Concrete Structures-II : \t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Water Resources Engineering-II : \t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Transportation Engineering-II : \t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Advanced Concrete Design : \t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Design of Bridges : \t\t\t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        }
        else
            cout << "\n  Wrong  Choice Entered...!";

    }
    //trade3 if ends

    //trade4 if
    else if (trade == 4)
    {
        if (sem == 3)
        {
            cout << "\n  Engineering Mathematics-III : \t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Analog Circuits-I : \t\t\t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Digital Electronics : \t\t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Network Analysis : \t\t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Transducers & Measurement : \t\t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        }
        else if (sem == 4)
        {
            cout << "\n  Electronic Circuit Design-II : \t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Linear Integrated Circuits : \t\t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Control System Engineering : \t\t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Digital Communication : \t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Data Structures : \t\t\t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        }
        else if (sem == 5)
        {
            cout << "\n  Antenna and Wave Propagation : \t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Control Systems : \t\t\t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Signals & Systems : \t\t\t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Power Electronics : \t\t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Digital Communication : \t\t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        }
        else if (sem == 6)
        {
            cout << "\n  Digital Signal Processing : \t\t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  VLSI Design : \t\t\t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Microprocessor & Microcontrollers : \t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Optical Communication & Network : \t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Industrial Management : \t\t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        }
        else if (sem == 7)
        {
            cout << "\n  Satellite Communication : \t\t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Embedded System : \t\t\t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Computer Communication Networks : \t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  RF & Microwave Engineering : \t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Robotics : \t\t\t\t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        }
        else if (sem == 8)
        {
            cout << "\n  Video Engineering : \t\t\t";
            while (cin >> sub1) { if (sub1 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Wireless Mobile Communication : \t";
            while (cin >> sub2) { if (sub2 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Digital Image Processing : \t\t";
            while (cin >> sub3) { if (sub3 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Mechatronics : \t\t\t";
            while (cin >> sub4) { if (sub4 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
            cout << "\n  Artificial Neural Network : \t\t";
            while (cin >> sub5) { if (sub5 <= 6) break; else cout << "\n  Should be less than 6...! \t\t"; }
        }
        else
            cout << "\n  Wrong  Choice Entered...!";
    }
    //trade 4 ends


    //else
      //  cout << "\n  Wrong Choice Entered...!";








    //Schedule start
    while (choice != 0 && choice <= 9 || choice >= 9)
    {
    dq:req_time = r_study - (a_study + b_study + m_study);
        cout << "Test";




    dy:

        cout << "\n -----------------------------------------------------------------------------------------";

        system("cls");
        if (choice > 9)
        {
            //cout << "\n\n\t\t\t\t Wrong Choice Was Entered...!\n\n";
            cout << "\n\n\t\t\t\t Wrong Choice Was Entered...!\n\n";
        }



        int z[10], pop, w = 0;
        z[0] = m_study;
        z[1] = mor_extra;
        z[2] = f_per;


        dif = 10 - wake_up;
        pop = f_per + mor_extra + m_study;

        if (pop != dif)
        {
            if (dif > pop)
            {
                int loop = 1;
                dif = dif - pop;
                if (dif >= 3)
                {
                    loop = dif / 3;
                }


                while (dif != 0)
                {
                    z[w] = z[w] + loop;
                    w++;
                    if (w == 3)
                    {
                        w = 0;
                    }
                    dif -= loop;
                }
                m_study = z[0];
                mor_extra = z[1];
                f_per = z[2];
                cout << "\n ----------------------------------------------------------------------------------------";
                cout << "\n\n\t\t\t\t\t Important Alart! ";
                cout << "\n\n\t In Schedule We Have Made Some Changes Because of Your Morning Wake Up Time\n  Which Gives You Less Time For Your Activites Before College (Where College Time Is Fix)\n\n";
                //cout << "\n\n\t\t\t\t\t Important Alart! \n\n\t In Schedule We Have Made Some Changes Because of Your Morning Wake Up Time\n  Which Gives You Less Time For Your Activites Before College (Where College Time Is Fix)\n\n";
            }

            else if (dif < pop)
            {
                dif = pop - dif;
                while (dif != 0)
                {
                    if (z[w] == 0)
                    {
                        w++;
                    }
                    else
                    {
                        z[w] = z[w] - 1;
                        w++;
                        dif--;
                    }
                }
                m_study = z[0];
                mor_extra = z[1];
                f_per = z[2];
                cout << "\n ----------------------------------------------------------------------------------------";
                cout << "\n\n\t\t\t\t\t Important Alart! ";
                cout << "\n\n\t In Schedule We Have Made Some Changes Because of Your Morning Wake Up Time\n  Which Gives You Less Time For Your Activites Before College (Where College Time Is Fix)\n\n";
                //cout << "\n\n\t\t\t\t\t Important Alart! \n\n\t In Schedule We Have Made Some Changes Because of Your Morning Wake Up Time\n  Which Gives You Less Time For Your Activites Before College (Where College Time Is Fix)\n\n";
            }
        }


        //conditions for 24hour divition
        total_time = bed + f_per + mor_extra + m_study + college + s_per + extra_act + b_study + dinner + a_study;
        
        if (total_time < 24)
        {
            free_time = 24 - total_time;
        }
        if (free_time > 0)
        {
            if (dif < pop)
            {
                m_study = m_study + free_time;
                free_time = 0;
            }
            else
            {
                a_study = a_study + free_time;
                free_time = 0;
            }
        }



        else if (total_time > 24)
        {
            extra_time = total_time - 24;
            int ext[3], ee = 0, ex = 1;
            ext[0] = extra_act;
            ext[1] = a_study;
            ext[2] = b_study;
            if (extra_time > 3)
            {
                ex = extra_time / 3;
            }
            while (extra_time != 0)
            {
                if (ext[ee] < ex)
                {
                    ext[ee] = ext[ee] - 1;
                    ee++;
                    if (ee == 3)
                    {
                        ee = 0;
                    }
                    extra_time--;
                }
                else
                {
                    ext[ee] = ext[ee] - ex;
                    ee++;
                    if (ee == 3)
                    {
                        ee = 0;
                    }
                    extra_time -= ex;
                }
            }
            extra_act = ext[0];
            a_study = ext[1];
            b_study = ext[2];
        }

        dif = 10 - wake_up;
        pop = f_per + mor_extra + m_study;


    cout << "\n *--------------------------------------------------------------------------------------*\n";
	cout << " |\t\t\t\t\t\t\t\t\t\t\t|\n";
    //cout << " |\t\t\t\t\t Schedule \t\t\t\t\t|" << endl;
    cout << " |\t\t\t\t\t Schedule "<<"\t\t\t\t\t|" << endl;
	cout << " |\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout << " *--------------------------------------------------------------------------------------*";
    //cout << "\n |--------(Note :- This Is An Standerd 24 Hour Equally Divided Student Schedule)--------|";
    cout << "\n |--------(Note :- This Is An Standerd 24 Hour Equally Divided Student Schedule)--------|";
	cout << "\n *----------------------------------------------*---------------------------------------*";
	//cout << "\n |\t\t    Acitivity  \t\t\t|\t\t  Hours\t\t\t|";
    cout << "\n |\t\t    Acitivity  " <<"\t\t\t|\t\t  Hours\t\t\t|";
	cout << "\n *----------------------------------------------*---------------------------------------*";	        
	cout << "\n | 1. Bed Time : \t\t\t\t|\t\t    " << bed <<"\t\t\t|";
	cout << "\n |\t\t\t\t\t\t|\t\t\t\t\t|";	
	cout << "\n | 2. Morning Personal Time : \t\t\t|\t\t    " << f_per <<"\t\t\t|";
	cout << "\n |\t\t\t\t\t\t|\t\t\t\t\t|";
	cout << "\n | 3. Morning Extra Activity Time : \t\t|\t\t    " << mor_extra <<"\t\t\t|";
	cout << "\n |\t\t\t\t\t\t|\t\t\t\t\t|";	
	cout << "\n | 4. Morning Study Time : \t\t\t|\t\t    " << m_study <<"\t\t\t|";
	cout << "\n |\t\t\t\t\t\t|\t\t\t\t\t|";
	cout << "\n | 5. College Time : \t\t\t\t|\t\t    " << college <<"\t\t\t|";
	cout << "\n |\t\t\t\t\t\t|\t\t\t\t\t|";
	cout << "\n | 6. After College Personal Time : \t\t|\t\t    " << s_per <<"\t\t\t|";
	cout << "\n |\t\t\t\t\t\t|\t\t\t\t\t|";
	cout << "\n | 7. After College Extra Activity Time : \t|\t\t    " << extra_act <<"\t\t\t|";
	cout << "\n |\t\t\t\t\t\t|\t\t\t\t\t|";
	cout << "\n | 8. Study Before Dinner Time : \t\t|\t\t    " << b_study <<"\t\t\t|";
	cout << "\n |\t\t\t\t\t\t|\t\t\t\t\t|";
	cout << "\n | 9. Dinner Time : \t\t\t\t|\t\t    " << dinner <<"\t\t\t|";
	cout << "\n |\t\t\t\t\t\t|\t\t\t\t\t|";
	cout << "\n | 10. Study After Dinner Time : \t\t|\t\t    " << a_study <<"\t\t\t|";
	cout << "\n |\t\t\t\t\t\t|\t\t\t\t\t|";
	cout << "\n | Free Time : \t\t\t\t\t|\t\t    " << free_time <<"\t\t\t|";
	cout << "\n *----------------------------------------------*---------------------------------------*";

        if (req_time == 0)
        {
            goto df;
        }

        if (repete == 1)
        {
            cout << "\n\n  Required Time For Study Is Less So Please Reduce Any Time From You Schedule : ";
            cout << "\n  Your Extra Required Time For Study Is : " << req_time;
            cout << "\n\n  Please Check And Change Above Peremeters If Need By Your Prefrence Entering Its Number : ";
            cin>> choice;
            //while (cin >> choice) { if (choice == 1 || choice == 2 || choice == 3 || choice == 6 || choice == 7) break; else cout << "\n  Should Be Other Than College And Any Study Time! \t\t\t\t\t"; }
        }
        else
        {
            //cout << "\n\n\t Above Free Time Cannot Be Edited, It Can Be Used If It Ts Avalible,\n\t\t\t\t It Will Change By Schedule";
            cout << "\n\n\t Above Free Time Cannot Be Edited, It Can Be Used If It Ts Avalible,\n\t\t\t\t It Will Change By Schedule";
            cout << "\n ----------------------------------------------------------------------------------------";
            cout << "\n\n  Please Check Default Schedule.\n\n  If You Want To Edit, Enter Activity No. (0 For Finalize): ";
            cin >> choice;
            cout << "\n ----------------------------------------------------------------------------------------";
        }

        switch (choice)
        {
        case 1:
            if (repete == 1)
            {
                cout << "\n  Redused Bed Time : ";
                while (cin >> bed_n) { if (bed_n < bed && (bed - bed_n) <= req_time) break; else cout << "It Should Be Less Than Current Time...!"; }
                req_time = req_time - (bed - bed_n);
                bed = bed_n;
                goto dy;
            }
            else
            {
                cout << "\n  New Bed Time : ";
                cin >> bed_n;
                if (bed_n > bed)
                {
                    new_t = bed_n - bed;
                    if (new_t <= free_time)
                    {
                        free_time = free_time - new_t;
                        bed = bed_n;
                        goto dq;
                    }
                    else
                    {
                        new_t = new_t - free_time;
                        free_time = 0;
                        bed = bed_n;
                    d1:if (new_t != 0)
                    {
                        cout << "\n  For New Time Free Time Is Not Avalible To Please Reduce Any Other Time From The Schedule. \n  Enter Your Choice : ";
                        cin >> choice;
                        goto ds;
                    }
                    else
                        goto dq;
                    }
                }
                else
                {
                    bed = bed_n;
                    goto dq;
                }
            }
            break;
        case 2:
            if (repete == 1)
            {
                cout << "\n  Redused Morning Personal Time : ";
                while (cin >> f_per_n) { if (f_per_n < f_per && (f_per - f_per_n) <= req_time) break; else cout << "\n  It Should Be Less Than Current Time..!"; }
                req_time = req_time - (f_per - f_per_n);
                f_per = f_per_n;
                goto dy;
            }
            else
            {
                cout << "\n  New Morning Personal Time : ";
                cin >> f_per_n;
                if (f_per_n > f_per)
                {
                    new_t = f_per_n - f_per;
                    if (new_t <= free_time)
                    {
                        free_time = free_time - new_t;
                        f_per = f_per_n;
                        goto dq;
                    }
                    else
                    {
                        new_t = new_t - free_time;
                        free_time = 0;
                        f_per = f_per_n;
                    d2:
                        if (new_t != 0)
                        {
                            if (dif == pop)
                            {
                                cout << "\n  Your Morning Before College Time Is Not Free So Reduce Any of You Activity Time Which Are Before College Time : \n  Enter Your Choice : ";
                                while (cin >> choice) { if (choice <= 4 && choice != 1) break; else cout << "Only Before College Activity...!"; }
                            }
                            else
                            {
                                cout << "\n  For New Time Free Time Is Not Avalible To Please Reduce Any Other Time From The Schedule : \n  Enter Your Choice : ";
                                cin >> choice;
                            }
                            goto ds;
                        }
                        else
                            goto dq;
                    }
                }
                else
                {
                    f_per = f_per_n;
                    goto dq;
                }
            }
            break;
        case 3:
            if (repete == 1)
            {
                cout << "\n  Redused Morning Extra Activity Time : ";
                while (cin >> mor_extra_n) { if (mor_extra_n < mor_extra && (mor_extra - mor_extra_n) <= req_time) break; else cout << "\n It Should Be Less Than Current Time...!"; }
                req_time = req_time - (mor_extra - mor_extra_n);
                mor_extra = mor_extra_n;
                goto dy;
            }
            else
            {
                cout << "\n  New Morning Extra Activity Time : ";
                cin >> mor_extra_n;
                if (mor_extra_n > mor_extra)
                {
                    new_t = mor_extra_n - mor_extra;
                    if (new_t <= free_time)
                    {
                        free_time = free_time - new_t;
                        mor_extra = mor_extra_n;
                        goto dq;
                    }
                    else
                    {
                        new_t = new_t - free_time;
                        free_time = 0;
                        mor_extra = mor_extra_n;
                    d3:
                        if (new_t != 0)
                        {
                            if (dif == pop)
                            {
                                cout << "\n  Your Morning Before College Time Is Not Free So Reduce Any of You Activity Time Which Are Before College Time : \n  Enter Your Choice : ";
                                while (cin >> choice) { if (choice <= 4 && choice != 1) break; else cout << "Only before college activity!\n\t"; }
                            }
                            else
                            {
                                cout << "\n  For New Time Free Time Is Not Avalible To Please Reduce Any Other Time From The Schedule : \n  Enter Your Choice : ";
                                cin >> choice;
                            }
                            goto ds;
                        }
                        else
                            goto dq;
                    }
                }
                else
                {
                    mor_extra = mor_extra_n;
                    goto dq;
                }
            }
            break;
        case 4:
            cout << "\n  New Morning Study Time : ";
            cin >> m_study_n;
            if (m_study_n > m_study)
            {
                new_t = m_study_n - m_study;
                if (new_t <= free_time)
                {
                    free_time = free_time - new_t;
                    m_study = m_study_n;
                    goto dq;
                }
                else
                {
                    new_t = new_t - free_time;
                    free_time = 0;
                    m_study = m_study_n;
                d4:
                    if (new_t != 0)
                    {
                        if (dif == pop)
                        {
                            cout << "\n  Your Morning Before College Time Is Not Free So Reduce Any of You Activity Time Which Are Before College Time : \n  Enter Your Choice : ";
                            while (cin >> choice) { if (choice <= 4 && choice != 1) break; else cout << "Only before college activity!\n\t"; }
                        }
                        else
                        {
                            cout << "\n  For New Time Free Time Is Not Avalible To Please Reduce Any Other Time From The Schedule : \n  Enter Your Choice : ";
                            cin >> choice;
                        }
                        goto ds;
                    }
                    else
                        goto dq;
                }
            }
            else
            {
                m_study = m_study_n;
                goto dq;
            }
            break;
        case 5:
            cout << "\n  New College Time : ";
            cin >> college_n;
            if (college_n > college)
            {
                new_t = college_n - college;
                if (new_t <= free_time)
                {
                    free_time = free_time - new_t;
                    college = college_n;
                    goto dq;
                }
                else
                {
                    new_t = new_t - free_time;
                    free_time = 0;
                    college = college_n;
                d5:if (new_t != 0)
                {
                    cout << "\n  For New Time Free Time Is Not Avalible To Please Reduce Any Other Time From The Schedule : \n  Enter Your Choice : ";
                    cin >> choice;
                    goto ds;
                }
                else
                    goto dq;
                }
            }
            else
            {
                college = college_n;
                goto dq;
            }
            break;
        case 6:
            if (repete == 1)
            {
                cout << "\n  Redused After College Personal Time : ";
                while (cin >> s_per_n) { if (s_per_n < s_per && (s_per - s_per_n) <= req_time) break; else cout << "\n It Should Be Less Than Current Time...!"; }
                req_time = req_time - (s_per - s_per_n);
                s_per = s_per_n;
                goto dy;
            }
            else
            {
                cout << "\n  New After College Personal Time : ";
                cin >> s_per_n;
                if (s_per_n > s_per)
                {
                    new_t = s_per_n - s_per;
                    if (new_t <= free_time)
                    {
                        free_time = free_time - new_t;
                        s_per = s_per_n;
                        goto dq;
                    }
                    else
                    {
                        new_t = new_t - free_time;
                        free_time = 0;
                        s_per = s_per_n;
                    d6:if (new_t != 0)
                    {
                        cout << "\n  For New Time Free Time Is Not Avalible To Please Reduce Any Other Time From The Schedule : \n  Enter Your Choice : ";
                        cin >> choice;
                        goto ds;
                    }
                    else
                        goto dq;
                    }
                }
                else
                {
                    s_per = s_per_n;
                    goto dq;
                }
            }
            break;
        case 7:
            if (repete == 1)
            {
                cout << "\n  Redused After College Extra Activity Time : ";
                while (cin >> extra_act_n) { if (extra_act_n < extra_act && (extra_act - extra_act_n) <= req_time) break; else cout << "\n  It Should Be Less Than Current Time...!"; }
                req_time = req_time - (extra_act - extra_act);
                extra_act = extra_act_n;
                goto dy;
            }
            cout << "\n  New After College Extra Activity Time : ";
            cin >> extra_act_n;
            if (extra_act_n > extra_act)
            {
                new_t = extra_act_n - extra_act;
                if (new_t <= free_time)
                {
                    free_time = free_time - new_t;
                    extra_act = extra_act_n;
                    goto dq;
                }
                else
                {
                    new_t = new_t - free_time;
                    free_time = 0;
                    extra_act = extra_act_n;
                d7:if (new_t != 0)
                {
                    cout << "\n  For New Time Free Time Is Not Avalible To Please Reduce Any Other Time From The Schedule : \n   Enter Your Choice : ";
                    cin >> choice;
                    goto ds;
                }
                else
                    goto dq;
                }
            }
            else
            {
                extra_act = extra_act_n;
                goto dq;
            }
            break;
        case 8:
            cout << "\n   New Study Before Dinner Time : ";
            cin >> b_study_n;
            if (b_study_n > b_study)
            {
                new_t = b_study_n - b_study;
                if (new_t <= free_time)
                {
                    free_time = free_time - new_t;
                    b_study = b_study_n;
                    goto dq;
                }
                else
                {
                    new_t = new_t - free_time;
                    free_time = 0;
                    b_study = b_study_n;
                d8:if (new_t != 0)
                {
                    cout << "\n   For New Time Free Time Is Not Avalible To Please Reduce Any Other Time From The Schedule : \n   Enter Your Choice : ";
                    cin >> choice;
                    goto ds;
                }
                else
                    goto dq;
                }
            }
            else
            {
                b_study = b_study_n;
                goto dq;
            }
            break;
        case 9:
            cout << "\n   New Dinner Time : ";
            cin >> dinner_n;
            if (dinner_n > dinner)
            {
                new_t = dinner_n - dinner;
                if (new_t <= free_time)
                {
                    free_time = free_time - new_t;
                    dinner = dinner_n;
                    goto dq;
                }
                else
                {
                    new_t = new_t - free_time;
                    free_time = 0;
                    dinner = dinner_n;
                d9:if (new_t != 0)
                {
		    cout << "\n  For New Time Free Time Is Not Avalible To Please Reduce Any Other Time From The Schedule : \n  Enter Your Choice : ";
                    cin >> choice;
                    goto ds;
                }
                else
                    goto dq;
                }
            }
            else
            {
                dinner = dinner_n;
                goto dq;
            }
            break;
        case 10:
            cout << "\n  New Study After Dinner Time : ";
            cin >> a_study_n;
            if (a_study_n > a_study)
            {
                new_t = a_study_n - a_study;
                if (new_t <= free_time)
                {
                    free_time = free_time - new_t;
                    a_study = a_study_n;
                    goto dq;
                }
                else
                {
                    new_t = new_t - free_time;
                    free_time = 0;
                    a_study = a_study_n;
                d10:if (new_t != 0)
                {
                    cout << "\n  For New Time Free Time Is Not Avalible To Please Reduce Any Other Time From The Schedule : \n  Enter Your Choice : ";
                    cin >> choice;
                    goto ds;
                }
                else
                    goto dq;
                }
            }
            else
            {
                a_study = a_study_n;
                goto dq;
            }
            break;
        default:
            break;
        }




    ds:
        if (choice == 1)
        {
            if (new_t == bed)
            {
                new_t = new_t - bed;
                bed = 0;
                goto dq;
            }
            else if (new_t > bed)
            {
                new_t = new_t - bed;
                bed = 0;
                goto d1;
            }
            else
            {
                bed = bed - new_t;
                goto dq;
            }

        }
        else if (choice == 2)
        {
            if (new_t == f_per)
            {
                new_t = new_t - f_per;
                f_per = 0;
                goto dq;
            }
            else if (new_t > f_per)
            {
                new_t = new_t - f_per;
                f_per = 0;
                goto d2;
            }
            else
            {
                f_per = f_per - new_t;
                goto dq;
            }
        }
        else if (choice == 3)
        {
            if (new_t == mor_extra)
            {
                new_t = new_t - mor_extra;
                mor_extra = 0;
                goto dq;
            }
            else if (new_t >= mor_extra)
            {
                new_t = new_t - mor_extra;
                mor_extra = 0;
                goto d3;
            }
            else
            {
                mor_extra = mor_extra - new_t;
                goto dq;
            }
        }
        else if (choice == 4)
        {
            if (new_t == m_study)
            {
                new_t = new_t - m_study;
                m_study = 0;
                goto dq;
            }
            else if (new_t > m_study)
            {
                new_t = new_t - m_study;
                m_study = 0;
                goto d4;
            }
            else
            {
                m_study = m_study - new_t;
                goto dq;
            }
        }
        else if (choice == 5)
        {
            if (new_t == college)
            {
                new_t = new_t - college;
                college = 0;
                goto dq;
            }
            else if (new_t > college)
            {
                new_t = new_t - college;
                college = 0;
                goto d5;
            }
            else
            {
                college = college - new_t;
                goto dq;
            }
        }
        else if (choice == 6)
        {
            if (new_t == s_per)
            {
                new_t = new_t - s_per;
                s_per = 0;
                goto dq;
            }
            else if (new_t > s_per)
            {
                new_t = new_t - s_per;
                s_per = 0;
                goto d6;
            }
            else
            {
                s_per = s_per - new_t;
                goto dq;
            }

        }
        else if (choice == 7)
        {
            if (new_t == extra_act)
            {
                new_t = new_t - extra_act;
                extra_act = 0;
                goto dq;
            }
            else if (new_t > extra_act)
            {
                new_t = new_t - extra_act;
                extra_act = 0;
                goto d7;
            }
            else
            {
                extra_act = extra_act - new_t;
                goto dq;
            }
        }
        else if (choice == 8)
        {
            if (new_t == b_study)
            {
                new_t = new_t - b_study;
                b_study = 0;
                goto dq;
            }
            else if (new_t > b_study)
            {
                new_t = new_t - b_study;
                b_study = 0;
                goto d8;
            }
            else
            {
                b_study = b_study - new_t;
                goto dq;
            }
        }
        else if (choice == 9)
        {
            if (new_t == dinner)
            {
                new_t = new_t - dinner;
                dinner = 0;
                goto dq;
            }
            else if (new_t > dinner)
            {
                new_t = new_t - dinner;
                dinner = 0;
                goto d9;
            }
            else
            {
                dinner = dinner - new_t;
                goto dq;
            }
        }
        else if (choice == 10)
        {
            if (new_t == a_study)
            {
                new_t = new_t - a_study;
                a_study = 0;
                goto dq;
            }
            else if (new_t > a_study)
            {
                new_t = new_t - a_study;
                a_study = 0;
                goto d10;
            }
            else
            {
                a_study = a_study - new_t;
                goto dq;
            }
        }
        if (repete == 1)
        {
            choice = 0;
        }
    }


    //input ends
    system("cls");
    //processing start
    cout << "\n -----------------------------------------------------------------------------------------";
    cout << " \t\t\t\t\tInformation \t\t\n";
    cout << " -----------------------------------------------------------------------------------------";
    cout << "\n\n\t Name : \t\t\t"<<name;
    switch(trade)
    {
        case 1:cout << "\n\n\t Trade : \t\t\t"<<trd[0];break;case 2:cout << "\n\n\t Trade : \t\t\t"<<trd[1];break;
        case 3:cout << "\n\n\t Trade : \t\t\t"<<trd[2];break;case 4:cout << "\n\n\t Trade : \t\t\t"<<trd[2];break;
    }

    if(sem==1){sm="st";}if(sem==2){sm="nd";}if(sem==3){sm="rd";}if(sem>3){sm="th";}
    cout << "\n\n\t Semester : \t\t\t"<< sem <<sm;
    cout << "\n\n\t TermEnd : \t\t\t"<< d <<"-"<< m << "-" << y;




    //cout << "\n -----------------------------------------------------------------------------------------";
    
    cout << "\n\n\t No Of Remining Days Is : \t" << count;

    //total study time calcutation start
    tot_sub = ((6 - sub1) + (6 - sub2) + (6 - sub3) + (6 - sub4) + (6 - sub5));
    cout << "\n\n\t Total Remining Chapters : \t" << tot_sub;
    tot_hour = tot_sub * 6;
    r_study = tot_hour / count;
    cout << "\n\n\t Total Required hours : \t" << tot_hour;
    if (count == 0)
    {
        cout << "\n\n\t Study time per Day : \t\t" << tot_hour<<" Hrs.\n";
    }
    else
    {
        r_study = tot_hour / count;
        cout << "\n\n\t Study Time Per Day : \t\t" << r_study<<" Hrs.\n";
    }

    //total study time calcutation end

    //main processing start

    if (a_study + b_study + m_study >= r_study)
    {
        //its ok and keep given schedule time as it is.
        goto df;
    }
    else
    {
        repete = 1;
        goto dq;
    }





  	df:cout << "\n *--------------------------------------------------------------------------------------*\n";
	cout <<" |\t\t\t\t\t\t\t\t\t\t\t|";
    //cout <<"\n |\t\t\t\t\t Your Schedule \t\t\t\t\t|";
    cout <<"\n |\t\t\t\t\t Your Schedule " <<"\t\t\t\t\t|";
	cout <<"\n |\t\t\t\t\t\t\t\t\t\t\t|\n";
    cout << " *------------------------------*-----------------------*-------------------------------*";
	//cout<<"\n |\t\t From"<<"\t\t|\t To"<<"\t\t|\t Desciption\t\t|"<<endl;
    cout<<"\n |\t\t From\t\t|\t To\t\t|\t Desciption\t\t|"<<endl;
	cout << " *------------------------------*-----------------------*-------------------------------*"<<endl;
    int ana[12], cnc[12], dnd[12], start;


    string str = "AM", bnb[12];


    ana[0] = wake_up;
    ana[1] = bed;
    ana[2] = f_per;
    ana[3] = m_study;
    ana[4] = mor_extra;
    ana[5] = college;
    ana[6] = s_per;
    ana[7] = extra_act;
    ana[8] = b_study;
    ana[9] = dinner;
    ana[10] = a_study;


    bnb[0] = "Sleeping Time";
    bnb[1] = "Personal Time";
    bnb[2] = "Extra Activity Time";
    bnb[3] = "Study Time";
    bnb[4] = "College Time";
    bnb[5] = "Personal Time";
    bnb[6] = "Extar Activity Time";
    bnb[7] = "Study Time";
    bnb[8] = "Dinner Time";
    bnb[9] = "Study Time";




    //first bed start

    //end

    start = ana[0] - ana[1];
    if (start == 0)
    {
        start = 12;
    }
    else if (ana[0] < ana[1])
    {
        start = 12 + start;
    }


    //first bed start
    for (int l = 0, t = 1; l < 10 && t <= 10; l++ , t++)
    {


        cnc[l] = start;
        for (int p = 0; p < ana[t]; p++)
        {
            start++;
            if (start == 13)
            {
                start = 1;
            }
        }
        dnd[l] = start;
    }

    int qw = 1, fs = dnd[0];
    for (int q = 0; q < 10; q += 1)
    {
        if (cnc[q] != dnd[q])
        {
            if(cnc[q]>9)
                cout <<" |\t\t"<< cnc[q] << "  " << str << "\t";
            else
                cout <<" |\t\t"<< cnc[q] << "   " << str << "\t";
            if (qw == 1)
            {
                if (dnd[q] < fs)
                {
                    str = "PM";
                    qw--;
                }
            }
            if(dnd[q]>9)
                cout <<" \t|\t"<< dnd[q] << " " << str;
	       else
            	cout <<" \t|\t"<< dnd[q] << "  " << str;
	}

    if(q==2)
    	cout << " \t\t|\t" << bnb[q] << "\t|"<<endl;
    else if(q==6)
    	cout << " \t\t|\t" << bnb[q] << "\t|"<<endl;
    else
    	cout << " \t\t|\t" << bnb[q] << "\t\t|"<<endl;
    if(q==9){break;}
    	cout<<" |\t\t  \t\t|\t\t\t|\t\t\t\t|"<<endl;

    }

    cout << " *------------------------------*-----------------------*-------------------------------*\n";
	
	
    //cout << "\n -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*->>> Thank You <<<-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-";
    
    cout << "\n\n -----------------------------------------------------------------------------------------";
    int exit;
    cout << "\n\n  Enter 1 For Recalculate OR 0 For Exit : ";
    cin>>exit;
    cout << "\n -----------------------------------------------------------------------------------------";
    if (exit == 0) 
    {
        cout << "\n\n -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*->>> Thank You <<<-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n";        
    }
    else if(exit==1)
    {
        
       goto main;
    }   
    //second personal t start



    //converting it into 12 hour format  

}//main end

// void recal()
// {
//     goto recal1;
// }