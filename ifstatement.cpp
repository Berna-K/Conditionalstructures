        #include <iostream>
        using namespace std;
        int main()
        {
int age;
cout<<"Please enter the age: ";
cin>>age;
if(age>=4 && age<= 10)
{
    //output if logical statement is true
    cout<<"Admitted! Proceed to registration";
}else{

    //output if logical statement is false
    cout<<"Declined! Minimum age not rached.";
}
            return 0;
        }