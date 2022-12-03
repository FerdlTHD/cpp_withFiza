#include<iostream>
using namespace std;

class Semester
{
public:
   // string season;
    string lectures[5]={"Math_I", "Math_II", "c++", "AI", "Innovationsmanagement"};
};

class SummerSemester: public Semester
{
    public:
        string selectedLectures[5];
};

class WinterSemester: public Semester
{
    public:
       string selectedLectures[5];
 };

void input_function(class SummerSemester); //** signature of function
void input_function(class WinterSemester); //** signature of function

int main(){
    SummerSemester obj1;
    WinterSemester obj2;
    int semester;

    cout<<"Press 1 for summer or 2 for winter\n";
    cin>>semester;
    if (semester==1){
    //    obj1.season = "summer";
        input_function(obj1); //calling the function
    }
    else
     //   obj1.season = "winter2";
        input_function(obj2);

    return 0;
}

void input_function( class SummerSemester obj2){


        int count=0;
        string input;
    bool x_signal = false;

    cout<<"List of Subjects:\n";
        for( int i = 0; i < 5; i++){
            cout<<obj2.lectures[i]<<endl;//display all available lectures
        }
        cout<<"\nChoose the lectures that want to do this semester:\n";
        cout<<"Choose 0 to end.\n";

       int i = 0;

       do{
        //Take input from the user
        cin>>input;
       //Match user input with available lectures
        for ( int j = 0; j < 5; j++){

                if (input != obj2.selectedLectures[j]){

                    if (input == obj2.lectures[j])
                        //&& input != "0")
                    {
                        obj2.selectedLectures[count] = input;       //store the values from input selected lectures
                        cout<<"input successfuly saved\n";
                        count++;
                        x_signal = true;
                        break;


            }//END IF

                         else{
                cin.clear();  x_signal=false;
            }
                }
            else{
                cout<<"input already saved\n";
                break;
            }

        }//END OF FOR

        if (x_signal == false){
            if (input != "0")
                    cout<<"\nPlease take only available lectures!";
        }
        if ( input =="0" && i > 0    ){
            break;
        }

        if (input =="0" && i == 0    ){
            cout<<"\nChoose MINIMUN one lecture:\n";
            input = -1;
        }

        i++;
       }
            while( input != "0" && count < 5 );      // do while end here


            //display selected subjects
          for( int i = 0; i < 5; i++){
            cout<<obj2.selectedLectures[i]<<endl;
        }
}


void input_function( class WinterSemester obj2){


        int count=0;
        string input;
    bool x_signal = false;

    cout<<"List of Subjects:\n";
        for( int i = 0; i < 5; i++){
            cout<<obj2.lectures[i]<<endl;//display all available lectures
        }
        cout<<"\nChoose the lectures that want to do this semester:\n";
        cout<<"Choose 0 to end.\n";

       int i = 0;

       do{
        //Take input from the user
        cin>>input;
       //Match user input with available lectures
        for ( int j = 0; j < 5; j++){

                if (input != obj2.selectedLectures[j]){

                    if (input == obj2.lectures[j])
                        //&& input != "0")
                    {
                        obj2.selectedLectures[count] = input;       //store the values from input selected lectures
                        cout<<"input successfuly saved\n";
                        count++;
                        x_signal = true;
                        break;


            }//END IF

                         else{
                cin.clear();  x_signal=false;
            }
                }
            else{
                cout<<"input already saved\n";
                break;
            }

        }//END OF FOR

        if (x_signal == false){
            if (input != "0")
                    cout<<"\nPlease take only available lectures!";
        }
        if ( input =="0" && i > 0    ){
            break;
        }

        if (input =="0" && i == 0    ){
            cout<<"\nChoose MINIMUN one lecture:\n";
            input = -1;
        }

        i++;
       }
            while( input != "0" && count < 5 );      // do while end here


            //display selected subjects
          for( int i = 0; i < 5; i++){
            cout<<obj2.selectedLectures[i]<<endl;
        }
}
