#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
string custname;
string email;
string pass;
string username;
string customization;
int num_clo,clothsize,dress, dress2;
char payment,acce_ty,event_cat,clothtype,reg_log,closec,gar_nam,codecloth='y';
double tot_am,price_cl;
double price_acce,num_hats,num_ties,num_jewe,num_hb,num_shoes, numsiz_shoe, inchnum_gars;
double hatprice,tieprice, jeweprice,hbprice,shoeprice, totalprice, garprice;
while(codecloth =='Y' || codecloth=='y')
{

cout<< setw(70)<<"Clothing System"<<endl;
cout<<""<<endl;

    cout<<"Registered or Login"<<endl;
    cout<<"Select:";
    cin>>reg_log;
    if(reg_log=='R' || reg_log=='r')
    {
    cout<<"Enter full name:"<<endl;
    cin>>reg_log;
    getline(cin,custname);
    cout<<"Username:"<<endl;
    cin>>reg_log;
    getline(cin,username);
    cout<<"Email:"<<endl;
    cin>>reg_log;
    getline(cin,email);
    cout<<"Password:"<<endl;
    cin>>reg_log;
    getline(cin,pass);
    }
    else if(reg_log=='L' || reg_log=='l')
    {

        cout<<"maryannion"<<endl;
        cout<<"marceljun"<<endl;
        cout<<"raymartjagdon"<<endl;
        cout<<"paulinniel"<<endl;
        cout<<"Enter username:"<<endl;
        cin>>reg_log;
        getline(cin,username);
        cout<<"Enter password:"<<endl;
        cin>>reg_log;
        getline(cin,pass);
    }
    system("cls");
    cout<<""<<endl;
    cout<<"********************************************"<<endl;
    cout<<""<<endl;
    cout<<"Choose your event categories:"<<endl;
    cout<<"1.Summer"<<endl;
    cout<<"2.Casual"<<endl;
    cout<<"3.Formal"<<endl;
    cout<<"4.Party"<<endl;
    cout<<"Select categories:";
    cin>>event_cat;
    if(event_cat=='1')
    {
    cout<<"Summer Event"<<endl;
    cout<<"What summer event do you want?"<<endl;
    cout<<"a.Beach Event"<<endl;
    cout<<"b.Pool party"<<endl;
    cout<<"Select:";
    cin>>event_cat;
        if(event_cat=='a')
        {
            cout<<"Summer Event: Beach Event"<<endl;
        }
        else if(event_cat=='b')
        {
            cout<<"Suumer Event: Pool Party"<<endl;
        }
    }
    else if (event_cat=='2')
    {
    cout<<"Casual Event"<<endl;
    }
    else if (event_cat=='3' )
    {
      cout<<"Formal Event"<<endl;
      cout<<"What formal event do you want?"<<endl;
      cout<<"a.Executive Conferences"<<endl;
      cout<<"b.Exhibitions"<<endl;
      cout<<"c.Prom Event"<<endl;
      cout<<"Select:";
      cin>>event_cat;
        if(event_cat=='a')
        {
            cout<<"Formal Event: Executive Conferences"<<endl;
        }
        else if(event_cat=='b')
        {
            cout<<"Formal Event: Exhibitions"<<endl;
        }
        else if(event_cat=='c')
        {
            cout<<"Formal Event: Prom Event"<<endl;
        }
    }
    else if (event_cat='4')
    {
        cout<<"Party Event"<<endl;
        cout<<"What party event do you want?"<<endl;
        cout<<"a.Christmas Event"<<endl;
        cout<<"b.Halloween Event"<<endl;
        cout<<"Select:";
        cin>>event_cat;
         if(event_cat=='a')
         {
             cout<<"Party Event: Christmas Event"<<endl;
         }
         else if(event_cat=='b')
         {
             cout<<"Party Event: Halloween Event"<<endl;
         }
    }
    cout<<""<<endl;
    cout<<"****Clothing Section****"<<endl;
    cout<< "1.Men's Clothing Section"<<endl;
    cout<< "2.Women's Clothing Section"<<endl;
    cout<<""<<endl;
    cout<<"Select a section:";
    cin >> closec;

if (closec=='1')
    {
    cout<<""<<endl;
    cout<<"****Men's Clothing****"<<endl;
    cout<<"a.Adult Men's clothing"<<endl;
    cout<<"b.Teenage boy's clothes"<<endl;
    cout<<"c.Kid's Clothes"<<endl;
    cout<<"Select:";
    cin>>closec;
     if(closec=='a')
     {
         cout<<"Adult Men's clothing"<<endl;
     }
    else if(closec=='b')
    {
        cout<<"Teenage boy's clothes"<<endl;
    }
    else if(closec=='c')
    {
        cout<<"Kid's Clothes"<<endl;
    }
    }
else if (closec=='2')
    {
    cout<<""<<endl;
    cout<<"****Women's Clothing****"<<endl;
    cout<<"a.Adult women's clothing"<<endl;
    cout<<"b.Teenage girls' clothes"<<endl;
    cout<<"c.Kid's Clothes"<<endl;
    cout<<"Select:";
    cin>>closec;
    if(closec=='a')
     {
         cout<<"Adult women's clothing"<<endl;
     }
    else if(closec=='b')
    {
        cout<<"Teenage girls' clothes"<<endl;
    }
    else if(closec=='c')
    {
        cout<<"Kid's Clothes"<<endl;
    }
    }

	cout<<""<<endl;
    cout<<"Choose your garment type:"<<endl;
    cout <<"1.Linen"<<endl;
    cout <<"2.Cotton"<<endl;
    cout <<"3.Polyester"<<endl;
    cout <<"4.Silk"<<endl;
    cout<<"5.Velvet"<<endl;
    cout<<"6.Taffeta"<<endl;
    cout<< "Select your garment type:";
    cin>>gar_nam;

    if(gar_nam =='1')
    {
    cout<<"Garment type: Linen"<<endl;
    }
        else if(gar_nam =='2')
    {
    cout<<"Garment type: Cotton"<<endl;

    }
        else if(gar_nam =='3')
    {
    cout<<"Garment type: Polyester"<<endl;

    }
        else if(gar_nam =='4' )
    {
    cout<<"Garment type: Silk"<<endl;

    }
        else if(gar_nam =='5' )
    {
    cout<<"Garment type: Velvet"<<endl;

    }
        else if(gar_nam =='6' )
    {
    cout<<"Garment type: Taffeta"<<endl;

    }
    cout<<"****Accessories****"<<endl;
    cout<<"1.Hats"<<endl;
    cout<<"2.Ties"<<endl;
    cout<<"3.Jewelry"<<endl;
    cout<<"4.Handbags"<<endl;
    cout<<"5.Shoes"<<endl;
    cout<<"Select:";
    cin>>acce_ty;
        if(acce_ty=='1')
    {
        cout<<"***Hats***"<<endl;
        cout<<"a.Baseball Cap"<<endl;
        cout<<"b.Beanies"<<endl;
        cout<<"c.Fedoras"<<endl;
        cout<<"d.Berets"<<endl;
        cout<<"e.Breton Hat"<<endl;
        cout<<"Select:";
        cin>>acce_ty;
         if(acce_ty=='a')
         {
            cout<<"Your type of hat is Baseball Cap"<<endl;
         }
         else if(acce_ty=='b')
         {
             cout<<"Your type of hat is Beanies"<<endl;
         }
         else if(acce_ty=='c')
         {
             cout<<"Your type of hat is Fedoras"<<endl;
         }
         else if(acce_ty=='d')
         {
             cout<<"Your type of hat is Berets"<<endl;
         }
         else if(acce_ty=='e')
         {
             cout<<"Your type of hat is Breton Hat"<<endl;
         }

        cout<<"Enter number of hat:"<<endl;
        cin>>num_hats;
         num_hats <=5;
         hatprice= 90;
         totalprice= hatprice * num_hats;
         cout<<"Total Price:"<< totalprice<<endl;
    }
    else if(acce_ty=='2')
    {
        cout<<"***Ties***"<<endl;
        cout<<"a.Ascot"<<endl;
        cout<<"b.Bow"<<endl;
        cout<<"c.Zipper Tie"<<endl;
        cout<<"d.Cravat"<<endl;
        cout<<"e.Knit Tie"<<endl;
        cout<<"Select:"<<endl;
        cin>>acce_ty;
        if(acce_ty=='a')
        {
            cout<<"Your type of ties is Ascot"<<endl;
        }
        else if(acce_ty=='b')
        {
            cout<<"Your type of ties is Bow"<<endl;
        }
        else if(acce_ty=='c')
        {
            cout<<"Your type of ties is Zipper Tie"<<endl;
        }
        else if(acce_ty=='d')
        {
            cout<<"Your type of ties is Cravat"<<endl;
        }
        else if(acce_ty=='e')
        {
            cout<<"Yout type of ties is Knit Tie"<<endl;
        }
        cout<<"Enter number of tie"<<endl;
        cin>>num_ties;

        num_ties >4;
        tieprice =80;
        totalprice= tieprice * num_ties;
        cout<<"Total Price:"<<totalprice<<endl;

    }
    else if(acce_ty=='3')
    {
        cout<<"***Jewelry***"<<endl;
        cout<<"a.Necklace"<<endl;
        cout<<"b.Bracelet"<<endl;
        cout<<"c.Cufflinks"<<endl;
        cout<<"d.Rings"<<endl;
        cout<<"Select:";
        cin>>acce_ty;
        if(acce_ty=='a')
        {
            cout<<"Your Jewelry is Necklace"<<endl;
        }
        else if(acce_ty=='b')
        {
            cout<<"Your Jewelry is Bracelet"<<endl;
        }
        else if(acce_ty=='c')
        {
            cout<<"Your Jewelry is Cufflinks"<<endl;
        }
        else if(acce_ty=='d')
        {
            cout<<"Your Jewelry is Rings"<<endl;
        }
        cout<<"Enter number of jewelry:";
        cin>>num_jewe;

        num_jewe >=5;
        jeweprice= 200;
        totalprice= jeweprice * num_jewe;
        cout<<"Total Price:"<<totalprice<<endl;

    }
    else if(acce_ty=='4')
    {
        cout<<"***Handbag***"<<endl;
        cout<<"a.Shoulderbag"<<endl;
        cout<<"b.Wristlet"<<endl;
        cout<<"c.Evening clutch"<<endl;
        cin>>acce_ty;
        if(acce_ty=='a')
        {
            cout<<"Your Handbag is Shoulderbag"<<endl;
        }
        else if(acce_ty=='b')
        {
            cout<<"Your Handbag is Wristlet"<<endl;

        }
        else if(acce_ty=='c')
        {
            cout<<"Your Handbag is Evening Clutch"<<endl;
        }
        cout<<"Enter number of Handbag:";
        cin>>num_hb;

        num_hb >=10;
        hbprice= 300;
        totalprice= hbprice * num_hb;
        cout<<"Total Price:"<<totalprice<<endl;
    }
    else if(acce_ty=='5')
    {
        cout<<"***Shoes***"<<endl;
        cout<<"a.High Heel"<<endl;
        cout<<"b.Flat Shoes"<<endl;
        cout<<"c.Rubber Shoes"<<endl;
        cout<<"d.Loafers"<<endl;
        cout<<"e.Sneaker"<<endl;
        cout<<"Select:";
        cin>>acce_ty;
        if(acce_ty=='a')
        {
            cout<<"Your shoes is High Heel"<<endl;
        }
        else if (acce_ty=='b')
        {
            cout<<"Your shoes is Flat Shoes"<<endl;
        }
        else if (acce_ty=='c')
        {
            cout<<"Your shoes is Rubber Shoes"<<endl;
        }
        else if (acce_ty=='d')
        {
            cout<<"Your shoes is Loafers"<<endl;
        }
        else if (acce_ty=='e')
        {
            cout<<"Your shoes is Sneaker"<<endl;
        }
        cout<<"Enter Size Number of Shoes:";
        cin>>numsiz_shoe;
        cout<<"Enter number of Shoes:";
        cin>>num_shoes;

        numsiz_shoe >=50;
        num_shoes >=15;
        shoeprice = 900;
        totalprice= shoeprice * num_shoes + numsiz_shoe;
        cout<<"Total Price:"<<totalprice<<endl;


    }
    cout << "Choose Payment of Delivery\n 1. Cash on Delivery \n 2. Gcash \n 3. Bank Transfer" << endl;
	cin >> payment;

	if(payment == 1){
	cout << "Payment Method: Cash on Delivery" << endl;
	}
	else if(payment == 2){
	cout << "Payment Method: Gcash" << endl;
	}
	else if(payment ==3){
	cout << "Payment Method: Bank Transfer" << endl;
	}

	cout << "Would you like to order again?" << endl;
	cin >> codecloth;



 system("pause");
 system("cls");
    }
return 0;

}
