// C++ code
//
#include <string.h>

int num0[] = {1,2,3,4,5,6};
int num1[] = {2,3};
int num2[] = {1,2,4,5,7};
int num3[] = {1,2,3,4,7};
int num4[] = {2,3,6,7};
int num5[] = {1,3,4,6,7};
int num6[] = {1,3,4,5,6,7};
int num7[] = {1,2,3};
int num8[] = {1,2,3,4,5,6,7};
int num9[] = {1,2,3,6,7};
int numdef[] = {8};

int a[] = {1,2,3,5,6,7};
int b[] = {3,4,5,6,7};
int c[] = {1,4,5,6};
int d[] = {2,3,4,5,7};
int e[] = {1,4,5,6,7};
int f[] = {1,5,6,7};
int g[] = {1,2,4,3,6,7};
int h[] = {2,3,5,6,7};
int i[] = {1,4,5};
int j[] = {2,3,4,5};
int k[] = {2,4,5,6,7};
int l[] = {4,5,6};
int m[] = {1,2,3,5,6};
int n[] = {3,5,7};
int nn[]= {1,3,5,7};
int o[] = {1,2,3,4,5,6};
int p[] = {1,2,5,6,7};
int q[] = {1,2,3,6,7};
int r[] = {5,7};
int s[] = {1,3,4,6,7};
int t[] = {4,5,6,7};
int u[] = {3,4,5};
int v[] = {2,3,4,5,6};
int w[] = {1,3,4,5};
int x[] = {5,6,7};
int y[] = {2,3,4,6,7};
int z[] = {1,4,7};
int grado[] = {1,2,6,7};
int suma[] = {2,3,7};
int coma[] = {3};
int guion[] = {7};
int dospts[] = {1,7};
int ptocoma[] = {4,8};
int igual[] = {4,7};
int pto[] = {8};
int bajo[] = {4};
int pregunta[] = {1,2,5,7,8};
int exclamacion[] = {5,6,8};


void setup()
{
  for(int i=1; i< 9;i++){
    pinMode(i, OUTPUT);
  }
}

//prende los pines de acuerdo al array
void desplegar(int pines[], int n){
  //int n = sizeof(pines) / sizeof(pines[0]);
  for (int i=0; i< n; i++){
    digitalWrite(pines[i], HIGH);
  }
}



void cls(){
  for(int i=1; i< 9;i++){
    digitalWrite(i, LOW);
  }
  delay(50);
}

void mostrar(char caracter){
  cls();
  switch(caracter){
  case '0':
	  return desplegar(num0, 6);
  case '1':
      return desplegar(num1, 2);
  case '2':
      return desplegar(num2, 5);
  case '3':
      return desplegar(num3, 5);
  case '4':
      return desplegar(num4, 4);
  case '5':
      return desplegar(num5, 5);
  case '6':
      return desplegar(num6, 6);
  case '7':
      return desplegar(num7, 3);
  case '8':
      return desplegar(num8, 7);
  case '9':
      return desplegar(num9, 5);
  case 'a':
      return desplegar(a, 6);
  case 'b':
      return desplegar(b, 5);
  case 'c':
      return desplegar(c, 4);
  case 'd':
      return desplegar(d, 5);   
  case 'e':
      return desplegar(e, 5);
  case 'f':
      return desplegar(f, 4);
  case 'g':
      return desplegar(g, 6);
  case 'h':
      return desplegar(h, 5);
  case 'i':
      return desplegar(i, 3);   
  case 'j':
      return desplegar(j, 4);
  case 'k':
      return desplegar(k, 5);
  case 'l':
      return desplegar(l, 3);
  case 'm':
      return desplegar(m, 5);  
  case 'n':
      return desplegar(n, 3);   
  case 'ñ':
      return desplegar(nn, 4);   
  case 'o':
      return desplegar(o, 6);
  case 'p':
      return desplegar(p, 5);
  case 'q':
      return desplegar(q, 5);
  case 'r':
      return desplegar(r, 2);  
  case 's':
      return desplegar(s, 5);   
  case 't':
      return desplegar(t, 4);
  case 'u':
      return desplegar(u, 3);
  case 'v':
      return desplegar(v, 5);
  case 'w':
      return desplegar(w, 4);  
  case 'x':
      return desplegar(x, 3);
  case 'y':
      return desplegar(y, 5);  
  case 'z':
      return desplegar(z, 3);
  case '*':
      return desplegar(grado, 4);  
  case '+':
      return desplegar(suma, 3);  
  case ',':
      return desplegar(coma, 1);  
  case '-':
      return desplegar(guion, 1);  
  case ':':
      return desplegar(dospts, 2);  
  case ';':
      return desplegar(ptocoma, 2);  
  case '=':
      return desplegar(igual, 2);  
  case '_':
      return desplegar(bajo, 1);  
  case '.':
      return desplegar(pto, 1);  
  case '?':
      return desplegar(pregunta, 5);  
  case '!':
      return desplegar(exclamacion, 3);  

    default:
      return desplegar(numdef, 1);
  }
}

void loop()
{
  char palabra[] = "aaaaaaaa";
  for(int i=0; i<=strlen(palabra);i++){
    if (palabra[i]== 'n' && palabra[i+1]== 'n'){
      desplegar(nn, 4);
      i++;
    } 
 	else
      mostrar(palabra[i]);
  	delay(1000);
    cls();
  }

}