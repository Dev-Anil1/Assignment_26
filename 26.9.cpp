#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

class Bill
{
 private:
     int acc_no,pin_code;
     char acc_holder[20];
     float bill_amount,meter_read;

 public:
    Bill()
    {
        acc_no=0,pin_code=0,acc_holder[20]='\0',bill_amount=0,meter_read=0;

    }

    void get_acc()
    {
        int temp;
        cout<<"Enter your account number "<<endl;
        cin>>temp;

        if(temp<0)
            acc_no=-temp;
        else
            acc_no=temp;
    }

    void get_pincode()
    {
        int temp;
        cout<<"Enter your pin code"<<endl;
        cin>>temp;

        if (temp<0)
        {
            pin_code=-temp;
        }
        else{
            pin_code=temp;
        }
    }

    void get_holderName()
    {
        cout<<"Enter your name here"<<endl;
        fflush(stdin);
        fgets(acc_holder,20,stdin);
        acc_holder[strlen(acc_holder)-1]='\0';
    }

    void get_meterRead()
    {
        int temp;
        cout<<"Enter your meter reading"<<endl;
        cin>>temp;

        if(temp<0)
            meter_read=-temp;
        else
            meter_read=temp;

    }

    void calcBill()
    {
        if(meter_read<=100){
            bill_amount=meter_read*1.20;
        }

        else if(meter_read<=200)
        {
            bill_amount=120+(meter_read-100)*2;
        }

        else{
            bill_amount=320 + (meter_read-200)* 3;
        }
    }

    void display_bill()
    {
        cout<<"Amount : " << bill_amount << endl;
    }

    void all_details()
    {
        cout<<"Account Holder Name : " << acc_holder<<endl;
        cout<<"Account No : "<< acc_no << endl;
        cout<< "Pin code : " << pin_code <<endl;
        cout <<"Meter Reading : " << meter_read << endl;
        cout<<"Bill amount : " << bill_amount << endl;
    }
};

int main()
{
    Bill b1,b2;
    b1.get_acc();
    b1.get_pincode();
    b1.get_holderName();
    b1.get_meterRead();
    b1.calcBill();
    b1.all_details();

    //b2=b1,b2.all_details();
    return 0;
}
