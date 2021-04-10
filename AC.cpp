/* C++ Program on Abstract Class and Pure Virtual Function.	*/

#include <iostream>

using namespace std;

class Volume 
{
   public:
      virtual int Vol() = 0; 	// Pure virtual function is declared.

      void Length(int l)
      {
      	length=l;
	  }
	  
	  void Width(int w) 
	  {
         width=w;
      }
      
      void Height(int h) 
	  {
         height=h;
      }
   
   protected:
   	  int length; 
      int width;
      int height;
};

class Cube: public Volume 
{
   public:

      int Vol() 
	  { 
         return (length*length*length); 
      }
};

class Cuboid: public Volume 
{
   public:
      int Vol() 
	  { 
         return (length*width*height); 
      }
};

int main() 
{
	int a,len,wid,hei;
  	Cube C1;
 	Cuboid C2;
	
	cout<<"\n Enter Side Lenght of Cube : ";
	cin>>a;
	cout<<"\n Enter Length of Cuboid : ";
	cin>>len;
	cout<<"\n Enter Width of Cuboid  : ";
	cin>>wid;
	cout<<"\n Enter Height of Cuboid : ";
	cin>>hei;
  	
	C1.Length(a);
  	
  	C2.Length(len);
  	C2.Width(wid);
	C2.Height(hei);

  	cout << "\n Volume of the Cube   is : " <<C1.Vol()<<endl;
  	cout << "\n Volume of the Cuboid is : " <<C2.Vol()<<endl;
  	
	  return 0;
}
