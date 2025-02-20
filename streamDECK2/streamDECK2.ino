/*  
    créateur : FLAHAUT Nolan
    classe : TSTI2D_2
    spécialité : SIN
    date de création : 08/02/2025
    création : Programmation Racc3000
    destination : Mr MARTIN Philipe
*/

#include <ezButton.h>                                               //inclure la librairie "ezButton"
#include <Keyboard.h>                                               //inclure la libraire "Keyboard" #clavier ARDUINO
#include <KeyboardLayout.h>
#include <Keyboard_fr_FR.h>                                         //version clavier ARDUINO fr

  ezButton coller(8);                                               //coller
  ezButton copier(9);                                               //copier
  ezButton couper(6);                                               //couper
  ezButton annuler(10);                                             //annuler
  ezButton sauvegarder(4);                                          //sauvegarder

void setup() {
  coller.setDebounceTime(50);                                       //set debounce time to 50 milliseconds
  copier.setDebounceTime(50);                                       //set debounce time to 50 milliseconds
  couper.setDebounceTime(50);                                       //set debounce time to 50 milliseconds
  annuler.setDebounceTime(50);

  sauvegarder.setDebounceTime(50);                                  //set debounce time to 50 milliseconds
  sauvegarder.setDebounceTime(50);                                  //set debounce time to 50 milliseconds
  sauvegarder.setDebounceTime(50);                                  //set debounce time to 50 milliseconds
  sauvegarder.setDebounceTime(50);                                  //set debounce time to 50 milliseconds
  sauvegarder.setDebounceTime(50);                                  //set debounce time to 50 milliseconds
  sauvegarder.setDebounceTime(50);                                  //set debounce time to 50 milliseconds
  sauvegarder.setDebounceTime(50);                                  //set debounce time to 50 milliseconds
  sauvegarder.setDebounceTime(50);                                  //set debounce time to 50 milliseconds
  sauvegarder.setDebounceTime(50);                                  //set debounce time to 50 milliseconds
}

void loop() {
  Keyboard.begin();                                                 //active le clavier ARDUINO
  
    coller.loop();                                                  //fonction coller
      if(coller.isPressed()) {
        Keyboard.press(KEY_LEFT_CTRL);                              //CTRL
        Keyboard.press('v');                                        //v
        Keyboard.releaseAll();                                      //execute
      }

    copier.loop();                                                  //fonction copier
      if(copier.isPressed()) {
        Keyboard.press(KEY_LEFT_CTRL);                              //CTRL
        Keyboard.press('c');                                        //c
        Keyboard.releaseAll();                                      //execute
      }

    couper.loop();                                                  //fonction couper
      if(couper.isPressed()) {
        Keyboard.press(KEY_LEFT_CTRL);                              //CTRL
        Keyboard.press('x');                                        //x           
        Keyboard.releaseAll();                                      //execute
      }

    annuler.loop();                                                 //fonction annuler
      if(annuler.isPressed()) {
        Keyboard.press(KEY_LEFT_CTRL);                              //CTRL
        Keyboard.press('w');                                        //z
        Keyboard.releaseAll();                                      //execute
      }

    sauvegarder.loop();                                             //fonction sauvegarder
      if(sauvegarder.isPressed()) {
        Keyboard.press(KEY_LEFT_CTRL);                              //CTRL
        Keyboard.press('s');                                        //s
        Keyboard.releaseAll();                                      //execute
      }
  Keyboard.end();                                                   //désactive le clavier ARDUINO
}
