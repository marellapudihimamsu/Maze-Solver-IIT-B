int a[7];
int kp = 20;
int err = 0;
char m[100];
int i=0;
int sc=0;
int is=0;
int k=2;
int n=0;
void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(12, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}
void loop()
{
  scan();
  if(   (a[0]==1 &&a [1]==1 && a[2]== 1&&a[3] == 1 && a[4] == 1&& a[5] == 1&&a[6]== 1)||(  a[0] == 1   &&   a[1] == 1    &&  a[2] == 1     &&    a[3] == 1   &&       a[4] == 1   &&         a[5] == 1     &&      a[6] == 1) || ( a[0] == 0 && a[1] == 1 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 1 && a[6] == 1) || ( a[0] == 1 && a[1] == 1 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 1 && a[6] == 0)||a[0] == 0     &&     a[1] == 0    &&   a[2] == 0    &&    a[3] == 0  &&      a[4] == 0        &&      a[5] == 0      &&   a[6] == 0  || (( a[0] == 0 && a[1] == 0 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 1 && a[6] == 1))||   (( a[0] == 1 && a[1] == 1 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 0 && a[6] == 0))   )
  {
     
           f(5,kp);
         delay(30);
       scan();
       if (   (  a[0] == 1   &&   a[1] == 1    &&  a[2] == 1     &&    a[3] == 1   &&       a[4] == 1   &&         a[5] == 1     &&      a[6] == 1)  /*|| ( a[0] == 0 && a[1] == 1 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 1 && a[6] == 1) || ( a[0] == 1 && a[1] == 1 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 1 && a[6] == 0)*/ )
      {  
              f(4,kp); 
              delay(380); 
              scan();
              if(a[0] == 1   &&   a[1] == 1    &&  a[2] == 1     &&    a[3] == 1   &&       a[4] == 1   &&         a[5] == 1     &&      a[6] == 1)
              {
                 Serial.println("end of path ");
                lt(0,0);
                delay(10);
                for(int ikoko=0;ikoko<10;ikoko++)
                {
                Serial.println("_____________________");
                                for(int j=0;j<i;j++)
                                 {
                                      Serial.print(m[j]);
                                  }
                                  Serial.println("______________________________");                 

                                        for(n=0;m[n]!='\0';n++)
                                        {
                                                         Serial.print("            ");
                                                            Serial.print(m[n]);
                                         }
                                         n=n+1;
    
                                         if(k!=0)
                                          {
                                                      k=0;
                                                      is=0;
                                                       while(m[is]!='\0')
                                                        {
                                                               if(m[is+1]=='U')
                                                                {   
                                                                      reeplace();
                  
                                                                 }
                                                                  else
                                                                  is=is+1;        
                                                           }    
                                         }
                                          Serial.println("_____________________");
                                          Serial.println();
                                         for(int j=0;m[j]!='\0';j++)
                                         {
                                                     Serial.print(m[j]);
                                            }
                                          Serial.println("______________________________");
                                          analogWrite(A0,140);
                }
                    delay(5000);
                            
                     analogWrite(A0,0);
                      
                                    for(long abc=1;abc>0;abc++)
                                    {
                                      
                                               scan();
                                             if(   (a[0]==1 &&a [1]==1 && a[2]== 1&&a[3] == 1 && a[4] == 1&& a[5] == 1&&a[6]== 1)||(  a[0] == 1   &&   a[1] == 1    &&  a[2] == 1     &&    a[3] == 1   &&       a[4] == 1   &&         a[5] == 1     &&      a[6] == 1) || ( a[0] == 0 && a[1] == 1 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 1 && a[6] == 1) || ( a[0] == 1 && a[1] == 1 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 1 && a[6] == 0)||a[0] == 0     &&     a[1] == 0    &&   a[2] == 0    &&    a[3] == 0  &&      a[4] == 0        &&      a[5] == 0      &&   a[6] == 0  || (( a[0] == 0 && a[1] == 0 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 1 && a[6] == 1))||   (( a[0] == 1 && a[1] == 1 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 0 && a[6] == 0))   )
                                           {
                                                           f(3,kp);
                                                               delay(50);
                                                            scan();
                                                             if (   (  a[0] == 1   &&   a[1] == 1    &&  a[2] == 1     &&    a[3] == 1   &&       a[4] == 1   &&         a[5] == 1     &&      a[6] == 1)  /*|| ( a[0] == 0 && a[1] == 1 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 1 && a[6] == 1) || ( a[0] == 1 && a[1] == 1 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 1 && a[6] == 0)*/ )
                                                                {  
                                                                                f(4,kp); 
                                                                                delay(380); 
                                                                                scan();
                                                                                if(a[0] == 1   &&   a[1] == 1    &&  a[2] == 1     &&    a[3] == 1   &&       a[4] == 1   &&         a[5] == 1     &&      a[6] == 1)
                                                                                {
                                                                                          Serial.println("end of path ");
                                                                                           lt(0,0);
                                                                                              analogWrite(A0,140);
                      
                                                                                           delay(1000000000);
                                                                                  }
                                                                                  else
                                                                                 {
                                                                                           if(m[sc]=='R')
                                                                                            {
                                                                                                  turnr();
                
                                                                                            }
                                                                                            if (m[sc]=='L')
                                                                                            {
                                                                                                     turnl();
                   
                                                                                             }
                                                                                             if(m[sc]=='S')
                                                                                             {
                                                                                                     movef();
                    
                                                                                              }
                                                                                               sc++;
                                                                                       }
                                                                       }   
                                                                       if (  ( a[0]==0&& a[1]==0&&a[2]==0&&a[3]==1&&a[4]==1&&a[5]==1&&a[6]==1)  ||   (( a[0] == 0 && a[1] == 0 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 1 && a[6] == 1))||  ( a[0]==0&& a[1]==1&&a[2]==1&&a[3]==1&&a[4]==1&&a[5]==1&&a[6]==1) )
                                                                                 {
                                                                                            f(6, kp);
                                                                                            delay(125);
                                                                                             scan();
                                                                                              if (   a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0 && a[5] == 0 && a[6] == 0 )
                                                                                            {
                                                                                                     Serial.println(" Right turn ");
                                                                                                      scan();
                                                                                                      rt2(6,kp);
                                                                                                      delay(150);
                                                                                                       for (; a[2] == 0 && a[3] == 0 ;)
                                                                                                      {
                                                                                                              scan();
                                                                                                              rt2(5, kp);

                                                                                                         }
                                                                                              }
                                                                                               else
                                                                                                 {
                                                                                                         Serial.println(" Straight due to T juction ");
                                                                                                          if(m[sc]=='R')
                                                                                                           {
                                                                                                                        turnr();
                                                                                                              }
                                                                                                           if(m[sc]=='S')
                                                                                                          {
                                                                                                                       movef();
                     
                                                                                                           }
                                                                                                           sc++;
                                                                                               }
                                                                                     }           
                                                                                    if (  ( a[0]==1&& a[1]==1&&a[2]==1&&a[3]==1&&a[4]==0&&a[5]==0&&a[6]==0) ||  (( a[0] == 1 && a[1] == 1 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 0 && a[6] == 0)) ||(( a[0]==1&& a[1]==1&&a[2]==1&&a[3]==1&&a[4]==1&&a[5]==1&&a[6]==0)) )
                                                                                     { 
                                                                                               fr(4, kp);
                                                                                               delay(200);
                                                                                               lt(0,0);
                                                                                                delay(1000);
                                                                                                 scan();
                                                                                                 if (   a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0 && a[5] == 0 && a[6] == 0 )
                                                                                                 {
                                                                                                           Serial.println(" L  turn");
                                                                                                           
                                                                                                          lt2(6,kp);
                                                                                                          delay(30);
                                                                                                             fll();
                                                                                                  }
                                                                                                  else
                                                                                                  {
                                                                                                          Serial.println(" L  due to T juction");
             
                                                                                                            if (m[sc]=='L')
                                                                                                             {
                                                                                                                           turnl();
                   
                                                                                                              }
                                                                                                            if(m[sc]=='S')
                                                                                                                {
                                                                                                                             movef();
                      
                                                                                                                 }
                                                                                                                 sc++;
                                                                                                     }
    
                                                                                        }

                                           }                                           
                                          if (a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0 && a[5] == 1)
                                          {
                                                        rt(5, kp);
                                           }
                                         if (a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 1 && a[5] == 1)
                                         {
                                                          rt(3, kp);
                                          }
                                          if (a[1] == 0 && a[2] == 0 && a[3] == 1 && a[4] == 1 && a[5] == 0)
                                         {
                                                           rt(2, kp);
                                          }
                                          if ( a[1] == 0  &&   a[2] == 0   &&  a[3] == 1   &&  a[4] == 1  && a[5] == 1 )
                                            {
                                                               rt(3, kp);
                                             }
                                             if (a[1] == 0 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 0)
                                              {
                                                              f(4,kp);

                                               }
                                               if (a[1] == 0 && a[2] == 1 && a[3] == 1 && a[4] == 0 && a[5] == 0)
                                               {
                                                             lt(2, kp);
                                               }
                                       if (a[1] == 1 && a[2] == 1 && a[3] == 0 && a[4] == 0 && a[5] == 0)
                                       {
                                                 lt(3, kp);
                                       }
                                       if (a[1] == 1 && a[2] == 0 && a[3] == 0 && a[4] == 0 && a[5] == 0)
                                       {
                                                     lt(5, kp);
                                       }
                                         if  (a[1] == 1 && a[2] == 1 && a[3] == 1 && a[4] == 0 && a[5] == 0)
                                        {
                                                     lt(4, kp);
                                            }                  
                             }                   
                    
                }
              else
              {
                   Serial.println(" L at junction + ");
                    lt2(4, kp);
                   delay(500);
                   fll();  
                 m[i]='L';
                i++;
              }
       }
      if ( (    a[0] == 0     &&     a[1] == 0    &&   a[2] == 0    &&    a[3] == 0  &&      a[4] == 0        &&      a[5] == 0      &&   a[6] == 0        )   )
       {
              Serial.println("  U due to dead end   ");
              f(8,kp);
              delay(50);
              lt2(8, kp);
                delay(350);
               scan();
                for (; a[2] == 0 && a[3] == 0;)
                {
                       scan();
                        lt2(50,1);
                        delay(1);
                      
                 }
                 rev(240,1);
                 delay(150);
                m[i]='U';
                i++;
              
          }
           if (  ( a[0]==0&& a[1]==0&&a[2]==0&&a[3]==1&&a[4]==1&&a[5]==1&&a[6]==1)  ||   (( a[0] == 0 && a[1] == 0 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 1 && a[6] == 1))||  ( a[0]==0&& a[1]==1&&a[2]==1&&a[3]==1&&a[4]==1&&a[5]==1&&a[6]==1) )
          {
                 f(6, kp);
                 delay(200);
                        scan();
                 if (   a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0 && a[5] == 0 && a[6] == 0 )
                  { rev(6,kp);
                  delay(150);
                    rt2(6,kp);
                               delay(150);
                       Serial.println(" Right turn ");
                       scan();
                        for (; a[2] == 0 && a[3] == 0 && a[4] == 0;)
                        {
                               scan();
                               rt2(5, kp);

                         }
                   }
                  else
                  {
                         Serial.println(" Straight due to T juction ");
                         f(3, kp);
                         delay(1);
                        m[i]='S';
                i++;
                   }
        }
        if (  ( a[0]==1&& a[1]==1&&a[2]==1&&a[3]==1&&a[4]==0&&a[5]==0&&a[6]==0) ||  (( a[0] == 1 && a[1] == 1 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 0 && a[6] == 0)) ||(( a[0]==1&& a[1]==1&&a[2]==1&&a[3]==1&&a[4]==1&&a[5]==1&&a[6]==0)) )
        { 
              fr(4, kp);
              delay(200);
               scan();
              if (   a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0 && a[5] == 0 && a[6] == 0 )
              {
                   Serial.println(" L  turn");
                     lt2(6,kp);
                                                                                                      delay(300);
                   fll();
               }
               else
              {
                    Serial.println(" L  due to T juction");
                      lt2(8, kp);
                      delay(300);
                     fll();
                    m[i]='L';
                i++;
               }    
        }
  }

  if (a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0 && a[5] == 1)
  {
    rt(5, kp);
  }
  if (a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 1 && a[5] == 1)
  {
    rt(3, kp);
  }
  if (a[1] == 0 && a[2] == 0 && a[3] == 1 && a[4] == 1 && a[5] == 0)
  {
    rt(2, kp);
  }
  if ( a[1] == 0  &&   a[2] == 0   &&  a[3] == 1   &&  a[4] == 1  && a[5] == 1 )
  {
    rt(3, kp);
  }
  if (a[1] == 0 && a[2] == 1 && a[3] == 1 && a[4] == 1 && a[5] == 0)
  {
    f(5,kp);

  }
  if (a[1] == 0 && a[2] == 1 && a[3] == 1 && a[4] == 0 && a[5] == 0)
  {
    lt(2, kp);
  }
  if (a[1] == 1 && a[2] == 1 && a[3] == 0 && a[4] == 0 && a[5] == 0)
  {
    lt(3, kp);
  }
  if (a[1] == 1 && a[2] == 0 && a[3] == 0 && a[4] == 0 && a[5] == 0)
  {
    lt(5, kp);
  }
  if  (a[1] == 1 && a[2] == 1 && a[3] == 1 && a[4] == 0 && a[5] == 0)
  {
    lt(4, kp);
  }

}
void fll(void)
{
  scan();
  a[0] = 1;
  a[1] = 1;
  a[5] = 1;
  a[6] = 1;
  //Serial.println("searching line");
  Serial.println("");
  for ( ; a[2] == 0 && a[3] == 0 /*&& a[4] == 0*/;)
  {
   // Serial.print(" . ");
    lt2(3, kp);
    delay(1);
    scan();
  }
  Serial.println("");
}
void flr(void)
{
  scan();
  a[0] = 1;
  a[1] = 1;
  a[5] = 1;
  a[6] = 1;
  //Serial.println("searching line");
  Serial.println("");
  for ( ; a[2] == 0 && a[3] == 0 && a[4] == 0;)
  {
   // Serial.print(" . ");
   scan();
    rt2(3, kp);
    delay(1);
    scan();
  }
  Serial.println("");
}
void scan(void)
{
  a[0] = digitalRead(12);
  a[1] = digitalRead(9);
  a[2] = digitalRead(8);
  a[3] = digitalRead(7);
  a[4] = digitalRead(4);
  a[5] = digitalRead(3);              //scanning  sensor value
  a[6] = digitalRead(2);
    for(int i=0;i<7;i++)
       {
           Serial.print(a[i]);
           Serial.print("   ");

        }
        Serial.println("  ");
  
}
void turnr(void)
{        
  rt2(8, kp);
  delay(250);
  flr();  
}
void turnl(void)
{
  lt2(8, kp);
  delay(200);
  fll();  
  }
 void movef(void)
 {
  f(4,kp);
  delay(30);
  }
  void f(int e, int k)
{ int z = k * e;
  analogWrite(5, z + 5);
  analogWrite(6, 0);         // move forward
  analogWrite(10, z);
  analogWrite(11, 0);
  delay(1);
}
void rev(int e, int k)
{ int z = k * e;
  analogWrite(5, 0);
  analogWrite(6, z+3);         // move backward
  analogWrite(10, 0);
  analogWrite(11, z);
  delay(1);
}
void fr(int e, int k)
{ int z = k * e;
  analogWrite(5, z +5);
  analogWrite(6, 0);         // move forward
  analogWrite(10, z);
  analogWrite(11, 0);
  delay(1);
}
void fl(int e, int k)
{ int z = k * e;
  analogWrite(5, z + 14);
  analogWrite(6, 0);         // move forward
  analogWrite(10, z + 16);
  analogWrite(11, 0);
  delay(1);
}
void rt(int e, int k)
{ int z = e * k;
  analogWrite(5, z+5);
  analogWrite(6, 0);
  analogWrite(11, 0);         // right turn(single wheel)(left forward)
  analogWrite(10, 0);
  delay(1);
}
void rt2(int e, int k)
{ int z = e * k;
  analogWrite(5, z + 5);
  analogWrite(6, 0);
  analogWrite(11, z / 2);       // right turn(single wheel)(left forward)
  analogWrite(10, 0);
  delay(1);
}
void lt(int e, int k)
{ int z = e * k;
  analogWrite(6, 0);
  analogWrite(5, 0);
  analogWrite(10, z);           // left turn(single wheel)(right forward)
  analogWrite(11, 0);
  delay(1);
}
void lt2(int e, int k)
{ int z = e * k;
  analogWrite(6, z + 5);
  analogWrite(5, 0);
  analogWrite(10, z);           // left turn(single wheel)(right forward)
  analogWrite(11, 0);
  delay(1);
}
void slt2(int e, int k)
{ int z = e * k;
  analogWrite(6, 0);
  analogWrite(5, z + 14);
  analogWrite(10, z);
  analogWrite(11, 0);
  delay(1);
}
void reeplace(void )
{     int o;
       if(m[is]=='L'&&m[is+1]=='U'&&m[is+2]=='R')
       o=1;
       if(m[is]=='R'&&m[is+1]=='U'&&m[is+2]=='L')
       o=2;
       if(m[is]=='S'&&m[is+1]=='U'&&m[is+2]=='L')
       o=3;
       if(m[is]=='L'&&m[is+1]=='U'&&m[is+2]=='L')
       o=4;
       if(m[is]=='R'&&m[is+1]=='U'&&m[is+2]=='R')
       o=5;
       if(m[is]=='S'&&m[is+1]=='U'&&m[is+2]=='R')
       o=6;
       if(m[is]=='L'&&m[is+1]=='U'&&m[is+2]=='S')
       o=7;
       if(m[is]=='R'&&m[is+1]=='U'&&m[is+2]=='S')
       o=8;
       if(m[is]=='S'&&m[is+1]=='U'&&m[is+2]=='S')
       o=9;
      
       switch(o)
       {
          case 1 :
               m[is]= 'U' ; 
               shift();     
               k++;
              break;
           case  2:
               m[is]= 'U' ; 
               shift();     
               k++;
              break;
            case  3:
               m[is]=  'R'; 
               shift();     
               k++;
              break;
            case  4:
               m[is]='S'  ; 
               shift();     
               k++;
              break;
            case 5 :
               m[is]='S'  ; 
               shift();     
               k++;
              break;
            case  6:
               m[is]=  'L'; 
               shift();     
               k++;
              break;
            case  7:
               m[is]= 'R' ; 
               shift();     
               k++;
              break;
              case  8:
               m[is]= 'L' ; 
               shift();     
               k++;
              break;
              case  9:
               m[is]= 'U' ; 
               shift();     
               k++;
              break;
              }
 }
void shift(void)
{
      for(int e=is+1;e<=n-2;e++) 
      {
        m[e]=m[e+2];       
        }  
}

 

