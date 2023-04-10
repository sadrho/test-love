#include <stdio.h>
#include <stdbool.h>

//FUCK YEAH! I DID IT!!!!!
//check to see if the year is a leap year or not
bool isLeapYear(int year){
  if (year%4 !=0 && year %400 !=0){
    return 0;
  }else{
    return 1;
  }
}
//modifing the date to advance it to a number set by the user
void addDaysToDate(int* monthPtr,int *dayPtr, int *yearPtr, int daysToAdd){

*dayPtr += daysToAdd;
while(*dayPtr > 31){
  

  
  switch (*monthPtr){
    case 1:
    *monthPtr +=1;
    *dayPtr -= 31;
    continue;
    case 2:
    if(isLeapYear(*yearPtr)){
      *monthPtr +=1;
      *dayPtr -= 29;
      continue;
    }else{
      *monthPtr +=1;
      *dayPtr -= 28;
      continue;
    }
    case 3:
    *monthPtr +=1;
    *dayPtr -= 31;
    continue;
    case 5:
    *monthPtr +=1;
    *dayPtr -= 31;
    continue;
    case 7:
    *monthPtr +=1;
    *dayPtr -= 31;
    continue;
    case 8:
    *monthPtr +=1;
    *dayPtr -= 31;
    continue;
    case 10:
    *monthPtr +=1;
    *dayPtr -= 31;
    continue;
    case 12:
    *monthPtr +=1;
    *dayPtr -= 31;
    continue;
    default:
    *monthPtr +=1;
    *dayPtr -= 30;
    
  }
 
  } if(*monthPtr>12){
    *monthPtr -= 12;
    *yearPtr +=1;
}
}


//attempt at advancing the date given by the user... a failed attempt...
  // *dayPtr += daysToAdd;
  // while( *dayPtr > 31){
//  if(*monthPtr %2 != 0 && *dayPtr > 31){
//     *monthPtr +=1;
//     *dayPtr -= 31;
//   }else if (*monthPtr == 2 && isLeapYear(*yearPtr) == true){
//     *monthPtr +=1;
//     *dayPtr -= 29;
//   }else if (*monthPtr ==2 && isLeapYear(*yearPtr) == false){
//     *monthPtr +=1;
//     *dayPtr -= 28;
//   }else{
//     *monthPtr +=1;
//     *dayPtr -=
//   }
//   }

  // }else if(*dayPtr>31 && *monthPtr%2 !=0){
  //   *monthPtr += 1;
  //   *dayPtr -= 31;
  //   return *monthPtr ,*dayPtr;
  //  }


  
  
  


  
// The section of the code where I get user input and return the requested data.
int main() {
  int month;
  int year;
  
  int *monthPtr= &month;
  int day;
  int *dayPtr = &day;
  int advance;
  int newYear;
  int* yearPtr = &year;
  
  printf("Year to test?\n");
  scanf("%d", &year);

  printf("%d\n",isLeapYear(year));

  printf("Enter today date, please.\n");
  printf("Use the format mm/dd/yyyy include / to seperate the portions of the date.\n");
  scanf("%d /%d /%d", &month, &day,&newYear);
  printf("How many days to advance by?");
  scanf("%d",&advance);
  addDaysToDate(monthPtr,dayPtr,yearPtr,advance);
  printf("%d/%d/%d",month,day, year);
return 0;
}