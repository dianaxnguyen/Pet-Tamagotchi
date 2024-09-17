#include "Art.h"
#include <iostream>
using namespace std;
void Art::drawMenu(){
  cout << endl << endl;
  cout << "Step into Pet Paradise, where your furry friends are excitedly waiting for you!" << endl;
  cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------"<< endl <<  endl;
  cout << "Dog:" <<  endl;
  cout << ",\'.-.\'." << endl;
  cout << "'\\o o/` ,," << endl;
  cout << " { @ } f" << endl;
  cout << " /`-'\\$" << endl; 
  cout << "(_/-\\_)" << endl;
  cout << "Cat:" << endl << endl;
  cout << "|\\---/|" << endl;
  cout << "| o_o |" << endl;
  cout << " \\_^_/" << endl << endl;
  cout << "Bunny:" << endl << endl;
  cout << " (\\__/) " << endl;
  cout << " (•ㅅ•) " << endl;
  cout << " / 　 づ" << endl;
     cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
  
    cout << "Enter 1 to create a new pet!" << endl << endl;
    cout << "Enter 2 to load a saved pet!" << endl << endl;
    cout << "Enter 3 to quit!" << endl << endl;
    cout << "Enter 4 to read the tutorial menu!" << endl << endl;


  }
  void Art::drawDog(){
    cout << ",\'.-.\'." << endl;
    cout << "'\\o o/` ,," << endl;
    cout << " { @ } f" << endl;
    cout << " /`-'\\$" << endl; 
    cout << "(_/-\\_)" << endl;
  }
  void Art::drawCat(){
    cout << "|\\---/|" << endl;
    cout << "| o_o |" << endl;
    cout << " \\_^_/" << endl << endl;
  }
  void Art::drawBunny(){
    cout << " (\\__/) " << endl;
    cout << " (•ㅅ•) " << endl;
    cout << " / 　 づ" << endl;
  }
  void Art::drawEnd(){
    cout << "★─▄█▀▀║░▄█▀▄║▄█▀▄║██▀▄║─★" << endl;
    cout << "★─██║▀█║██║█║██║█║██║█║─★" << endl;
    cout << "★─▀███▀║▀██▀║▀██▀║███▀║─★" << endl;
    cout << "★───────────────────────★" << endl;
    cout << "★───▐█▀▄─ ▀▄─▄▀ █▀▀──█───★" << endl;
    cout << "★───▐█▀▀▄ ──█── █▀▀──▀───★" << endl;
    cout << "★───▐█▄▄▀ ──▀── ▀▀▀──▄───★" << endl;
  }
    void Art::drawTutorial(){
      cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------------";
     cout << endl << endl;                                                                     cout << ",--------.          ,--.                ,--.        ,--." <<  endl;
    cout << "'--.  .--',--.,--.,-'  '-. ,---. ,--.--.`--' ,--,--.|  |" << endl;  
    cout << "   |  |   |  ||  |'-.  .-'| .-. ||  .--',--.' ,-.  ||  |" << endl;
    cout << "   |  |   '  ''  '  |  |  ' '-' '|  |   |  | '-'  ||   |" << endl;
    cout << "   `--'    `----'   `--'   `---' `--'   `--' `--`--'`--'" <<  endl;
    cout << ",--.   ,--." << endl;                                               
    cout << "|   `.'   | ,---. ,--,--, ,--.,--.,-----.,-----.,-----." << endl;    
    cout << "|  |'.'|  || .-. :|      |  ||  |'-----''-----''-----' " << endl;   
    cout << "|  |   |  |   --.|  ||  |'  ''  '" << endl;                        
    cout << "`--'   `--' `----'`--''--' `----'" <<  endl;             


    cout << endl << endl << "Pet Paradise is a tamagotchi game where you are given the option to choose between 3 pets, a dog, a cat, and a bunny." << endl << endl;
    cout << "Your goal in the game is to care for your chosen pet by giving it a name, feeding it, playing with it, and more." << endl << endl;
    cout << "Each pet comes with unique characteristics such as hunger, tiredness, and happiness, reflecting their individual nature." << endl << endl;
    cout << "These attributes fluctuate as you progress through in-game hours, affecting your pet's well-being." << endl << endl;
    cout << "Take actions like feeding your pet to reduce hunger or playing with it to boost happiness." << endl << endl;
    cout << "Select your lifelong companion and ensure their well-being in Pet Haven!" << endl << endl;
    cout << "Enter any key to return to menu!" << endl << endl;
    string key;
    cin >> key;

  }
void Art::drawEat(){
  cout << " ,--./,-." << endl;
   cout <<  "/ #      " << endl;
  cout << "|       |" << endl;
   cout << "          / " << endl;   
   cout << " `._,._,'" << endl;
}
void Art::drawSleep(){
  cout << "   /'''''/|" << endl;
 cout << "  /     /#|---(ZZZZZZzzzzZZZZZzzzzzzzzz)" << endl;
cout << " /_____/##|_____ " << endl;  
cout << " |     |##/    /" << endl;
cout << " |     |#/    /" << endl;
cout << " |_____|/____/" << endl;

}
void Art::drawPlay(){
 cout << "    _.-'___'-._" << endl;
  cout << "  .'--.`   `.--'." << endl;
   cout << " /.'   \\   /   `.\\" << endl;
  cout << "| /'-._/```_.-'\\ |" << endl;
  cout << "|/    |     |   \\|" << endl;
  cout << "| \\ .''-._.-''. /|" << endl;
   cout << " \\|     |     | /" << endl;
   cout << " '.'._.-'-._.'.'" << endl;
  cout << "   '-:_____;-'" << endl;
}
void Art::drawTrain(){
cout << " _       _ " << endl;
cout << "(_'-----'_)" << endl;
cout << "(_.'    ._)" << endl;
  }

void Art::drawBath() {
    cout << "___________" << endl;
    cout << ".;---------./|" << endl;
    cout << "// S O A P // |" << endl;
    cout << "|'---------'|  /" << endl;
    cout << "|           | /" << endl;
    cout << "'-----------'`" << endl;
  }