//
//  main.cpp
//  test
//
//  Created by Yuhai Zhang on 2018/3/19.
//  Copyright © 2018年 Yuhai Zhang. All rights reserved.
//

#include <iostream>
using namespace std;

class TROW
{
    char date[50];
    char timeperiod[50];
    float TotalRequests;
    float STL1;
    float WBF1;
    float HCN1;
    float ARC1;
    float USELESS1;
    float HCS1;
    float ScottHall1;
    float SAC1;
    float Visitor1;
    float ScienceBuildings1;
    float LibrarySM1;
    float BuschSuites1;
    float BSC1;
    float Buell1;
    float WerblinBarth1;
    float LSC1;
    float Quads1;
    float HealthCenter1;
    float NONAME1;
    float LP1;
    float TSG1;
    float PSS1;
    float SPACE2;
    float RH1;
    float PSBS1;
    float ROL1;
    float LH1;
    float FSB1;
    float BR1;
    float HA1;
    float K1;
    float G1;
    float CH1;
    float PSBN1;
    float LSG1;
    float PSN1;
    float TSA1;
    float ZAM1;
    float REPLACE1;
    float CSC1;
    float DH1;
    float SPACE1;
    float BS1;
    float TSS1;
    
public:
    TROW()
    {
        TotalRequests=0;
    }
    void input();
    void StadiumWestLot();
    void WerblinFrelin();
    void HCN();
    void ARC();
    void HCS();
    void display();
    void ScottHall();
    void SAC();
    void Visitor();
    void ScienceBuildings();
    void LibrarySM();
    void BuschSuites();
    void BSC();
    void Buell();
    void WerblinBarth();
    void LSC();
    void Quads();
    void HealthCenter();
    void LP();
    void TSG();
    void PSS();
    void RH();
    void PSBS();
    void ROL();
    void LH();
    void FSB();
    void BR();
    void HA();
    void K();
    void G();
    void CH();
    void PSBN();
    void LSG();
    void PSN();
    void TSA();
    void ZAM();
    void CSC();
    void DH();
    void BS();
    void TSS();
    
};

void TROW::input()
{
    cout<<"\n Create File For a Bus Route\n";
    cout<<"\n Enter Date(MM.DD): ";
    cin>>date;
    cout<<"\n Enter Time Period(24hour system xx-xx): ";
    cin>>timeperiod;
    cout<<"\n Enter Original Requests: ";
    cin>>TotalRequests;
}

void TROW::StadiumWestLot()
{
    TotalRequests-=STL1;
    float STL;
    cout<<"\n Stadium West Lot ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>STL;
    STL1=STL;
    TotalRequests+=STL;
}

void TROW::TSS()
{
    TotalRequests-=TSS1;
    float TSS2;
    cout<<"\n Train Station Somerset ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>TSS2;
    TSS1=TSS2;
    TotalRequests+=TSS2;
}

void TROW::DH()
{
    TotalRequests-=DH1;
    float DH2;
    cout<<"\n Davidson Hall ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>DH2;
    DH1=DH2;
    TotalRequests+=DH2;
}

void TROW::BS()
{
    TotalRequests-=BS1;
    float BS2;
    cout<<"\n Bravo Supermarket ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>BS2;
    BS1=BS2;
    TotalRequests+=BS2;
}

void TROW::LSC()
{
    TotalRequests-=LSC1;
    float LSC2;
    cout<<"\n Livingston Student Center ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>LSC2;
    LSC1=LSC2;
    TotalRequests+=LSC2;
}

void TROW::CSC()
{
    TotalRequests-=CSC1;
    float CSC2;
    cout<<"\n CollegeAve Student Center ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>CSC2;
    LSC1=CSC2;
    TotalRequests+=CSC2;
}

void TROW::TSG()
{
    TotalRequests-=TSG1;
    float TSG2;
    cout<<"\n Train Station George ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>TSG2;
    TSG1=TSG2;
    TotalRequests+=TSG2;
}

void TROW::PSS()
{
    TotalRequests-=PSS1;
    float PSS2;
    cout<<"\n Paterson Street South ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>PSS2;
    PSS1=PSS2;
    TotalRequests+=PSS2;
}

