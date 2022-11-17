        #include <iostream>
        using namespace std;
        int main()
        {
int age;
string ineterest;
cout<<"Please enter the age: ";
cin>>age;

if(age>=4 && age<= 10)
{
    //output if logical statement is true
    //cout<<"Admitted! Proceed to registration";
    cout<<"Please enter the childs interest: ";
cin>>ineterest;
    if(ineterest=="soccer"){
        //output if soccer
        cout<<"Assign to soccer play group";
    }
    else if(ineterest=="art"){
        //output if art
        cout<<"Assign to art play group";
    }else{
        //output if other
        cout<<"Assign to other play group";
    }
}else{

    //output if age is invalid
    cout<<"Child age input is invalid.";
}
            return 0;
        }