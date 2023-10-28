#include<iostream>
#include<GL/glut.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>





void MULE(void){
	glClearColor(0.0,0.0,0.0,0.0);
	glColor3f(1.0,0.0,0.0);
	glPointSize(40);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,680,0.0,560);
	
	 glClear(GL_COLOR_BUFFER_BIT);
	
       }

    void section(void){
	  
	   glBegin(GL_LINES);
	   glColor3f(0.0,255.0,0.0);
	   glColor3f(1.0,1.0,1.0); 
	   glVertex2i(70,275);
	   glVertex2i(630,275);
	   glVertex2i(335,500);
	   glVertex2i(335,50);
	   glVertex2i(335,500);
	   glVertex2i(320,480);
	   glVertex2i(335,500);
	   glVertex2i(350,480);
	   glVertex2i(320,480);
	   glVertex2i(350,480);
	   glVertex2i(70,275);
	   glVertex2i(85,290);
	   glVertex2i(70,275);
	   glVertex2i(85,260);
	   glVertex2i(85,290);
	   glVertex2i(85,260);
	   glVertex2i(630,275);
	   glVertex2i(615,290);
	   glVertex2i(630,275);
	   glVertex2i(615,260);
	   glVertex2i(615,290);
	   glVertex2i(615,260);
	   glVertex2i(335,50);
	   glVertex2i(350,65);
	   glVertex2i(335,50);
	   glVertex2i(320,65);
	   glVertex2i(320,65);
	   glVertex2i(350,65);
	   

	   
	   
	   
	   glEnd();
	   glFlush();
	   

	   

}