void TROW::RH()
{
    TotalRequests-=RH1;
    float RH2;
    cout<<"\n Rockoff Hall ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>RH2;
    RH1=RH2;
    TotalRequests+=RH2;
}

void TROW::PSBS()
{
    TotalRequests-=PSBS1;
    float PSBS2;
    cout<<"\n Public Safety Building South ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>PSBS2;
    PSBS1=PSBS2;
    TotalRequests+=PSBS2;
}

void TROW::ROL()
{
    TotalRequests-=ROL1;
    float ROL2;
    cout<<"\n Red Oak Lane";
    cout<<"\n Enter Number of New Requests: ";
    cin>>ROL2;
    ROL1=ROL2;
    TotalRequests+=ROL2;
}

void TROW::LH()
{
    TotalRequests-=LH1;
    float LH2;
    cout<<"\n Lipman Hall ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>LH2;
    LH1=LH2;
    TotalRequests+=LH2;
}

void TROW::FSB()
{
    TotalRequests-=FSB1;
    float FSB2;
    cout<<"\n Food Science Building ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>FSB2;
    FSB1=FSB2;
    TotalRequests+=FSB2;
}

void TROW::BR()
{
    TotalRequests-=BR1;
    float BR2;
    cout<<"\n Biel Road ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>BR2;
    BR1=BR2;
    TotalRequests+=BR2;
}

void TROW::HA()
{
    TotalRequests-=HA1;
    float HA2;
    cout<<"\n Henderson Apts ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>HA2;
    HA1=HA2;
    TotalRequests+=HA2;
}

void TROW::K()
{
    TotalRequests-=K1;
    float K2;
    cout<<"\n Katzenbach";
    cout<<"\n Enter Number of New Requests: ";
    cin>>K2;
    K1=K2;
    TotalRequests+=K2;
}

void TROW::G()
{
    TotalRequests-=G1;
    float G2;
    cout<<"\n Gibbons ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>G2;
    G1=G2;
    TotalRequests+=G2;
}

void TROW::CH()
{
    TotalRequests-=CH1;
    float CH2;
    cout<<"\n College Hall ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>CH2;
    CH1=CH2;
    TotalRequests+=CH2;
}

void TROW::PSBN()
{
    TotalRequests-=PSBN1;
    float PSBN2;
    cout<<"\n Public Safety Building North ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>PSBN2;
    PSBN1=PSBN2;
    TotalRequests+=PSBN2;
}

void TROW::LSG()
{
    TotalRequests-=LSG1;
    float LSG2;
    cout<<"\n Liberty Street George ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>LSG2;
    LSG1=LSG2;
    TotalRequests+=LSG2;
}

void TROW::PSN()
{
    TotalRequests-=PSN1;
    float PSN2;
    cout<<"\n Paterson Street North ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>PSN2;
    PSN1=PSN2;
    TotalRequests+=PSN2;
}

void TROW::TSA()
{
    TotalRequests-=TSA1;
    float TSA2;
    cout<<"\n Train Station Albany ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>TSA2;
    TSA1=TSA2;
    TotalRequests+=TSA2;
}

void TROW::ZAM()
{
    TotalRequests-=ZAM1;
    float ZAM2;
    cout<<"\n Zimmerli Art Museum ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>ZAM2;
    ZAM1=ZAM2;
    TotalRequests+=ZAM2;
}

void TROW::Quads()
{
    TotalRequests-=Quads1;
    float Quads2;
    cout<<"\n Quads ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>Quads2;
    Quads1=Quads2;
    TotalRequests+=Quads2;
}

void TROW::HealthCenter()
{
    TotalRequests-=HealthCenter1;
    float HealthCenter2;
    cout<<"\n Health Center ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>HealthCenter2;
    HealthCenter1=HealthCenter2;
    TotalRequests+=HealthCenter2;
}

void TROW::LP()
{
    TotalRequests-=LP1;
    float LP2;
    cout<<"\n Liviingston Plaza ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>LP2;
    LP1=LP2;
    TotalRequests+=LP2;
}

