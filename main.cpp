#include<bits/stdc++.h>
using namespace std;

int main(){
    char start;
    char choiceagain;
    float onlineShopping(void);
    cout<<"Please press s to start shopping"<<endl;
    start:
    cin>>start;

    if(start=='s' || start=='S'){
        float totalAmount=onlineShopping();
        cout<<"TotalBillAmount is"<<totalAmount;
        shopgain:
        cout<<"Do you want shopping again y or n"<<endl;
        cin>>choiceagain;
        if(choiceagain=='y' || choiceagain=='Y'){
            goto start;
        }else if(choiceagain=='n' || choiceagain=='N')
        {
            cout<<"Thanks for shopping"<<endl;
        }else{
            cout<<"You have entered wrong option"<<endl;
            goto shopgain;
        }



    }else{
        cout<<"You have entered wrong option"<<endl;
        goto start;
    }

}
float onlineShopping()
{
    char choice;
    int quantity;
    int billamount=0;
    char item;
    cout<<" ***** Welcome to online Shopping"<<endl;
    cout<<"***** Please follow the instruction"<<endl;
    cout<<"1. Please Enter m to order mobile phone"<<endl;
    cout<<"2. Please Enter d to order desktop"<<endl;
    cout<<"3. Please Enter s to order speaker"<<endl;
    cout<<"4. Please Enter h to order headphone"<<endl;

    cin>>choice;
     // *** ********** choice ****** 
    if(choice=='m' || choice=='M'){
        mobilelevel:
         cout<<"Mobile Details"<<endl;
         cout<<"1.Apple=>Price:40000"<<endl;
         cout<<"2.Vivo=>Price:25000"<<endl;
         cout<<"3.Oppo=>Price:20000"<<endl;
         cout<<"4.Redmi=>Price:18000"<<endl;
         cout<<"5.Real me=>Price:15000"<<endl;
         cout<<"6.Micromax=>Price:10000"<<endl;
         cout<<"Enter your choice"<<endl;
         cin>>item;
         if(item=='1' ){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+quantity *4000;
         }
         else if(item=='2'){
           cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+quantity *25000;
         }
         else if(item=='3'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+quantity *20000;
         }
         else if(item=='4'){
         cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+quantity *15000;
         }
         else{
            cout<<"you have entered wrong option, please type again"<<endl;
            goto mobilelevel;

         }
    } 
    if(choice=='d' || choice=='D'){
        Desktoplevel:
         cout<<"Desktop details"<<endl;
         cout<<"1.HP ChromeBox Desktop Core=>Price:13999"<<endl;
         cout<<"2.DgCam InterCore=>Price:119000"<<endl;
         cout<<"3.Dell Vostro=>Price:11898"<<endl;
         cout<<"4.Asus Vivo AIO =>Price:35990"<<endl;
         cout<<"5.Lenovo All in one=>Price:42,999"<<endl;
         cout<<"Enter your choice"<<endl;
         cin>>item;
         if(item=='1' ){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+quantity *13999;
         }
         else if(item=='2'){
           cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+quantity *119000;
         }
         else if(item=='3'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+quantity *11898;
         }
         else if(item=='4'){
         cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+quantity *359990;
         }else if(item=='5'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+429999;
         }
         else{
            cout<<"you have entered wrong option, please type again"<<endl;
            goto Desktoplevel;

         }
         

    } 
    if(choice=='s' || choice=='S'){
        Speakerlevel:
         cout<<"Speaker details"<<endl;
         cout<<"1.Zebronics Feel 4.1 Channel Multimedia Speaker=>Price:2499"<<endl;
         cout<<"2.F&D F203G 2.1 Multimedia Speaker=>Price:13000"<<endl;
         cout<<"3.JBL Cinema SB450=>Price:34,999"<<endl;
         cout<<"4.Intex IT-881 s2.1  Multimedia Speaker=>Price:849"<<endl;
         cout<<"5.F&D E200 Multimedia Speaker=>Price:1349"<<endl;
         cout<<"Enter your choice"<<endl;
         cin>>item;
         if(item=='1' ){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+quantity *2499;
         }
         else if(item=='2'){
           cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+quantity *13000;
         }
         else if(item=='3'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+quantity *34999;
         }
         else if(item=='4'){
         cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+quantity *849;
         }else if(item=='5'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+1349;
         }
         else{
            cout<<"you have entered wrong option, please type again"<<endl;
            goto Speakerlevel;

         }
         

    } 
    if(choice=='h' || choice=='H'){
        HeadPhonelevel:
         cout<<"HeadPhone details"<<endl;
         cout<<"1.Cosmic Byte GS410  Core=>Price:629"<<endl;
         cout<<"2.Wings Vader 100 wired =>Price:1098"<<endl;
         cout<<"3.MI SuperBass Bluetooth =>Price:2090"<<endl;
         cout<<"4.Sony MDr zx110/Wcin =>Price:1090"<<endl;
         cout<<"Enter your choice"<<endl;
         cin>>item;
         if(item=='1' ){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+quantity *629;
         }
         else if(item=='2'){
           cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+quantity *1098;
         }
         else if(item=='3'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+quantity *2090;
         }
         else if(item=='4'){
         cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+quantity *1090;
         }else if(item=='5'){
            cout<<"Enter quantity"<<endl;
            cin>>quantity;
            billamount=billamount+429999;
         }
         else{
            cout<<"you have entered wrong option, please type again"<<endl;
            goto HeadPhonelevel;

         }
    }
         

    return billamount;
    

}