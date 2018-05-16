/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
const int pin = 8;   // pin for speaker

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
 
  punt();
  espaiL();
  punt();
  ratlla();
  punt();
  punt();

  espaiP();


  ratlla();
  punt();
  ratlla();
  punt();
  espaiL();
  ratlla();
  ratlla();
  ratlla();
  espaiL();
  ratlla();
  punt();
  punt();
  espaiL();
  punt();
  punt();
  espaiL();
  ratlla();
  ratlla();
  punt();
  espaiL();
  ratlla();
  ratlla();
  ratlla();




  espaiP();




  ratlla();
  ratlla();
  espaiL();
  ratlla();
  ratlla();
  ratlla();
  espaiL();
  punt();
  ratlla();
  punt();
  espaiL();
  punt();
  punt();
  punt();
  espaiL();
  punt();

  
  espaiP();
  
  
  
}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}