void TROW::ScottHall()
{
    TotalRequests-=ScottHall1;
    float ScottHall2;
    cout<<"\n Scott Hall ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>ScottHall2;
    ScottHall1=ScottHall2;
    TotalRequests+=ScottHall2;
}

void TROW::SAC()
{
    TotalRequests-=SAC1;
    float SAC2;
    cout<<"\n Student Activities Center ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>SAC2;
    SAC1=SAC2;
    TotalRequests+=SAC2;
}

void TROW::Visitor()
{
    TotalRequests-=Visitor1;
    float Visitor2;
    cout<<"\n Visitor Center ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>Visitor2;
    Visitor1=Visitor2;
    TotalRequests+=Visitor2;
}

void TROW::ScienceBuildings()
{
    TotalRequests-=ScienceBuildings1;
    float ScienceBuildings2;
    cout<<"\n Science Buildings ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>ScienceBuildings2;
    ScienceBuildings1=ScienceBuildings2;
    TotalRequests+=ScienceBuildings2;
}

void TROW::WerblinFrelin()
{
    TotalRequests-=WBF1;
    float WBF;
    cout<<"\n Werblin Recreation Center ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>WBF;
    WBF1=WBF;
    TotalRequests+=WBF;
}

void TROW::LibrarySM()
{
    TotalRequests-=LibrarySM1;
    float LibrarySM2;
    cout<<"\n Library of Science&Medicine ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>LibrarySM2;
    LibrarySM1=LibrarySM2;
    TotalRequests+=LibrarySM2;
}

void TROW::BuschSuites()
{
    TotalRequests-=BuschSuites1;
    float BuschSuites2;
    cout<<"\n Busch Suites ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>BuschSuites2;
    BuschSuites1=BuschSuites2;
    TotalRequests+=BuschSuites2;
}

void TROW::BSC()
{
    TotalRequests-=BSC1;
    float BSC2;
    cout<<"\n Busch Student Center ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>BSC2;
    BSC1=BSC2;
    TotalRequests+=BSC2;
}

void TROW::Buell()
{
    TotalRequests-=Buell1;
    float Buell2;
    cout<<"\n Buell Apartment ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>Buell2;
    Buell1=Buell2;
    TotalRequests+=Buell2;
}

void TROW::WerblinBarth()
{
    TotalRequests-=WerblinBarth1;
    float WerblinBarth2;
    cout<<"\n Werblin Recreation Center Bartholomew ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>WerblinBarth2;
    WerblinBarth1=WerblinBarth2;
    TotalRequests+=WerblinBarth2;
}

void TROW::HCN()
{
    TotalRequests-=HCN1;
    float HCN;
    cout<<"\n Hill Center North";
    cout<<"\n Enter Number of New Requests: ";
    cin>>HCN;
    HCN1=HCN;
    TotalRequests+=HCN;
}

void TROW::ARC()
{
    TotalRequests-=ARC1;
    float ARC;
    cout<<"\n Allison Road Classroom ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>ARC;
    ARC1=ARC;
    TotalRequests+=ARC;
}


void TROW::HCS()
{
    TotalRequests-=HCS1;
    float HCS;
    cout<<"\n Hill Center South ";
    cout<<"\n Enter Number of New Requests: ";
    cin>>HCS;
    HCS1=HCS;
    TotalRequests+=HCS;
}

void TROW::display()
{
    cout<<"\n Data Details are:";
    cout<<"\n Date: "<<date<<endl;
    cout<<"\n Time period: "<<timeperiod<<endl;
    cout<<"\n Total Requests: "<<TotalRequests<<endl;
}

