#include <iostream> 
#include <wiringPi.h>

int main(){

std::cout << "hello world \n";
constexpr int pin = 25;
//if(wiringPiSetup() == -1){
//	std::cout << "did not setup\n ";
//}

while(1){

digitalWrite(0, 1);
delay(500);
digitalWrite(0, 0);
std::cout << "is working\n ";
delay(500);
}

std::cin.get();
return 0;
}
