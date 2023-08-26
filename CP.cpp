                         /*  Some Intro To Computer Programming */
        // HLL(High Level Language Consist of Command, Syntax & logic)
        // Must develop flowchart or Pseudocode before writing any Program(Check dedicated folder)
        //VARIABLES are (Named Container), can't start with number or Upercase. e.g int a=2;
        /*  Data type of variables in Bytes are int=float=4, char=bool=1, double=8, void=0
            Type modifiers - modifies the fundamental data types e.g signed or unsigned int, short or long.
            Derived Data types - derived from fundamental (or built-in) data types e.g arrays, pointers, function, reference.
            User-Defined Data Types - defined by user itself e.g class, structure, union, enumeration, etc.*/

                                    // Syntax

/*
                             //1. Hello World Program

# include<iostream> //pre-processor directive - used to include files in our program. Standard file which is necessary for the declarations of any basic/standard library
using namespace std; //All elements of the standard C++ library are declared within namespace. Here we are using std namespace.

//The execution of any C++ program starts with the main function. ‘int’ is the return value of this function.

int main(){ //The curly brackets are used to indicate the starting and ending point of any function.
    
    cout << "Uncomment Any Program before Reading!\n"; //cout is the standard output stream . It is declared in the iostream standard file within the std namespace. The text between quotations will be printed on the screen.
    
    return 0; // return signifies the end of a function. Here the function is main, so when we hit return 0, it exits the program.
}

*/

            /*-----------------------END OF PROGRAM 01------------------------*/

                                    // Decison Making

/* 

//(if/else) - The if block is used to specify the code to be executed if the condition specified in if is true, the else block is executed otherwise.

                        //2. Voting Age Program (Only Two Possibilities)
#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"Please Enter Your Current Age: ";
    cin>>age;
    if(age>=18){
        cout<<"Congrats! You are Eligible.";
    }else{
        cout<<"We are Sorry but you can't vote this year.";    
    }
    
    return 0;
}

*/

            /*-----------------------END OF PROGRAM 02------------------------*/


/*

//(else if) - To specify multiple if conditions, we first use if and then the consecutive statements use else if.

                         //3. Compare two numbers with three possiblities(Greater, Smaller or equal)
#include<iostream>
using namespace std;

int main(){

    int number1, number2;
    cout<<"Please Enter First Number: ";
    cin>>number1;
    cout<<"Please Enter Second Number: ";
    cin>>number2;

    if(number1>number2){
        cout<<"First Number is Greater."<<endl;
    }else if (number1<number2)
    {
        cout<<"Second Number is Greater."<<endl;
    }else if (number1==number2)
    {
        cout<<"Both Given Numbers are Equal."<<endl;
    }else
    {
        cout<<"Error! Something Went Wrong, Kindly Try Again With Different Values Please.";
    }
    
    return 0;
}

*/

            /*-----------------------END OF PROGRAM 03------------------------*/


/*

//nested if - To specify conditions within conditions we make the use of nested ifs.

                        // 4. Performing Calculation on Two Numbers
#include<iostream>
using namespace std;

int main(){

    signed int number1, number2, choice, answer;
    cout<<"Please Enter Your First Number: ";
    cin>>number1;
    cout<<"Please Enter Your Second Number: ";
    cin>>number2;
    cout<<"To Calculate Please Press The Following Buttons:"<<endl<<"1 For Addition."<<endl<<"2 For Substraction."<<endl<<"3 For Multiplication"<<endl<<"4 For Division"<<endl;
    cin>>choice;
    
    if(choice>4 || choice<1){
        cout<<"Something Went Wrong With The Choice That You've Entered, Please Run The Program Again!"<<endl;
    }else if (choice==1)
    {
        answer=number1+number2;
        cout<<"The Calculated Result of Given Two Number's Addition is:"<<answer<<endl;
    }else if (choice==2)
    {
        answer=number1-number2;
        cout<<"The Calculated Result of Given Two Number's Subtraction is:"<<answer<<endl;
    }else if (choice==3)
    {
        answer=number1*number2;
        cout<<"The Calculated Result of Given Two Number's Multiplication is:"<<answer<<endl;
    }else if (choice==4)
    {
        answer=number1/number2;
        cout<<"The Calculate Result of Given Two Number's Division is:"<<answer<<endl;
    }

    return 0;
}

*/

            /*-----------------------END OF PROGRAM 04------------------------*/


                                    // Repitition (Loops)

//The for loop is used when you know the number of iterations you want to perform. It has three parts: initialization, condition, and increment/decrement.
/*
for (initialization; condition; increment/decrement) {
    // Code to be executed in each iteration
}
*/

                    //5. Welcoming Any Gender for Repeated Times

/*

#include<iostream>
using namespace std;

int main(){

    int repeat;
    string name;
    bool gender;
    cout<<"Enter Your Name Please: ";
    getline(cin, name);
    cout<<"Select Your Gender, 0 for Women & 1 for Men ";
    cin>>gender;
    cout<<"How Many Times Would You Like Like To Be Welcomed?: ";
    cin>>repeat;

    for(int i=1;i<=repeat;i++){
        if (gender==true)
        {
            cout<<"Welcome Mr "<<name<<"."<<endl;
        }else
        {
            cout<<"Welcome Mrs "<<name<<"."<<endl;
        }
    }

    return 0;
}

*/

            /*-----------------------END OF PROGRAM 05------------------------*/


//The while loop is used when you want to execute a block of code as long as a certain condition is true.

/*
while (condition) {
    // Code to be executed as long as the condition is true
}
*/

                //6. Taking an integer as input and calculates the sum of its digits.

/*

#include<iostream>
using namespace std;

int main(){

    int input_number, remainder, sum =0;
    cout<<"Enter The All Digits That You Want to calculate the Sum of: ";
    cin>>input_number;
    

    while(input_number>0){
        remainder=input_number%10;
        sum=sum+remainder;
        input_number=input_number/10;
    }
    cout<<sum<<endl;

    return 0;
}

*/

            /*-----------------------END OF PROGRAM 06------------------------*/

/*
do {
// body of loop(executed at least once);
}
while (condition);
*/

    //Program - 07 (Asking the user to enter positive integers (greater than zero) continuously until they enter a negative integer. After the user stops entering positive integers, the program should calculate and display the sum of all the positive integers entered.)
#include<iostream>
using namespace std;

int main(){
    int positive, sum=0;
    cout<<"Please Enter Positive Integers To Calculate Sum of: ";
    do
    {
        cin>>positive;
        sum = sum + positive;

    } while (positive!=0);
    cout<<"Sum Of All The Given Positive Integers is: "<<sum<<endl;
    return 0;
}
