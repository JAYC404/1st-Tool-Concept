/* Don't Expect too much, this is my first Program! */

#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    cout << "DISCLAIMER: THIS PROGRAM IS NOT WORKING! EDUCATIONAL PURPOSES ONLY!\n" << endl;
    
    cout << "J-Development Test Tool\n" << endl;
    cout << "Choose an Option: [1/2/3]" << endl;
    cout << "1: Login" << endl;
    cout << "2: Register" << endl;
    cout << "3: Cancel Subscribtion" << endl;
    
  int aktion;
  cin >> aktion;
  
  if(aktion == 1) //beginning of aktion 1
  {
      cout << "Your Choice: Login\n" << endl;
      cout << "Enter your Username:" << endl;
      string usernamelogin;
      cin >> usernamelogin;
      
      if(usernamelogin == "Jay"){ // Change "Jay" to any username you want!
      	      cout << "Enter your Password:" << endl;
     string passwordlogin;
     cin >> passwordlogin;
     cout << "Logging in..." << endl;
     if(passwordlogin == "J-Development"){ //Change "J-Development" to any password you want!
     	this_thread::sleep_for(chrono::milliseconds(1000)); //makes the program wait for 1000 milliseconds
     cout << "Successfully logged in!" << endl;
     cout << "Injecting nothing..." << endl; // literally injects nothing, dont worry!
     this_thread::sleep_for(chrono::milliseconds(1000)); 
     cout << "Sucessfully injected nothing!";
     cout << "		//Nothing got injected, dont worry!\n" << endl;
     	} else {
     		this_thread::sleep_for(chrono::milliseconds(1000));
     		cout << "Invalid Login\n" << endl; //entered wrong username and password
     		}
     
      	} else {
      		cout << "This Username does not exist\n" << endl; // entered wrong username
      		}
      

  } //end of aktion 1
  
  if(aktion == 2) { //beginning of aktion 2
  cout << "Your Choice: Register\n" << endl;
  cout << "Enter your Licence:" << endl;
      
      string licencevalid;
      cin >> licencevalid;
      if(licencevalid == "KEY-JAY"){ //Change "KEY-JAY" to any key you want to use
      cout << "Checking Licence..." << endl;	this_thread::sleep_for(chrono::milliseconds(1000)); //makes the Program wait for 1000 milliseconds
      cout << "Successful!" << endl;
      	cout << "Enter the Username you want to use:" << endl; //This username isn't doing anything'
      string usernameregister;
      cin >> usernameregister;
      cout << "Enter the password you want to use:" << endl; //this password isn't doing anything'
      string passwordregister;
      cin >> passwordregister;
      cout << "Successfully registered. You can login now.\n" << endl;
  } else {
  	cout << "Checking Licence..." << endl;
  	this_thread::sleep_for(chrono::milliseconds(1000));
  	cout << "Invalid Licence\n" << endl; //entered wrong licence
  	}
  } //end of aktion 2
  
  if(aktion == 3) //beginning of aktion 3
  {
      cout << "Your Choice: Cancel Subscription\n" << endl;
      cout << "Enter your Licence:" << endl;
      string licencedelete;
      cin >> licencedelete;
      cout << "Checking Licence..." << endl;
      this_thread::sleep_for(chrono::milliseconds(1000)); // makes the programm wait for 1000 milliseconds
      
      if(licencedelete == "KEY-JAY"){ //Change "KEY-JAY" to any key you want to use
      	cout << "Are you sure that you want to Cancel your Subsribtion? NO REFUND (y/n)" << endl;
      string yesno;
      cin >> yesno;
      if(yesno == "y") //Decides if the Subscription gets deleted
      {
          cout << "Your Subscription got deleted successfully." << endl;
      } else{
          cout << "Canceled the Process\n" << endl;
      }
      } else{
      	cout << "Invalid Licence\n" << endl;
      	}
      
      
  } //end of aktion 3
  
  cout << "More and better Programs coming soon!\n" << endl;
  cout << "Press any key to close this Programm" << endl;
  cin.get(); //user has to press a button before the programm closes
  return 0;
   
}