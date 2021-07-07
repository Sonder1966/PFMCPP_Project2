#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 

    int
    float 
    bool
    char
    void
    double
 
 
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    int numbers = 0;
    int threshold = 2;
    int ratio = 4;

    float height = 1.3f;
    float width = 1.8f;
    float length = 1.9f;

    double reverbTime = 1.34;
    double reverbLength = 1.346;
    double reverbEr = 1.566;

    bool distortion = false;
    bool delay = true;
    bool equalistion = true;

    char initial = 'a';
    char letter = 'b';
    char alpha = 'c';

    ignoreUnused (numbers,threshold,ratio, height,width,length,reverbTime,reverbLength,reverbEr,distortion,delay,equalistion, initial, letter, alpha);

    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int reverbParameters (int ER = 3, int time = 8)
{
    ignoreUnused (ER,time);
    return {};
}
/*
 2)
 */
int compressorParameters (int thres = 4, int ratio = 2)
{
    ignoreUnused (thres,ratio);
    return{};
}
/*
 3)
 */
float delayTime (float time1= 32.4f, float time2 = 34.3f)
{
ignoreUnused (time1,time2);
    return{};
}

/*
 4)
 */
float chorusEffect (float mix = 99.2f, float mod = 33.2f)
{
    ignoreUnused (mix,mod);
    return{};
}
/*
 5)
 */
double modulation (double time = 21.2, double depth =12.2)
{
   ignoreUnused (time,depth);
    return{}; 
}
/*
 6)
 */
double distortion  (double mix, double amount = 99.9, double depth =9.9)
{
    ignoreUnused (mix,amount,depth);
    return{}; 
}
/*
 7)
 */
bool effectOn (int isOn, int isOff)
{
    ignoreUnused (isOn,isOff);
    return{}; 
}
/*
 8)
 */
bool processSignal (double amount, double width)
{
    ignoreUnused (amount,width);
    return{}; 
}
/*
 9)
 */
char message (float letter)
{
    ignoreUnused (letter);
    return{}; 
}
/*
 10)
 */
char returnAnswer ( int alphabet)
{
    ignoreUnused (alphabet);
    return{}; 
}


/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    //1)
    auto reverb = reverbParameters (7, 20);
    //2)
    auto compress = compressorParameters (100, 0);
    //3)
    auto delay = delayTime (21.3, 33.3);
    //4)
    auto chorus = chorusEffect (21.3f, 44.2f);
    //5)
    auto mod = modulation (21.1, 45.3);
    //6)
    auto dist = distortion (1, 0);
    //7)
    auto FX = effectOn (0,1);
    //8)
    auto signal = processSignal (23.2, 78.2);
    //9)
    auto msg = message (33.3f);
    //10)
    auto answer =returnAnswer (1);
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    
    return 0;    
}
 