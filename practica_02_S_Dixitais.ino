/*	
	Creador: David Lema González Fecha: 25/11/2026
	Funcionalidad: Selección de colores para encendido y poarpadeo de un LED correspondiente	
*/

String color = "NULL"; //Declarar variables
int colorPin = 0; //Declarar variables

void setup()
{
  Serial.begin (9600); //Encender la consola
  //Declarar pines
 pinMode (8, OUTPUT);
 pinMode (9, OUTPUT);
 pinMode (10, OUTPUT);
 pinMode (11, OUTPUT);
 pinMode (12, OUTPUT);
  
  	Serial.println ("Introduzca uno de los siguientes colores:"); //Menu para colores
    Serial.println ("--->Blanco<---"); //1
  	Serial.println ("---->Verde<---"); //2
    Serial.println ("---->Rojo<----"); //3
    Serial.println ("--->Naranja<--"); //4
    Serial.println ("---->Azul<----"); //5
    Serial.println ("-->Amarillo<--"); //6
}

void loop()
{
  	color = Serial.readString();
  
  if (color == "Blanco")
  {
    Serial.println(">Blanco");
  	colorPin = 1;
  } else 
  {
  	if (color == "Verde")
    {
      	Serial.println(">Verde");
    	colorPin = 2;
    } else
    {
     if (color == "Rojo") 
      {
       	Serial.print(">Rojo<");
      	colorPin = 3;
      } else
      {
      	if (color == "Naranja")
        {
          	Serial.println(">Naranja<");
        	colorPin = 4;
        } else
        {
        	if (color == "Azul")
            {
              	Serial.println(">Azul<");
            	colorPin = 5;
            } else
            {
            	if (color == "Amarillo")
                {
                  	Serial.println(">Amarillo<");
                	colorPin = 6;
                } else
                {
                  	colorPin = 0;
                	
                }
            } 
        }
      }
    }
  }
  
  	switch (colorPin)
    {
      	default:
      		for (int i = 8; i<14; i++)
            {
              digitalWrite (i, LOW);
            }
      	break;
      	case 1:
      		digitalWrite (13, HIGH);
      		delay(500);
      		digitalWrite (13, LOW);
      	break;
      	case 2:
      		digitalWrite (12, HIGH);
      		delay(500);
      		digitalWrite (12, LOW);
      	break;
      	case 3:
      		digitalWrite (11, HIGH);
      		delay(500);
      		digitalWrite (11, LOW);
      	break;	
      	case 4:
      		digitalWrite (10, HIGH);
      		delay(500);
      		digitalWrite (10, LOW);
      	break;
      	case 5:
      		digitalWrite (9, HIGH);
      		delay(500);
      		digitalWrite (9, LOW);
      	break;
      	case 6:
      		digitalWrite (8, HIGH);
      		delay(500);
      		digitalWrite (8, LOW);
      	break;
    }
}

