/*5.1 The ZooAnimal class definition below is missing a prototype for
the Create function.  It should have parameters so that a character
string and three integer values (in that order) can be provided when
it is called for a ZooAnimal object.  Like the Destroy function, it
should have return type void.  Write an appropriate prototype for the
ZooAnimal Create function.*/

#include<iostream>
using namespace std;



   class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Destroy (); // destroy function
      char* reptName ();
      int daysSinceLastWeighed (int today);
   
	void create(char* str,int cn,int wd,int w);

};
//class end.............................................................
/*5.2 Write a function header for the ZooAnimal class member function
daysSinceLastWeighed.  This function has a single integer parameter
today and returns an integer number of days since the animal was last
weighed.*/

void ZooAnimal:: create(char* str,int cn,int wd,int w){
name=str;
cageNumber=cn;
weightDate=wd;
weight=w;
}

//define member function
   void ZooAnimal::Destroy ()
   {    
    delete [] name;
   }

   // -------- member function to return the animal's name
   char* ZooAnimal::reptName ()
   {
    return name;
   }
   
   // -------- member function to return the number of days
   // -------- since the animal was last weighed

int ZooAnimal:: daysSinceLastWeighed(int today)
   {
    int startday, thisday;
//** Edits on Nov 7, 2017
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday) 
        thisday += 360;
    return (thisday-startday);

if (today < weightDate) 
        today += 360;
      return (today-weightDate);
   }


//..........................................................................
/*5.3  In the main function there is a cout statement that attempts to
print the animal's name.  However, it is not allowable because it
attempts to access the private data member called name.  Modify that
statement so that it uses a public member function that returns the
ZooAnimal's name.*/

   

   // -------- member function to return the animal's name
  
   
   // ========== an application to use the ZooAnimal class
   int main ()
   {
    ZooAnimal bozo;
    bozo.create ("Bollzo", 408, 1027, 400);//bozo, it is an object also

    cout << "This animal's name is " << bozo.reptName()<< endl<<endl;
	
    bozo.Destroy ();
	return 0;
   }






