#include <iostream>
#include <cmath>

using namespace std;

// in cpp there are some math already included like min and max, but include cmath into your cpp file can give you many more things to do with math



void cpp_math(){


    //      using max function and then intigers inside () to tell it which numbers it has to look at and tell me which is the max number
    cout << max(5,10);
    
    
    // Just making space so it looks nice in the terminal
    string x = "\n";
    cout << x;
    
    
    // We can do the same with min and it will return the min number
    cout << min(5,10);

    // Squar root
    cout << sqrt(64);

    
    cout << x;
    
    
    // Rounding up or down
    cout << round(2.6);
    
    cout << x;

    // In cpp math we can also get the squar root, round up and down and much much more shown in the examples under with cmath.

    //abs(x)  	//Returns the absolute value of x
    //acos(x) 	//Returns the arccosine of x
    //asin(x) 	//Returns the arcsine of x
    //atan(x)  //Returns the arctangent of x
    //cbrt(x)	    //Returns the cube root of x
    //ceil(x) 	//Returns the value of x rounded up to its nearest integer
    //cos(x)  	//Returns the cosine of x
    //cosh(x)	    //Returns the hyperbolic cosine of x
    //exp(x)	    //Returns the value of Ex
    //expm1(x)    	//Returns ex -1
    //fabs(x)	    //Returns the absolute value of a floating x
    //fdim(x, y)  	//Returns the positive difference between x and y
    //floor(x)	    //Returns the value of x rounded down to its nearest integer
    //hypot(x, y)	    //Returns sqrt(x2 +y2) without intermediate overflow or underflow
    //fma(x, y, z)    	//Returns x*y+z without losing precision
    //fmax(x, y)  	//Returns the highest value of a floating x and y
    //fmin(x, y)  	//Returns the lowest value of a floating x and y
    //fmod(x, y)	    //Returns the floating point remainder of x/y
    //pow(x, y)	    //Returns the value of x to the power of y
    //sin(x)	    //Returns the sine of x (x is in radians)
    //sinh(x)	    //Returns the hyperbolic sine of a double value
    //tan(x)	    //Returns the tangent of an angle
    //tanh(x)	    //Returns the hyperbolic tangent of a double value


}


int main(){
    cpp_math();

}