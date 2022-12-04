#include<iostream>
using namespace std;

class Course3 //3 semester
{
public:
    string lectures[12]={"A_I","A_II","B_I","B_II","C","D","E","F","G","H","I","J"}; //available lectures
   // string separate arrays to store lectures of each semesters;
    string firsts[12];
    string seconds[12];
    string thirths[12];
};
void input_function(class Course3); //** signature of function
//void input_function(class WinterSemester); //** signature of function

int main(){

    Course3 obj1;
    int course;

    cout<<"Choose the kind of your course:\n";
    cin>>course;
    if (course==3){
        input_function(obj1); //calling the function
    }
    else
     //   obj1.season = "winter2";
//        input_function(obj2);
    cout<<"invalid input";

    return 0;
}

void input_function( class Course3 obj2){

    int count=0;
    string input;
    bool x_signal = false;

    cout<<"List of Subjects:\n";
        for( int i = 0; i < 12; i++){
            cout<<obj2.lectures[i]<<endl;//display all available lectures
        }
        cout<<"\nChoose the lectures that want to do this course:\n";
        cout<<"\nChoose the lectures that want to do in first semester:\n";
        cout<<"Choose 0 to end.\n";

       int i = 0;

       do{
        //Take input from the user
        cin>>input;
       //Match user input with available lectures
        for ( int j = 0; j < 12; j++){

                if (input != obj2.firsts[j]){

                    if (input == obj2.lectures[j])
                        //&& input != "0")
                    {
                        obj2.firsts[count] = input;       //store the values from input selected lectures
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
          for( int i = 0; i < 12; i++){
            cout<<obj2.firsts[i]<<endl;
        }
}

/*
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

*/







