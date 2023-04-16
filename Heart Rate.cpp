#include <iostream>
using namespace std;


// class
class HeartRates{
   private: 
    std:: string FirstName;
    std:: string LastName;
    int BirthMonth;
    int BirthDay;
    int BirthYear;

  public:
    // constructors
    HeartRates(){
      FirstName = getFirstName();
      LastName = getLastName();
      BirthMonth = getBirthMonth();
      BirthDay = getBirthDay();
      BirthYear = getBirthYear();
    
  }
  // get functions 
  string getFirstName(){
    std::cout << "Enter your first name: ";
    std::cin >> FirstName;
    return FirstName;  
  }
  string getLastName(){
    std::cout << "Enter your last name: ";
    std::cin >> LastName;
    return LastName;
  }
  int getBirthMonth(){
    std::cout << "Enter your birth month: ";
    std::cin >> BirthMonth;
    return BirthMonth;
  }
  int getBirthDay(){
    std::cout << "Enter your birth day: ";
    std::cin >> BirthDay;
    return BirthDay;
  }
  int getBirthYear(){
    std::cout << "Enter your birth year: ";
    std::cin >> BirthYear;
    return BirthYear;
  }
  // Set Functions
  void setFirstName(string FirstName){
    this->FirstName = FirstName;
  }
  void setLastName(string LastName){
    this ->LastName = LastName;
  }
  void setBirthMonth(int BirthMonth){
    this ->BirthMonth = BirthMonth;
  }
  void setBirthDay(int BirthDay){
    this ->BirthDay = BirthDay;
  }
  void setBirthYearh(int BirthYear){
    this ->BirthYear = BirthYear;
  }
  // getAge function
  int getAge(int CurrentDay, int CurrentMonth, int CurrentYear){
  
    //int CurrentYear, CurrentDay, CurrentMonth;
    cout << "Enter the current year: ";
    //cin >> CurrentYear;
   
    int age;

    if(CurrentMonth > BirthMonth){
      age = CurrentYear - BirthYear;
      return age;
   }
   else if((CurrentMonth == BirthMonth) && (CurrentDay >= BirthDay)){
      age = CurrentYear - BirthYear;
      return age;
    }
   else
      age = CurrentYear - BirthYear - 1;
      return age;  
  }
  // getMaxHeartRate function
  int getMaxHeartRate(int age){
  
    int MaxHeartRate = 220 - age;

    return MaxHeartRate;
  }
  // getTargetHeartRate
  float getTargetHeartRate(int age){
    //getMaxHeartRate();
    float max = getMaxHeartRate(age) * .5;

    return max;
  }
    

};

int main() {
  std:: string FirstName;
  std:: string LastName;
  int BirthMonth, CurrentMonth;
  int BirthDay, CurrentDay;
  int BirthYear, CurrentYear;
  
  // personal information
  /*
  std::cout << "Enter your first name: ";
  std::cin >> FirstName;
  std::cout << "Enter your last name: ";
  std::cin >> LastName;
  std::cout << "Your name is " << FirstName << " " << LastName << std::endl;
  std::cout << "\n";
  std::cout << "Enter your birth day: ";
  std::cin >> BirthDay;
  std::cout << "Enter your birth month: ";
  std::cin >> BirthMonth;
  std::cout << "Enter your birth year: ";
  std::cin >> BirthYear;
  */
  HeartRates Hr;
  std::cout << "\n";
  std::cout << "Enter the current day: ";
  std::cin >> CurrentDay;
  std::cout << "Enter the current month: ";
  std::cin >> CurrentMonth;
  std::cout << "Enter the current year: ";
  std::cin >> CurrentYear;
  
  //HeartRates Hr();
  int age = Hr.getAge(CurrentDay, CurrentMonth,CurrentYear);
  std::cout << "Age: " << age << std::endl;
  std::cout << "You are" << " " << age << " " << "years old" << std::endl;

  int maxHeartRate = Hr.getMaxHeartRate(age);
  std::cout << "Maximum heart rate: " << maxHeartRate << std::endl;

  float targetHeartRate = Hr.getTargetHeartRate(age);
  std::cout << "Target heart rate: " << targetHeartRate << std::endl;

  return 0;
}