void handleKeyPress (unsigned char key, int x, int y) {
    // Add your logic for handling each key press here using if-else statements
    if (key == 'A' || key == 'a') {

	   
	   //main line
	   
	   
	   glColor3f(0.0,1.0,0.0);
	   
	   glRecti(70,10,310,260);
	   
	   
	   
	   glBegin(GL_LINES);
	   
	  glColor3f(1.0, 1.0, 1.0);
	   		  
	   glVertex2i(80,250);
	   glVertex2i(300,250);
	   
	   glVertex2i(300,250);
	   glVertex2i(300,20);
	   
	   glVertex2i(300,20);
	   glVertex2i(80,20);
	   
	   glVertex2i(80,20);
	   glVertex2i(80,250);
	   
	   // center
	   glVertex2i(80,250);
	   glVertex2i(190,250);
	   
	   glVertex2i(190,250);
	   glVertex2i(190,20);
	   
	   
	   
	   //goal area
	   glVertex2i(190,20);
	   glVertex2i(80,20);
	   
	   glVertex2i(80,20);
	   glVertex2i(80,100);
	   
	   glVertex2i(80,100);
	   glVertex2i(135,100);
	   
	   glVertex2i(135,100);
	   glVertex2i(135,170);
	   
	   glVertex2i(135,170);
	   glVertex2i(80,170);
	   //main goal
	   glVertex2i(80,170);
	   glVertex2i(80,150);
	   
	   glVertex2i(80,150);
	   glVertex2i(100,150);
	   
	   glVertex2i(100,150);
	   glVertex2i(100,120);
	   
	   glVertex2i(100,120);
	   glVertex2i(80,120);
	   
	   //move to right side goal do
	   
	   
	   glVertex2i(80,120);
	   glVertex2i(80,20);
	   
	   glVertex2i(80,20);
	   glVertex2i(300,20);
	   
	   glVertex2i(300,20);
	   glVertex2i(300,100);
	   
	   glVertex2i(300,100);
	   glVertex2i(255,100);
	   
	   glVertex2i(255,100);
	   glVertex2i(255,170);
	   
	   glVertex2i(255,170);
	   glVertex2i(300,170);
	   
	   // the rignt main goal
       glVertex2i(280,150);
       glVertex2i(300,150);
	   
	   glVertex2i(280,150);
	   glVertex2i(280,120);
	   
	   glVertex2i(280,120);
	   glVertex2i(300,120);
	   
	   //make the corna
	   
	    glVertex2i(300,150);
	    glVertex2i(300,240);
	     
	    glVertex2i(300,240);
	    glVertex2i(290,250);
	     
	    glVertex2i(290,250);
	    glVertex2i(90,250);
	     
	    glVertex2i(90,250);
	    glVertex2i(80,240);
	     
	    glVertex2i(80,240);
	    glVertex2i(80,30);
	     
	    glVertex2i(80,30);
	    glVertex2i(90,20);
	     
	    glVertex2i(90,20);
	    glVertex2i(290,20);
	     
	    glVertex2i(290,20);
	    glVertex2i(300,30);
	    
	    glEnd();
	    
	    // Draw the circle at the center of the soccer field.
 	

glBegin(GL_POLYGON); // draws the inner circle of the stadium
for(int i; i<20; i++){
  float theta = 2.0f * 3.1415f * float(i) /20.0f;
  float x = 20 * cosf(theta);
  float y = 20 * sinf(theta);
  glVertex2f(x+ 190, y+ 140);
}
glEnd();
glFlush();

	     
	     
         
         
     }else if (key == 'B' || key == 'b') {
     	
     	//3points
    glBegin(GL_LINES); 	
    glClear(GL_COLOR_BUFFER_BIT);
    
    	glBegin(GL_QUADS);

	    glColor3f(0.0,1.0,0.0);
	   
	   
  glVertex2i(430,410); 
  glVertex2i(425,410);
  
  glVertex2i(425,410);
  glVertex2i(425,415);
  
  glVertex2i(425,415);
  glVertex2i(430,415);
  
  glVertex2i(430,415);
  glVertex2i(430,410);
  
  
  
  glVertex2i(480,310);
  glVertex2i(475,310);
  
  glVertex2i(475,310);
  glVertex2i(475,315);
    
  glVertex2i(475,315);
  glVertex2i(480,315);
  
  glVertex2i(480,315);
  glVertex2i(480,310);
  
    glVertex2i(530,410);
    glVertex2i(535,410);
    
    glVertex2i(535,410);
    glVertex2i(535,415);
    
    glVertex2i(535,415);
    glVertex2i(530,415);
    
    glVertex2i(530,415);
    glVertex2i(530,410);



	   
	   glEnd();
	   glFlush();
     	


     	
     	
     	
     }
 }
 
 void mouseLRpressed( int button, int state, int x, int y )
{
if  (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN || button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN )

{
	
	//flage
	glBegin(GL_LINES);
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);

	   
	   
	   glColor3f(0.0,1.0,0.0);
	   

	    glVertex2i(130,500); 
	    glVertex2i(230,500); 


	     glVertex2i(230,500); 
	      glVertex2i(230,470); 
	      
	      glVertex2i(230,470);
	      glVertex2i(130,470);
	      
	      glVertex2i(130,470);
	      glVertex2i(130,500);
	      
	       glVertex2i(130,500);
	       glVertex2i(130,470);
	       
	       
	       	   	//yello color
	glColor3f(1.0,1.0,0.0);
	  glVertex2i(130,470);
	  glVertex2i(130,440);
	  
	  glVertex2i(130,440);
	  glVertex2i(230,440);
	  
	   glVertex2i(230,440);
	    glVertex2i(230,470);
	    
	    glVertex2i(230,470);
	    glVertex2i(130,470);
	    
	    glVertex2i(130,470);
	    glVertex2i(130,440);
	    
	    
	    //red
	    
	    glColor3f(1.0,0.0,0.0);
	    
	    glVertex2i(130,440);
	    glVertex2i(130,410);
	    
	    glVertex2i(130,410);
	    glVertex2i(230,410);
	    
	    glVertex2i(230,410);
	    glVertex2i(230,440);

	     glVertex2i(130,440);
	     glVertex2i(130,410);
	     

	      
	       glEnd();
	   // flage vertica
        

     	   glBegin(GL_LINES);
	   glColor3f(0.0,255.0,0.0);
	   glColor3f(1.0,1.0,1.0); 
	
	

	   glVertex2i(130,410);
	   glVertex2i(125,410);
	   
	   glVertex2i(125,410);
	   glVertex2i(125,505);
	   
	   glVertex2i(125,505);
	   glVertex2i(130,505);
	   
	   glVertex2i(130,505);
	   glVertex2i(130,500);
	   
	   glVertex2i(130,500);
	   glVertex2i(125,500);
	   
	   glVertex2i(125,500);
	   glVertex2i(125,310);
	   
	   glVertex2i(125,310);
	   glVertex2i(100,310);
	   
	   glVertex2i(100,310);
	   glVertex2i(100,300);
	   
	   glVertex2i(100,300);
	   glVertex2i(155,300);
	   
	   glVertex2i(155,300);
	   glVertex2i(155,305);
	   
	   glVertex2i(155,305);
	   glVertex2i(145,305);
	   
	   glVertex2i(145,305);
	   	glVertex2i(145,310);
	   	   
	   
	   glVertex2i(145,310);
	   glVertex2i(130,310);
	   
	   glVertex2i(130,310);
	   glVertex2i(130,410);
	   


	
	
		        glEnd();
	 glFlush();	    
	
}
}


