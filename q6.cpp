/*6.1.  Write the ZooAnimal inline member function reptWeightDate.  It
should simply return the weightDate data member.*/

   enum scale {ounces, kilograms};
 class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
      ZooAnimal *mother;
    public:
      void Create (char*, int, int, int); // create function
      void Destroy (); // destroy function 
      void isMotherOf (ZooAnimal*);
      void changeWeight (int pounds);
      inline void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      void reptWeight (scale which);
      inline int reptWeightDate ();
      int daysSinceLastWeighed (int today);
   };


  

//inline member function reptWeightDate.
inline int ZooAnimal::reptWeightDate(){

return weightDate;
} 
//.......................................................................
/*6.2.  Modify the prototype for changeWeightDate below to make it the
appropriate single line inline member function changeWeightDate.  The
single line needed should set the data member weightDate equal to the
parameter today.*/
inline void ZooAnimal:: changeWeightDate (int today){
	weightDate=today;
}
   
//.......................................................................
/*6.3.  Write the ZooAnimal member function isMotherOf.  It needs only a
single statement that makes the mother data member of the ZooAnimal
object parameter a pointer to the ZooAnimal object for which this
function is called.*/

  void ZooAnimal::isMotherOf(ZooAnimal* pointer){
	mother=pointer;
}



