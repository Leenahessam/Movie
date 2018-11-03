#include <iostream>
#include <string>

using namespace std;
class Movie {
private:
string moviename;
string MPAA;
int Terrible, Bad, OK, Good, Great;
public :
    Movie (string mn, string mpaa){
    MPAA=mpaa;
    moviename=mn;
    Terrible=0;
    Bad=0;
    OK=0;
    Good=0;
    Great=0;
    }

    void setmn (string mn){
    moviename=mn;
    }
    void setmpaa (string mpaa){
    MPAA=mpaa;
    }

    string getmn (){
    return moviename;}
    string getmpaa (){
    return MPAA;}


void AddRating (){
int rating;
cout<<"Please enter a number knowing that \n1-terrible \n2-bad \n3-OK \n4-good \n5-great "<<endl;
cin>>rating;
if (rating < 1 || rating > 5){
 cout<<"please enter number from 1 to 5"<<endl;

}
else {
    if (rating==1){
        Terrible++;
        cout<<"Terrible "<<Terrible<<endl;
    }
    else if (rating==2){
        Bad++;
        cout<<"Bad "<<Bad<<endl;
    }
    else if (rating==3){
        OK++;
        cout<<"OK "<<OK<<endl;
    }
    else if (rating==4){
        Good++;
        cout<<"Good "<<Good<<endl;
    }
    else if (rating==5){
        Great++;
        cout<<"Great "<<Great<<endl;
    }
}
}

void getaverage (){
float average;
average=(1*Terrible+2*Bad+3*OK+4*Good+5*Great)/(Terrible+Bad+OK+Good+Great);
cout<<"average movie ratings :"<<average<<endl;
}



};
int main()
{
    Movie m("thor","pg-13");
    m.setmn("thor");
    m.setmpaa("pg-13");
    cout<<m.getmn()<<endl;
    cout<<m.getmpaa()<<endl;
    for (int i=0;i<5;i++){
    m.AddRating();}
    m.getaverage();

    Movie object("arrival", "pg-13");
    object.setmn("arrival");
    object.setmpaa("pg-13");
    cout<<object.getmn()<<endl;
    cout<<object.getmpaa()<<endl;
    for (int i=0;i<5;i++){
    object.AddRating();}
    object.getaverage();


}
