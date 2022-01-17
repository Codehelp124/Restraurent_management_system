#include <iostream>

using namespace std;

int main()
{
   int Quantity , Choice;

   int Quantity_rooms=0, Quantity_Pasta=0, Quantity_Burger=0, Quantity_noodles=0, Quantity_Pizza=0,Quantity_shakes=0;

   int sold_rooms=0 , sold_pasta=0, sold_burger=0,sold_noodles=0, sold_pizza=0, sold_shakes=0;

   int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_pizza=0, Total_shakes=0;

   cout<<"\n\t\t\t\t Services we have"<<endl;
   cout<<"\n\t\t\t\t Food or Room Services"<<endl;
   cout<<"----------------------------------------------------------------------------------------------------"<<endl;
   cout<<"\n -> Rooms Available: ";
   cin>>Quantity_rooms;

   cout<<"\n -> Quantity of Pasta: ";
   cin>>Quantity_Pasta;
   cout<<"\n -> Quantity of Burger: ";
   cin>>Quantity_Burger;
   cout<<"\n -> Quantity of Noodles: ";
   cin>>Quantity_noodles;
   cout<<"\n -> Quantity of Shakes: ";
   cin>>Quantity_shakes;
   cout<<"\n -> Quantity of Pizza: ";
   cin>>Quantity_Pizza;
   m:
   cout<<"\n\t\t\t Please select from the menu options "<<endl;
   cout<<"1) Rooms"<<endl;
   cout<<"2) Pasta"<<endl;
   cout<<"3) Burger"<<endl;
   cout<<"4) Noodles"<<endl;
   cout<<"5) Shakes"<<endl;
   cout<<"6) Pizza"<<endl;
   cout<<"7) Information regarding sales and collection "<<endl;
   cout<<"8) Exit"<<endl;

   cout<<"\n\n Please Enter your Choice! :- ";
   cin>>Choice;

   switch(Choice)
   {
   case 1:
       {


    cout<<"\n\n Enter the number of rooms you want : ";
    cin>>Quantity;
    if(Quantity_rooms-sold_rooms >= Quantity)
    {
        sold_rooms=sold_rooms+Quantity;
        Total_rooms=Total_rooms+ (Quantity*1200);
        cout<<"\n\n\t\t"<<Quantity<<"Rooms have been alloted to you!";

    }
    else
    {
        cout<<"\n\t Only"<<Quantity_rooms-sold_rooms<<"Rooms Remaining in hotel";
        break;
    }
       }
   case 2:
    {
       cout<<"\n\n Enter Pasta Quantity :";
       cin>>Quantity;
       if(Quantity_Pasta-sold_pasta >=Quantity)
       {
           sold_pasta=sold_pasta+Quantity;
           Total_pasta=Total_pasta+(Quantity*250);
           cout<<"\n\n\n\t\t"<<Quantity<<"Pasta is the order!";\

       }
       else
       {
           cout<<"\n\t Only "<<Quantity_Pasta-sold_pasta<<"Pasta remaining in hotel ";
           break;
       }
    }
   case 3:
    {
        cout<<"\n\n Enter Burger Quantity :";
        cin>>Quantity;
        if(Quantity_Burger-sold_burger >=Quantity)
        {
            sold_burger=sold_burger+Quantity;
            Total_burger=Total_burger + (Quantity *250);
            cout<<"\n\n\t\t"<<Quantity<<"Burger is the order!";
        }
        else
        {
            cout<<"\n\t Only"<<Quantity_Burger-sold_burger<<"Burgers remaining in hotel ";
            break;
        }
    }
   case 4:
    {
        cout<<"\n\n Enter Noodles Quantity :";
        cin>>Quantity;
        if(Quantity_noodles-sold_noodles >=Quantity)
        {
            sold_noodles=sold_noodles+Quantity;
            Total_noodles=Total_noodles + (Quantity *250);
            cout<<"\n\n\t\t"<<Quantity<<"Noodles is the order!";
        }
        else
        {
            cout<<"\n\t Only"<<Quantity_noodles-sold_noodles<<"Noodles remaining in hotel ";
            break;
        }
    }
   case 5:
    {
        cout<<"\n\n Enter Shakes Quantity :";
        cin>>Quantity;
        if(Quantity_shakes-sold_shakes >=Quantity)
        {
            sold_shakes=sold_shakes+Quantity;
            Total_shakes=Total_shakes + (Quantity *250);
            cout<<"\n\n\t\t"<<Quantity<<"Shakes is the order!";
        }
        else
        {
            cout<<"\n\t Only"<<Quantity_shakes-sold_shakes<<"Shakes remaining in hotel ";
            break;
        }

    }
   case 6:
    {
        cout<<"\n\n Enter Pizza Quantity :";
        cin>>Quantity;
        if(Quantity_Pizza-sold_pizza >=Quantity)
        {
            sold_pizza=sold_pizza+Quantity;
            Total_pizza=Total_pizza+ (Quantity *250);
            cout<<"\n\n\t\t"<<Quantity<<"Pizza is the order!";
        }
        else
        {
            cout<<"\n\t Only"<<Quantity_Pizza-sold_pizza<<"Pizzas remaining in hotel ";
            break;
        }
    }
   case 7:
    {
        cout<<"\n\t\t Details of sales and collection "<<endl;
        cout<<"\n Numbers of rooms we had :"<<Quantity_rooms<<endl;
        cout<<"\n Number of rooms we gave for rent "<<sold_rooms<<endl;
        cout<<"\n Remaining rooms :"<<Quantity_rooms-sold_rooms<<endl;
        cout<<"\n Total rooms collection for the day: "<<Total_rooms<<endl;


        cout<<"\n Numbers of Pasta we had :"<<Quantity_Pasta<<endl;
        cout<<"\n Number of Pasta we sold "<<sold_pasta<<endl;
        cout<<"\n Remaining pasta :"<<Quantity_Pasta-sold_pasta<<endl;
        cout<<"\n Total pasta collection for the day: "<<Total_pasta<<endl;

        cout<<"\n Numbers of Burger we had :"<<Quantity_Burger<<endl;
        cout<<"\n Number of Burger we sold "<<sold_burger<<endl;
        cout<<"\n Remaining Burger:"<<Quantity_Burger-sold_burger<<endl;
        cout<<"\n Total Burger collection for the day: "<<Total_burger<<endl;

        cout<<"\n Numbers of Noodles we had :"<<Quantity_noodles<<endl;
        cout<<"\n Number of Noodles we sold "<<sold_noodles<<endl;
        cout<<"\n Remaining Noodles :"<<Quantity_noodles-sold_noodles<<endl;
        cout<<"\n Total Noodles collection for the day: "<<Total_noodles<<endl;

        cout<<"\n Numbers of shakes we had :"<<Quantity_shakes<<endl;
        cout<<"\n Number of shakes we sold "<<sold_shakes<<endl;
        cout<<"\n Remaining shakes:"<<Quantity_shakes-sold_shakes<<endl;
        cout<<"\n Total shakes collection for the day: "<<Total_shakes<<endl;

        cout<<"\n Numbers of Pizza we had :"<<Quantity_Pizza<<endl;
        cout<<"\n Number of Pizza we sold "<<sold_pizza<<endl;
        cout<<"\n Remaining Pizza :"<<Quantity_Pizza-sold_pizza<<endl;
        cout<<"\n Total Pizza collection for the day: "<<Total_pizza<<endl;

    }
   case 8:
    {
        exit(0);
    }
   default:
    {
        cout<<"\n Please select the numbers mentioned above!"<<endl;
    }




   }
   goto m;
    return 0;
}