void handleArrow(int key, int x, int y) {
    if (key == GLUT_KEY_UP  ) {
    	
    	//line

	    
	      glLineWidth(3.0);
    glColor3f(1.0, 1.0, 0.0);
    glEnable(GL_LINE_STIPPLE);
    glLineStipple(1, 0x00FF);
    glBegin(GL_LINES);
    glVertex2f(400, 240);
    glVertex2f(410, 240);
    
    glVertex2f(415, 240);
    glVertex2f(425, 240);
    
   glVertex2f(430, 240);
   glVertex2f(440, 240);
    
    glVertex2f(445, 240);
    glVertex2f(455, 240);
    
    glVertex2f(460, 240); 
    glVertex2f(470, 240);
      
    glVertex2f(475, 240);
    glVertex2f(485, 240);
        
    glVertex2f(490, 240);
    glVertex2f(500, 240);
    
    glVertex2f(505, 240);
    glVertex2f(515, 240);
      
    glVertex2f(520, 240);
    glVertex2f(530, 240);
    
    glVertex2f(535, 240);
    glVertex2f(545, 240);
    
    glVertex2f(550, 240);
    glVertex2f(560, 240);
    
    glVertex2f(565, 240);
    glVertex2f(575, 240);
    
    glVertex2f(580, 240);
    glVertex2f(590, 240);
    
    glEnd();
    glDisable(GL_LINE_STIPPLE); 
    
    // Draw a continuous line
    glLineWidth(3.0); 
   glColor3f(0.0, 1.0, 0.0); // Green color
    
    glBegin(GL_LINE_STRIP);
    glVertex2f(400, 260);
    glVertex2f(590, 260);
    
    glEnd();
    
    glFlush();
	    
	    
	    

	    
	    
	    
	    
	    
    	
    	
    	
    	
    }
    else if ( key == GLUT_KEY_DOWN){
    	//star
    	
    	
    glLineWidth(3.0); 
   glColor3f(0.0, 1.0, 0.0); // Green color
    
    glBegin(GL_LINE_STRIP);
    
     
  glVertex2i(435,145);
         glVertex2i(490,220);
        
         glVertex2i(490,220); 
         glVertex2i(530,140);
            
         glVertex2i(530,140);
         glVertex2i(430,195);
         
         glVertex2i(430,195);
         glVertex2i(540,185);
         
         glVertex2i(540,185);
         glVertex2i(435,145);
	  

      glEnd();
	 glFlush();	
    	
    }
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (int argc, char*  argv[]){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB);
	glutInitWindowSize(800,800);
	glutInitWindowPosition(10,10);
	glutCreateWindow("point");
	glutDisplayFunc(section);
	
	

	
glutKeyboardFunc(handleKeyPress);
glutMouseFunc(mouseLRpressed);
glutSpecialFunc(handleArrow);


	

	
	
   
    section();
	MULE();
	glutMainLoop();

	return 0;
}