int main()
{
    TROW bd;
    int choice=1;
    int bus=1;
    while(choice!=0)
    {
        cout<<"\n Welcome to the program of calculating total requests of a bus routein every 5 mins";
        cout<<"\n Please enter 1 to create a file first";
        cout<<"\n Please enter 2-10 to choose the bus route after creating file";
        cout<<"\n Enter 11 to display the file status";
        cout<<"\n Enter 0 to exit\n 1.Create File\n 2.A\n 3.B\n 4.C\n 5.EE\n 6.F\n 7.H\n 8.LX\n 9.REXB\n 10.REXL\n 11.Weekend1\n 12.Weekend2\n 13.Check file status\n ";
        cout<<"\n Your operation is ";
        cin>>choice;
        if(choice==0)
        {
            bd.display();
            cout<<"\n data:";
        }
        if(choice==1)
        {
            bd.input();
        }
        if(choice==2)
        {
            while(bus!=0)
            {
                cout<<"\n Please choose the station: ";
                cout<<"\n Enter 0 to go back to main menu\n 1.CollegeAve SC\n 2.Scott Hall\n 3.Student Activities Center\n 4.Visitor Center\n 5.Stadium\n 6.Werblin Frelinghuysen\n 7.Hill North\n 8.Science Buildings\n 9.Library of Science&Medicine\n 10.Busch Suites\n 11.Busch SC\n 12.Buell\n 13.Werblin Bartholomew\n 14.Display the total requests";
                cout<<"\n Your choice is ";
                cin>>bus;
                switch(bus)
                {
                    case 1: bd.CSC();
                        break;
                    case 2: bd.ScottHall();
                        break;
                    case 3: bd.SAC();
                        break;
                    case 4: bd.Visitor();
                        break;
                    case 5: bd.StadiumWestLot();
                        break;
                    case 6: bd.WerblinFrelin();
                        break;
                    case 7: bd.HCN();
                        break;
                    case 8: bd.ScienceBuildings();
                        break;
                    case 9: bd.LibrarySM();
                        break;
                    case 10: bd.BuschSuites();
                        break;
                    case 11: bd.BSC();
                        break;
                    case 12: bd.Buell();
                        break;
                    case 13: bd.WerblinBarth();
                        break;
                    case 14: bd.display();
                        break;
                    default: cout<<"\nPlease choose the bus route "<<endl;
                }
            }
        }
        if(choice==3)
        {
            while(bus!=0)
            {
                cout<<"\n Please choose the station: ";
                cout<<"\n Enter 0 to go back to main menu\n 1.Livingston SC\n 2.Quads\n 3.Health Center\n 4.Werblin Frenlinghuysen\n 5.Hill North\n 6.Science Buildings\n 7.Library of Science&Medicine\n 8.Busch Suites\n 9.Busch SC\n 10.Livingston Plaza\n 11.Display the total requests";
                cout<<"\n Your choice is ";
                cin>>bus;
                switch(bus)
                {
                    case 1: bd.LSC();
                        break;
                    case 2: bd.Quads();
                        break;
                    case 3: bd.HealthCenter();
                        break;
                    case 4: bd.WerblinFrelin();
                        break;
                    case 5: bd.HCN();
                        break;
                    case 6: bd.ScienceBuildings();
                        break;
                    case 7: bd.LibrarySM();
                        break;
                    case 8: bd.BuschSuites();
                        break;
                    case 9: bd.BSC();
                        break;
                    case 10: bd.LP();
                        break;
                    case 11: bd.display();
                    default: cout<<"\nPlease choose the bus route "<<endl;
                }
            }
        }
        if(choice==4)
        {
            while(bus!=0)
            {
                cout<<"\n Please choose the station: ";
                cout<<"\n Enter 0 to go back to main menu\n 1.Stadium\n 2.Werblin Frelinghuysen\n 3.Hill North\n 4.ARC\n 5.Hill South\n 6.Display the total requests";
                cout<<"\n Your choice Is ";
                cin>>bus;
                switch(bus)
                {
                    case 1: bd.StadiumWestLot();
                        break;
                    case 2: bd.WerblinFrelin();
                        break;
                    case 3: bd.HCN();
                        break;
                    case 4: bd.ARC();
                        break;
                    case 5: bd.HCS();
                        break;
                    case 6: bd.display();
                        break;
                    default: cout<<"\nPlease choose the bus route "<<endl;
                }
            }
        }
        if(choice==5)
        {
            while(bus!=0)
            {
                cout<<"\n Please choose the station: ";
                cout<<"\n Enter 0 to go back to main menu\n 1.CollegeAve SC\n 2.Scott Hall\n 3.Train Station George\n 4.Paterson Street South\n 5.Rockoff Hall\n 6.Public Safety Building South\n 7.Red Oak Lane\n 8.Lipman Hall\n 9.Food Sciences Building\n 10.Biel Road\n 11.Henderson Apts\n 12.Katzenbach\n 13.Gibbons\n 14.College Hall\n 15.Public Safety Building North\n 16.Liberty Street Georege\n 17.Paterson Street North\n 18.Train Station Albany\n 19.Zimmerli Art Museum\n 20.Student Activities Center\n 21.Display the total requests";
                cout<<"\n Your choice is ";
                cin>>bus;
                switch(bus)
                {
                    case 1: bd.CSC();
                        break;
                    case 2: bd.ScottHall();
                        break;
                    case 3: bd.TSG();
                        break;
                    case 4: bd.PSS();
                        break;
                    case 5: bd.RH();
                        break;
                    case 6: bd.PSBS();
                        break;
                    case 7: bd.ROL();
                        break;
                    case 8: bd.LH();
                        break;
                    case 9: bd.FSB();
                        break;
                    case 10: bd.BR();
                        break;
                    case 11: bd.HA();
                        break;
                    case 12: bd.K();
                        break;
                    case 13: bd.G();
                        break;
                    case 14: bd.CH();
                        break;
                    case 15: bd.PSBN();
                        break;
                    case 16: bd.LSG();
                        break;
                    case 17: bd.PSN();
                        break;
                    case 18: bd.TSA();
                        break;
                    case 19: bd.ZAM();
                        break;
                    case 20: bd.SAC();
                        break;
                    case 21: bd.display();
                        break;
                    default: cout<<"\nPlease choose the bus route "<<endl;
                }
            }
        }
        if(choice==6)
        {
            while(bus!=0)
            {
                cout<<"\n Please choose the station: ";
                cout<<"\n Enter 0 to go back to main menu\n 1.Red Oak Lane\n 2.Lipman Hall\n 3.Food Sciences Building\n 4.Biel Road\n 5.Henderson Apts\n 6.Katzenbach\n 7.Gibbons\n 8.College Hall\n 9.Student Activities Center\n 10.CollegeAve SC\n 11.Scott Hall\n 12.Public Safety Building South\n 13.Display the total requests";
                cout<<"\n Your choice is ";
                cin>>bus;
                switch(bus)
                {
                    case 1: bd.ROL();
                        break;
                    case 2: bd.LH();
                        break;
                    case 3: bd.FSB();
                        break;
                    case 4: bd.BR();
                        break;
                    case 5: bd.HA();
                        break;
                    case 6: bd.K();
                        break;
                    case 7: bd.G();
                        break;
                    case 8: bd.CH();
                        break;
                    case 9: bd.SAC();
                        break;
                    case 10: bd.CSC();
                        break;
                    case 11: bd.ScottHall();
                        break;
                    case 12: bd.PSBS();
                        break;
                    case 13: bd.display();
                        break;
                    default: cout<<"\nPlease choose the bus route "<<endl;
                }
            }
        }
        if(choice==7)
        {
            while(bus!=0)
            {
                cout<<"\n Please choose the station: ";
                cout<<"\n Enter 0 to go back to main menu\n 1.Bushc SC\n 2.Davidson Hall\n 3.Library of Science&Medicine\n 4.ARC\n 5.Hill South\n 6.Stadium\n 7.CollegeAve SC\n 8.Scott Hall\n 9.Train Station George\n 10.Student Activities Center\n 11.Werblin Bartholomew\n 12.Buell\n 13.Display the total requests";
                cout<<"\n Your choice is ";
                cin>>bus;
                switch(bus)
                {
                    case 1: bd.BSC();
                        break;
                    case 2: bd.DH();
                        break;
                    case 3: bd.LSC();
                        break;
                    case 4: bd.ARC();
                        break;
                    case 5: bd.HCS();
                        break;
                    case 6: bd.StadiumWestLot();
                        break;
                    case 7: bd.CSC();
                        break;
                    case 8: bd.ScottHall();
                        break;
                    case 9: bd.TSG();
                        break;
                    case 10: bd.SAC();
                        break;
                    case 11: bd.WerblinBarth();
                        break;
                    case 12: bd.Buell();
                        break;
                    case 13: bd.display();
                        break;
                    default: cout<<"\nPlease choose the bus route "<<endl;
                }
            }
        }
        if(choice==8)
        {
            while(bus!=0)
            {
                cout<<"\n Please choose the station: ";
                cout<<"\n Enter 0 to go back to main menu\n 1.CollegeAve SC\n 2.Scott Hall\n 3.Train Station George\n 4.Student Activities Center\n 5.Livingston Plaza\n 6.Livingston SC\n 7.Quads\n 8.Display the total requests";
                cout<<"\n Your choice is ";
                cin>>bus;
                switch(bus)
                {
                    case 1: bd.CSC();
                        break;
                    case 2: bd.ScottHall();
                        break;
                    case 3: bd.TSG();
                        break;
                    case 4: bd.SAC();
                        break;
                    case 5: bd.LP();
                        break;
                    case 6: bd.LSC();
                        break;
                    case 7: bd.Quads();
                        break;
                    case 8: bd.display();
                        break;
                    default: cout<<"\nPlease choose the bus route "<<endl;
                }
            }
        }
        if(choice==9)
        {
            while(bus!=0)
            {
                cout<<"\n Please choose the station: ";
                cout<<"\n Enter 0 to go back to main menu\n 1.Red Oak Lane\n 2.Lipman Hall\n 3.College Hall\n 4.Bravo Supermarket\n 5.Hill North\n 6.ARC\n 7.Hill South\n 8.Public Safety Building South\n 9.Rockoff Hall\n 10.Display the total requests";
                cout<<"\n Your choice is ";
                cin>>bus;
                switch(bus)
                {
                    case 1: bd.ROL();
                        break;
                    case 2: bd.LH();
                        break;
                    case 3: bd.CH();
                        break;
                    case 4: bd.BS();
                        break;
                    case 5: bd.HCN();
                        break;
                    case 6: bd.ARC();
                        break;
                    case 7: bd.HCS();
                        break;
                    case 8: bd.PSBS();
                        break;
                    case 9: bd.RH();
                        break;
                    case 10: bd.display();
                        break;
                    default: cout<<"\nPlease choose the bus route "<<endl;
                }
            }
        }
        if(choice==10)
        {
            while(bus!=0)
            {
                cout<<"\n Please choose the station: ";
                cout<<"\n Enter 0 to go back to main menu\n 1.Red Oak Lane\n 2.Lipman Hall\n 3.College Hall\n 4.Bravo Supermarket\n 5.Livingston Plaza\n 6.Livingston SC\n 7.Public Safety Building South\n 8.Rockoff Hall\n 9.Display the total requests";
                cout<<"\n Your choice is ";
                cin>>bus;
                switch(bus)
                {
                    case 1: bd.ROL();
                        break;
                    case 2: bd.LH();
                        break;
                    case 3: bd.CH();
                        break;
                    case 4: bd.BS();
                        break;
                    case 5: bd.LP();
                        break;
                    case 6: bd.LSC();
                        break;
                    case 7: bd.PSBS();
                        break;
                    case 8: bd.RH();
                        break;
                    case 9: bd.display();
                        break;
                    default: cout<<"\nPlease choose the bus route "<<endl;
                }
            }
        }
        if(choice==11)
        {
            while(bus!=0)
            {
                cout<<"\n Please choose the station: ";
                cout<<"\n Enter 0 to go back to main menu\n 1.CollegeAve SC\n 2.Scott Hall\n 3.Train Station Somerset\n 4.Student Activities Center\n 5.Visitor Center\n 6.Werblin Recreation Center Frelinghuysen\n 7.Hill North\n 8.Science Buildings\n 9.Library of Sicence&Medicine\n 10.Busch Suites\n 11.Busch Student Center\n 12.Livingston Plaza\n 13.Livingston Student Center\n 14.Quads\n 15.Student Activities Center\n 16.Public Safety Building South\n 17.Red Oak Lane\n 18.Lipman Hall\n 19.Food Sciences Building\n 20.Biel Road\n 21.Henderson Apts\n 22.Katzenbach\n 23.Gibbons\n 24.College Hall\n 25.Public Safety Building North\n 26.Liberty Street George\n 27.Paterson Street North\n 28.Train Station George\n 29.Zimmerli Art Museum\n 30.Student Activities Center\n 31.Display the total requests";
                cout<<"\n Your choice is ";
                cin>>bus;
                switch(bus)
                {
                    case 1: bd.CSC();
                        break;
                    case 2: bd.ScottHall();
                        break;
                    case 3: bd.TSS();
                        break;
                    case 4: bd.SAC();
                        break;
                    case 5: bd.Visitor();
                        break;
                    case 6: bd.WerblinFrelin();
                        break;
                    case 7: bd.HCN();
                        break;
                    case 8: bd.ScienceBuildings();
                        break;
                    case 9: bd.LibrarySM();
                        break;
                    case 10: bd.BuschSuites();
                        break;
                    case 11: bd.BSC();
                        break;
                    case 12: bd.LP();
                        break;
                    case 13: bd.LSC();
                        break;
                    case 14: bd.Quads();
                        break;
                    case 15: bd.SAC();
                        break;
                    case 16: bd.PSBS();
                        break;
                    case 17: bd.ROL();
                        break;
                    case 18: bd.LH();
                        break;
                    case 19: bd.FSB();
                        break;
                    case 20: bd.BR();
                        break;
                    case 21: bd.HA();
                        break;
                    case 22: bd.K();
                        break;
                    case 23: bd.G();
                        break;
                    case 24: bd.CH();
                        break;
                    case 25: bd.PSBN();
                        break;
                    case 26: bd.LSG();
                        break;
                    case 27: bd.PSN();
                        break;
                    case 28: bd.TSG();
                        break;
                    case 29: bd.ZAM();
                        break;
                    case 30: bd.SAC();
                        break;
                    case 31: bd.display();
                        break;
                    default: cout<<"\nPlease choose the bus route "<<endl;
                }
            }
        }
        if(choice==12)
        {
            while(bus!=0)
            {
                cout<<"\n Please choose the station: ";
                cout<<"\n Enter 0 to go back to main menu\n 1.CollegeAve Student Center\n 2.Scott Hall\n 3.Train Station Somerset\n 4.Paterson Street South\n 5.Rockoff Hall\n 6.Public Safety Building South\n 7.Red Oak Lane\n 8.Lipman Hall\n 9.Food Sciences Building\n 10.Biel Road\n 11.Henderson Apts\n 12.Katzenbach\n 13.Gibbons\n 14.College Hall\n 15.Student Activities Center\n 16.Livinston Plaza\n 17.Livingston Student Center\n 18.Quads\n 19.Busch Student Center\n 20.Davidson Hall\n 21.Library of Science&Medicine\n 22.ARC\n 23.Hill South\n 24.Display the total requests";
                cout<<"\n Your choice is ";
                cin>>bus;
                switch(bus)
                {
                    case 1: bd.CSC();
                        break;
                    case 2: bd.ScottHall();
                        break;
                    case 3: bd.TSS();
                        break;
                    case 4: bd.PSS();
                        break;
                    case 5: bd.RH();
                        break;
                    case 6: bd.PSBS();
                        break;
                    case 7: bd.ROL();
                        break;
                    case 8: bd.LH();
                        break;
                    case 9: bd.FSB();
                        break;
                    case 10: bd.BR();
                        break;
                    case 11: bd.HA();
                        break;
                    case 12: bd.K();
                        break;
                    case 13: bd.G();
                        break;
                    case 14: bd.CH();
                        break;
                    case 15: bd.SAC();
                        break;
                    case 16: bd.LP();
                        break;
                    case 17: bd.LSC();
                        break;
                    case 18: bd.Quads();
                        break;
                    case 19: bd.BSC();
                        break;
                    case 20: bd.DH();
                        break;
                    case 21: bd.LibrarySM();
                        break;
                    case 22: bd.ARC();
                        break;
                    case 23: bd.HCS();
                        break;
                    case 24: bd.display();
                        break;
                    default: cout<<"\nPlease choose the bus route "<<endl;
                }
            }
        }
        if(choice==13)
        {
            bd.display();
        }
    }
}

