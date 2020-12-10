// Class Exercise 1

#include  <iostream>
using namespace std;

// a simple class, declaration part

class  rect

    {

        int  length;

        int  width;

// private by default

     public:

        rect(void);

       // constructor declaration

        void   set(int new_length, int new_width);

      // method

       int   get_area(void){return (length * width);}

      // destructor method

       ~rect(void);

     // destructor declaration

   };



    // implementation part

     rect::rect(void)

     {    length = 8;

           width = 8;

     }

    // this method will set a rectangle size to the two input

    // parameters by default or initial value,



    void  rect::set(int  new_length, int  new_width)

     {

          length = new_length;

          width = new_width;

     }


    rect::~rect(void)

    // destructor implementation
     {    length = 0;

         width = 0;

     }



   // main program

    int  main()

     {

           rect   small, medium, big;

          // three objects instantiated of type class rectangle



          small.set(5, 7);

         // new length and width for small rectangle

           big.set(15, 20);

         // new length and width for big rectangle

         // the medium Rectangle uses the default

          // values supplied by constructor (8,8)



          cout << "Using new value-->small.set(5, 7)\n";

           cout <<"Area of the small rect is = " << small.get_area()<<"\n\n";

          cout <<"Using default/initial value-->medium.set(8, 8)\n";

           cout <<"Area of the medium rect is = " << medium.get_area()<<"\n\n";
           cout <<"Using new value-->big.set(15, 20)\n";

          cout <<"Area of the big rect is = " << big.get_area() << "\n";


          // system("pause");

 }
