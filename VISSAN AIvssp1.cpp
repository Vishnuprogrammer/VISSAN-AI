
 #include<iostream>
 #include<string.h>
using namespace std;

class sensing
{
  public:
      double age,bp,sg,al,su,pc,pcc,bgr,bu,sc,sod,pot,hemo,pcv,wc,rc,htn,dm,ckd;
      char appet[10],cad[10],pe[10],ane[10],ba[20],rbc[10];
   void datainput()
{
     cout<<"age"<<"\n";
     cin>>age;
     cout<<"blood pressure normal is 140"<<"\n";cin>>bp;
     cout<<"specific gravity normally greater than 1.010"<<"\t";cin>>sg;
     cout<<"albumin normall 4"<<"\n" ;cin>>al;
     cout<<"sugar normal 4"<<"\n" ;cin>>su;
     cout<<"red blood cells normal or not"<<"\n" ;cin>>rbc;
     cout<<"pus cells 0 to 4"<<"\n";cin>>pc;
     cout<<"pus cell clumps normal 6"<<"\n";cin>>pcc;
     cout<<"bacteria "<<"\n";cin>>ba;
     cout<<"blood glucose random"<<"\n";cin>>bgr;
     cout<< "blood urea" <<"\n";cin>>bu;
     cout<<"serum  creatinine"<<"\n";cin>>sc;
     cout<<"sodium"<<"\n";cin>>sod;
     cout<<" potassiun" <<"\n";cin>> pot;
     cout<<"haemoglobin"<<"\n";cin>>hemo;
     cout<<" packed cell volume"<<"\n"; cin>>pcv;
     cout<<"white blood cells count"<<"\n";cin>>wc;
     cout<< "red blood cells count"<<"\n";cin >>rc;
     cout<<"hyper tension" <<"\n";cin>>htn;
     cout<< "diabetes melitus";cin>>dm;
     cout<<"coronary artery diseases" <<"\n" ;cin>>cad;
     cout<<"appetite" <<"\n";cin>> appet;
     cout<<"pedal edema"<<"\n";cin>> pe;
     cout<<"anemia" <<"\n";cin>>ane;
 }
 };
 class decesion1:public sensing
      {
       public:
        int calcage=0,calc_bp=0,calc_sg=0,calc_al=0,calc_su=0,calc_rbc=0,calc_pc=0,calc_pcc=0,calc_ba=0,calc_bgr=0,calc_bu=0,calc_sc=0,calc_sod=0,calc_pot=0,calc_hemo=0,calc_pcv=0,calc_wc=0,calc_rc=0,calc_htn=0,calc_dm=0,calc_cad=0,calc_appet=0,calc_pe=0,calc_ane=0;
           void agee()
          {
          if(age>=18&&age<=44)
            {calcage=calcage+1;}
        else if(age>=45&&age<=54)
 calcage+=2;
        else if(age>=55&&age<=64)
            calcage=3;
        else if(age>=65&&age<=74)
             calcage+=4;
          else if(age>=75)
             calcage+=5;
          }
          void bloodpressure()
          {
             if(bp>=120&&bp<=139)
                   calc_bp+=1;
              else if(bp>=140)
                   calc_bp+=2;
          }
          void specificgravity()
          {
              if(sg<1.010)
                  calc_sg+=2;
                  else if(sg>1.010)
                    calc_sg+=1;
   }
        void albumin()
        {
            if(al==4)
                  calc_al+=1;
            else
                calc_al+=2;
       }
       void sugar()
       {
           if(su==4)
             calc_su+=1;
           else
              calc_su+=2;
           }
           void redbloodcells()
           {
               if(rbc=="normal")
                  calc_rbc+=1;
               else if(rbc=="abnormal")
                 calc_rbc+=2;
           }
            void puscells()
            {
                if(pc>=0&&pc<=4)
                      calc_pc+=1;
            else
                 calc_pc+=2;
            }
            void puscellclump()
            {
                if ( pcc<6||pcc>6)
                   calc_pcc+=2;
                else
                 calc_pcc+=1;
}
     void bacteria()
     {
         if(ba=="present")
              calc_ba+=2;
         else if(ba=="absent")
              calc_ba+=1;
         }
         void bloodglucoserandom()
         {
              if(bgr>=70&&bgr<=140)
                calc_bgr+=1;
              else   calc_bgr+=2;
            }
            void bloodurea()
            {
                if( bu>=7&&bu<=20)
                      calc_bu+=1;
                else   calc_bu+=2;
                }
                 void serumcreatinine()
                  {
                      if(sc>=0.6&&sc<= 1.3)
                       calc_sc+=1;
                       else calc_sc+=2;
                  }
                   void sodium()
                   {
                        if(sod>=135&&sod<=145)
                              calc_sod+=1;
                        else  calc_sod+=2;
            }
            void potassium()
            {

                 if(pot >=3.5&& pot<=5.5)
                       calc_pot+=1;
                 else   calc_pot+=2;
                }
                void haemoglobin()
                 {

                   if(hemo>=9&&hemo<=12)
                      calc_hemo+=1;
                   else    calc_hemo+=2;
             }
              void packedcellvolume()
              {
                   if(pcv==0.46)
                      calc_pcv+=1;
                   else  calc_pcv+=2;
              }
               void whitebloodcells()
               {
                   if (wc>=4300 &&wc<=10800)

                        calc_wc+=1;
                       else  calc_wc+=2;
               }
               void redbloodcell()
                {
                     if( rc>=4500&& rc<=10000)
                          calc_rc+=1;
                     else  calc_rc+=2;
                }

      void hypertension()
      {
              if( htn>=120&&htn<=139)
                  calc_htn+=1;
              else
                  calc_htn+=2;
          }
             void diabetesmelitius()
              {
              if(dm>=120&&dm<=139)
                  calc_dm+=1;
              else   calc_dm+=2;
              }
              void coronaryarterydisease()
                {
                  if(cad=="yes")
                      calc_cad+=2;
                  else if(cad=="no")    calc_cad+=1;
                }
                   void appetite()
                   {
                         if(appet=="low")
                          calc_appet+=2;
                        else if(appet=="high")
                            calc_appet+=1;
                        }
                     void pedaledema()
                     {
                          if(pe=="yes")
                               calc_pe+=2;
                           else if( pe=="no")   calc_pe+=1;
                     }
                       void anemia()
                       {
                           if (ane=="yes")
                                calc_ane+=2;
                           else if(ane=="no")  { calc_ane=calc_ane+1;cout<<"calc_ane"<<calc_ane;}
                       }
                       void output()
                       {
                         if(dm>140&&bp>140&&sc>1.4)
                         {
                             cout<<"CKD HIGHLY PRESENT";
                         }
                         else{cout<<"NO CKD";
                         }
                       }

                       };
                       int main()
 {
  class decesion1 E;
  E.datainput();
  E.agee();
  E.bloodpressure();
  E.bloodpressure();
  E.specificgravity();
  E.albumin();
   E.sugar();
   E.redbloodcells();
   E.puscells();
   E.puscellclump();
   E.bacteria();
   E.bloodglucoserandom();
   E.bloodurea();
   E.serumcreatinine();
    E.sodium();
    E.potassium();
    E.haemoglobin();
    E.packedcellvolume();
    E.whitebloodcells();
    E.redbloodcells();
    E.hypertension();
 E.diabetesmelitius();
    E.coronaryarterydisease();
    E.appetite();
    E.pedaledema();
    E.anemia();
 E.output();
                          return 0;
}
